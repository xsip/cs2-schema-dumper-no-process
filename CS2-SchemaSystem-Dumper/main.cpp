#include <Windows.h>
#include <tchar.h>

#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include <thread>
#include <vector>

#include "memory.h"
#include "CSchemaSystem.h"
#include "GlobalLoader.hpp"
#include "CSchemaDumper.hpp"

int main(int argc, char* argv[]) {
	// g_Memory.Initialize("cs2.exe");
	SetConsoleTitle("CS2 SchemaDumper");
	BaseLoader::basePath = "D:\\SteamLibrary\\steamapps\\common\\Counter-Strike Global Offensive\\";
	printf("m_pDeclaredClasses: 0x%x\n", offsetof(SDK::CSchemaSystemTypeScope, m_pDeclaredClasses));
	printf("pGlobalScope: 0x%x\n", offsetof(SDK::CSchemaSystemTypeScope, pGlobalScope));
	printf("m_pEnumBindings: 0x%x\n", offsetof(SDK::CSchemaSystemTypeScope, m_pEnumBindings));
	printf("m_nNumDeclaredClasses: 0x%x\n", offsetof(SDK::CSchemaSystemTypeScope, m_nNumDeclaredClasses));
	if (!GlobalLoader::Initialize()) {
		printf("Error initializing!!\n");
		while (true) {
			Sleep(50000000);
		}
	}
	if (!GlobalLoader::InstallSchemaBindings()) {
		printf("Error installing bindings!!\n");
		while (true) {
			Sleep(50000000);
		}
	}

	CSchemaDumper::DumpToFS("C:\\Current-Dump");

	while (true) {
		Sleep(50000000);
	}
}