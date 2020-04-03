#include "stdafx.h"
#include "spdlog/spdlog.h"
#include <spdlog/sinks/basic_file_sink.h>
#include "PolyHook.hpp"
#include <fcntl.h>
#include <io.h>
#include <iostream>
#include "winsock2.h"
#include "json.hpp"

using namespace nlohmann;

#pragma comment(lib, "Ws2_32.lib.")

#ifdef _WIN64
#pragma comment(lib,"../Capstone/msvc/x64/Debug/capstone.lib")
#define HOOK_DETOUR PLH::X64Detour
#else
#define HOOK_DETOUR PLH::X86Detour
#pragma comment(lib,"../Capstone/msvc/x86/Debug/capstone.lib")
#endif

char* TCharToChar(const TCHAR* tchar)
{
	static char buffer[0x1000];
	int iLength;
	iLength = WideCharToMultiByte(CP_ACP, 0, tchar, -1, NULL, 0, NULL, NULL);
	WideCharToMultiByte(CP_ACP, 0, tchar, -1, buffer, iLength, NULL, NULL);
	return buffer;
}

void InitConsole();

decltype(&connect) o_connect;
int WSAAPI my_connect(
	_In_ SOCKET s,
	_In_reads_bytes_(namelen) const struct sockaddr FAR* name,
	_In_ int namelen
) {
	// ((SOCKADDR_IN*)name)->sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	// ((SOCKADDR_IN*)name)->sin_port = htons(65500);
	//
	// spdlog::info("connect {}", name->sa_data);

	return o_connect(s, name, namelen);
}

VOID
WINAPI
MyGetSystemTimeAsFileTime(
	_Out_ LPFILETIME lpSystemTimeAsFileTime
)
{
	lpSystemTimeAsFileTime->dwLowDateTime = 0x01C4E6B3;
}

BOOL
WINAPI
MyCloseWindow(
	_In_  HWND hWnd)
{
	spdlog::info("关闭窗口", 0);
	return true;
}

BOOL
WINAPI
MyTerminateProcess(
	_In_ HANDLE hProcess,
	_In_ UINT uExitCode
)
{
	spdlog::info("关闭进程", 0);
	return true;
}

typedef int(__thiscall* t_json_encode)(DWORD pThis, DWORD data , DWORD data3);
t_json_encode o_json_encode;
int __fastcall json_encode(DWORD data, DWORD data1, DWORD data2, DWORD data3){
	int result = o_json_encode(data, data2, data3);

	const auto json_str = *reinterpret_cast<std::string*>(data);
	auto dec_json = nlohmann::json::parse(json_str);
	
	spdlog::info("{}", dec_json["method"]);
	return result;
}

typedef int(__thiscall* t_json_decode)(DWORD pThis, int a2, int a3, int a4);
t_json_decode o_json_decode;
int __fastcall json_decode(DWORD data, DWORD a1, int a2, int a3, int a4) {
	int result = o_json_decode(data, a2, a3, a4);
	spdlog::warn("{}", *(char**)(data + 0x54));

	auto dec_json = nlohmann::json::parse(*(char**)(data + 0x54));
	spdlog::warn("{}", dec_json["status"]);

	return result;
}


void hook() {
	InitConsole();
	
	auto handle_kernel32 = GetModuleHandle(L"kernelbase.dll");
	auto handle_user32 = GetModuleHandle(L"User32.dll");
	auto handle_ws2_32 = GetModuleHandle(L"WS2_32.dll");

	std::thread([]() {
		while (!GetModuleHandle(L"Web.dll")) {
			Sleep(0);
		}
		auto hook = new HOOK_DETOUR;
		auto handle_web = GetModuleHandle(L"Web.dll");
		spdlog::info("Web {}", int((BYTE*)handle_web + 0x33A90));
		hook = new HOOK_DETOUR;
		auto h_json_encode = ((BYTE*)handle_web + 0x33A90);
		hook->SetupHook((BYTE*)h_json_encode, (BYTE*)&json_encode); //can cast to byte* to
		hook->Hook();
		o_json_encode = hook->GetOriginal<t_json_encode>();

		
		hook = new HOOK_DETOUR;
		auto h_json_decode = ((BYTE*)handle_web + 0x35440);
		hook->SetupHook((BYTE*)h_json_decode, (BYTE*)&json_decode); //can cast to byte* to
		hook->Hook();
		o_json_decode = hook->GetOriginal<t_json_decode>();
		}).detach();
	

	
	if (!handle_kernel32)
	{
		handle_kernel32 = LoadLibrary(L"kernel32.dll");
		if (!handle_kernel32) {
			MessageBox(0, L"获取kernel模块地址失败", 0, 0);
			return;
		}
	}

	auto hook = new HOOK_DETOUR;
	hook = new HOOK_DETOUR;
	auto h_CloseWindow = GetProcAddress(handle_user32, "CloseWindow");
	hook->SetupHook((BYTE*)h_CloseWindow, (BYTE*)&MyCloseWindow); //can cast to byte* to
	hook->Hook();

	hook = new HOOK_DETOUR;
	auto h_TerminateProcess = GetProcAddress(handle_kernel32, "TerminateProcess");
	hook->SetupHook((BYTE*)h_TerminateProcess, (BYTE*)&MyTerminateProcess); //can cast to byte* to
	hook->Hook();

	hook = new HOOK_DETOUR;
	auto h_connect = GetProcAddress(handle_ws2_32, "connect");
	hook->SetupHook((BYTE*)h_connect, (BYTE*)& my_connect); //can cast to byte* to
	hook->Hook();
	o_connect = hook->GetOriginal<decltype(&connect)>();


}


void InitConsole()
{
	BOOL rc = ::AllocConsole();
	SetConsoleOutputCP(CP_UTF8);

	if (rc) {
		freopen("CONOUT$", "w", stdout);

		HANDLE hin = ::GetStdHandle(STD_INPUT_HANDLE);
		HANDLE hout = ::GetStdHandle(STD_OUTPUT_HANDLE);
		//SetConsoleTextAttribute(hout, 0x0a);
		CONSOLE_SCREEN_BUFFER_INFO coninfo;
		GetConsoleScreenBufferInfo(hout, &coninfo);
		coninfo.dwSize.Y = 1500;
		SetConsoleScreenBufferSize(hout, coninfo.dwSize);
		int hCrt = _open_osfhandle((intptr_t)hin, _O_TEXT);

		if (hCrt != -1) {
			FILE* fpin = _fdopen(hCrt, "r");

			if (fpin) *stdin = *fpin;
		}

		hCrt = _open_osfhandle((intptr_t)hout, _O_TEXT);

		if (hCrt != -1) {
			FILE* fpout = _fdopen(hCrt, "wt");

			if (fpout) *stdout = *fpout;
		}

		hCrt = _open_osfhandle((intptr_t)::GetStdHandle(STD_ERROR_HANDLE), _O_TEXT);

		if (hCrt != -1) {
			FILE* hf = ::_fdopen(hCrt, "w");

			if (hf) *stderr = *hf;
		}

		EnableMenuItem(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_DISABLED);
		std::ios_base::sync_with_stdio();      // 灏唅ostream 娴佸悓c runtime lib 鐨剆tdio 鍚屾锛屾爣鍑嗘槸鍚屾鐨?
		std::locale::global(std::locale("chs"));
		//setlocale(LC_CTYPE, "");    // MinGW gcc.
		std::wcout.imbue(std::locale(""));
	}
}
