#include "stdafx.h"
#include "hook.h"
#include "windows.h"
#include "vector"

FARPROC farCreateFileA;
UINT hVMP;
UINT vmpRetn1;
UINT vmpRetn2;
BYTE oldCode[5];
FARPROC pZwProtectVirtualMemory;

int temp;

__declspec(naked) void hookVMP1() {
	__asm pushfd
	__asm mov temp, edx;
	if (temp == 0x7FFE0018) {
		__asm mov eax, 0x01C4E6B3;
		__asm mov dword ptr ds : [edi], 0x01C4E6B3;
	}
	__asm popfd;
	__asm sbb ecx, 0x75BF6B9A;
	__asm push  vmpRetn1;
	__asm retn;
}

__declspec(naked) void hookVMP2() {

	__asm pushfd
	__asm mov temp, edx;
	if (temp == 0x7FFE001C) {
		__asm mov eax, 0x01C4E6B3;
		__asm mov dword ptr ds : [edi], 0x01C4E6B3;
	}
	__asm popfd;
	__asm sub esi, 0x4;
	__asm push  vmpRetn2;
	__asm retn;
}

//0FB9A4DC    66:81F1 2129    xor cx,0x2921

__declspec(naked) void shellGetTimeAsFileTime() {
	__asm mov ecx, [esp + 4];
	__asm add ecx, 4;
	__asm mov dword ptr ds : [ecx], 0x01C4E6B3;
	__asm retn 0x4;
}

static char buffer[100];

void hookRetn(LPVOID oldAddr , LPVOID addr) {
	std::vector<BYTE> code;
	code.push_back(0x68);
	code.push_back(*((BYTE*)(&addr) + 0));
	code.push_back(*((BYTE*)(&addr) + 1));
	code.push_back(*((BYTE*)(&addr) + 2));
	code.push_back(*((BYTE*)(&addr) + 3));
	code.push_back(0xC3);
	DWORD oldProtect;
	MEMORY_BASIC_INFORMATION mbi_thunk;
	VirtualQuery(oldAddr, &mbi_thunk, sizeof(MEMORY_BASIC_INFORMATION));
	VirtualProtect(pZwProtectVirtualMemory, 5, PAGE_EXECUTE_READWRITE, &oldProtect);
	memcpy(pZwProtectVirtualMemory, oldCode, 5);
	VirtualProtect(pZwProtectVirtualMemory, 5, oldProtect, &oldProtect);

	VirtualProtect(mbi_thunk.BaseAddress, mbi_thunk.RegionSize, PAGE_EXECUTE_READWRITE, &oldProtect);
	int err = GetLastError();
	_itoa_s(err, buffer, 16);
	//MessageBoxA(0, buffer, 0, 0);
	_itoa_s((int)oldAddr, buffer, 16);
	//MessageBoxA(0, buffer, 0, 0);
	WriteProcessMemory(GetCurrentProcess(), oldAddr, code.data(), code.size(), nullptr);
	VirtualProtectEx(GetCurrentProcess(), mbi_thunk.BaseAddress, mbi_thunk.RegionSize, oldProtect, &oldProtect);
	return;
}

__declspec(naked) void hookCreateFileA() {
	__asm pushad;
	__asm pushfd;
	hVMP = (UINT)GetModuleHandle(L"TradeX2-M.dll");
	if (hVMP) {
		if (*((BYTE*)(hVMP + 0x978413)) == 0x81) {
			//MessageBox(0, L"11111111", 0, 0);
			vmpRetn1 = hVMP + 0x978413 + 6;
			hookRetn((BYTE*)hVMP + 0x978413, hookVMP1);
			vmpRetn2 = (UINT)(hVMP + 0x37A4D6 + 6);
			hookRetn((BYTE*)hVMP + 0x37A4D6, hookVMP2);
		}
	}
	__asm popfd;
	__asm popad;
	__asm {
		mov edi, edi;
		push ebp;
		mov ebp, esp;
		push farCreateFileA;
		retn;
	}
}

void hookJmp(LPVOID oldAddr, LPVOID addr) {
	UINT data;
	data = (UINT)addr - (UINT)oldAddr - 5;
	std::vector<BYTE> code;
	code.push_back(0xE9);
	code.push_back(*((BYTE*)(&data) + 0));
	code.push_back(*((BYTE*)(&data) + 1));
	code.push_back(*((BYTE*)(&data) + 2));
	code.push_back(*((BYTE*)(&data) + 3));
	DWORD oldProtect;
	MEMORY_BASIC_INFORMATION mbi_thunk;
	VirtualQuery(oldAddr, &mbi_thunk, sizeof(MEMORY_BASIC_INFORMATION));
	VirtualProtect(pZwProtectVirtualMemory, 5, PAGE_EXECUTE_READWRITE, &oldProtect);
	memcpy(pZwProtectVirtualMemory, oldCode, 5);
	VirtualProtect(pZwProtectVirtualMemory, 5, oldProtect, &oldProtect);

	VirtualProtect(mbi_thunk.BaseAddress, mbi_thunk.RegionSize, PAGE_EXECUTE_READWRITE, &oldProtect);
	int err = GetLastError();
	_itoa_s(err, buffer, 16);
	//MessageBoxA(0, buffer, 0, 0);
	_itoa_s((int)oldAddr, buffer, 16);
	//MessageBoxA(0, buffer, 0, 0);
	WriteProcessMemory(GetCurrentProcess(), oldAddr, code.data(), code.size(), nullptr);
	VirtualProtectEx(GetCurrentProcess(), mbi_thunk.BaseAddress, mbi_thunk.RegionSize, oldProtect, &oldProtect);
	return;
}

void hook() {
	auto hModule = LoadLibrary(L"kernelbase.dll");
	if (!hModule)
	{
		hModule = LoadLibrary(L"kernel32.dll");
		if (!hModule) {
			MessageBox(0, L"获取kernel模块地址失败", 0, 0);
			return;
		}
	}
	pZwProtectVirtualMemory = GetProcAddress(GetModuleHandle(L"ntdll.dll"), "ZwProtectVirtualMemory");
	memcpy(oldCode, pZwProtectVirtualMemory, 5);
	auto pfuncGetTimeAsFileTime = GetProcAddress(hModule, "GetSystemTimeAsFileTime");
	if (!pfuncGetTimeAsFileTime) {
		MessageBox(0, L"获取func地址失败", 0, 0);
		return;
	}
	OutputDebugString(L"[sr173]:获取地址成功开始hook");
	hookRetn(pfuncGetTimeAsFileTime, shellGetTimeAsFileTime);

	auto pfuncCreateFile = GetProcAddress(hModule, "CreateFileA");
	farCreateFileA = (FARPROC)((UINT)pfuncCreateFile + 5);
	if (!pfuncCreateFile) {
		MessageBox(0, L"获取func@1地址失败", 0, 0);
		return;
	}
	hookJmp(pfuncCreateFile, hookCreateFileA);
}