#include "pch.h"
#include "hook_ymjh.h"
#include "spdlog/spdlog.h"
#include <spdlog/sinks/basic_file_sink.h>
#include "PolyHook.hpp"
#include <fcntl.h>
#include <io.h>
#include <iostream>
#include "winsock2.h"
#include "json.hpp"

#ifdef _WIN64
#pragma comment(lib,"../Capstone/msvc/x64/Debug/capstone.lib")
#define HOOK_DETOUR PLH::X64Detour
#else
#define HOOK_DETOUR PLH::X86Detour
#pragma comment(lib,"../Capstone/msvc/x86/Debug/capstone.lib")
#endif

void InitConsole();

decltype(&WSARecv) o_WSARecv;
int WSAAPI MyWSARecv(
	_In_ SOCKET s,
	_In_reads_(dwBufferCount) __out_data_source(NETWORK) LPWSABUF lpBuffers,
	_In_ DWORD dwBufferCount,
	_Out_opt_ LPDWORD lpNumberOfBytesRecvd,
	_Inout_ LPDWORD lpFlags,
	_Inout_opt_ LPWSAOVERLAPPED lpOverlapped,
	_In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
)
{
	auto ret = o_WSARecv(s, lpBuffers, dwBufferCount, lpNumberOfBytesRecvd, lpFlags, lpOverlapped, lpCompletionRoutine);
	auto i = lpBuffers->buf - 36;

	
	if (memcmp(i, "total", 5) == 0) {
		memcpy(i, "total=1,result=27,endtime=2030-07-01\00", 36);
	}
	spdlog::info("{}", i);

	return ret;
}

decltype(&SetCursorPos) o_SetCursorPos;
BOOL WINAPI MySetCursorPos(
	_In_ int X,
	_In_ int Y) {
	return true;
}

void hook()
{
	InitConsole();
	auto handle_ws2_32 = GetModuleHandle(L"WS2_32.dll");
	
	auto hook = new HOOK_DETOUR;
	auto h_connect = GetProcAddress(handle_ws2_32, "WSARecv");
	hook->SetupHook((BYTE*)h_connect, (BYTE*)&MyWSARecv); //can cast to byte* to
	hook->Hook();
	o_WSARecv = hook->GetOriginal<decltype(&WSARecv)>();

	hook = new HOOK_DETOUR;
	hook->SetupHook((BYTE*)&SetCursorPos, (BYTE*)&MySetCursorPos); //can cast to byte* to
	hook->Hook();
	o_SetCursorPos = hook->GetOriginal<decltype(&SetCursorPos)>();
	
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
		std::ios_base::sync_with_stdio();      // 将iostream 流同c runtime lib 的stdio 同步，标准是同步�?
		std::locale::global(std::locale("chs"));
		//setlocale(LC_CTYPE, "");    // MinGW gcc.
		std::wcout.imbue(std::locale(""));
	}
}
