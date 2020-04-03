﻿#include "stdafx.h"
#include "spdlog/spdlog.h"
#include <spdlog/sinks/basic_file_sink.h>
#include "PolyHook.hpp"
#include <fcntl.h>
#include <io.h>
#include <iostream>

#ifdef _WIN64
#pragma comment(lib,"../Capstone/msvc/x64/Debug/capstone.lib")
#define HOOK_DETOUR PLH::X64Detour
#else
#define HOOK_DETOUR PLH::X86Detour
#pragma comment(lib,"../Capstone/msvc/x86/Debug/capstone.lib")
#endif

void InitConsole();

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

int json_encode(DWORD_PTR data){
	int* p_this;
	__asm mov p_this, ecx;
	
	spdlog::info("{}", reinterpret_cast<char*>(p_this + 1))
}


void hook() {
	InitConsole();
	
	auto handle_kernel32 = LoadLibrary(L"kernelbase.dll");
	auto handle_user32 = LoadLibrary(L"User32.dll");

	
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
	hook->SetupHook((BYTE*)h_TerminateProcess, (BYTE*)&h_TerminateProcess); //can cast to byte* to
	hook->Hook();

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
