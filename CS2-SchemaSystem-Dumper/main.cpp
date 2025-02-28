#include <Windows.h>
#include <tchar.h>

#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include <thread>
#include <vector>

#include "memory.h"
#include "SchemaClassInclude.hpp"
#include "CGlobalLoader.hpp"
#include "CSchemaDumper.hpp"
#include "schema-manager/CSchemaManager.hpp"
#include "schema-manager/CTypedSchemManagerGenerator.hpp"

#include "core/CLogService.hpp"
int main(int argc, char* argv[]) {
	auto pLogger = new CLogService("Main");
	// g_Memory.Initialize("cs2.exe");
	SetConsoleTitle("CS2 SchemaDumper");
	BaseLoader::basePath = "D:\\SteamLibrary\\steamapps\\common\\Counter-Strike Global Offensive\\";
	// printf("pGlobalScope: 0x%x\n", offsetof(SDK::CSchemaSystemTypeScope, pGlobalScope));
	// printf("m_pDeclaredClasses: 0x%x\n", offsetof(SDK::CSchemaSystemTypeScope, m_pDeclaredClasses));
	// printf("m_nNumDeclaredClasses: 0x%x\n", offsetof(SDK::CSchemaSystemTypeScope, m_nNumDeclaredClasses));
	// printf("m_pEnumBindings: 0x%x\n", offsetof(SDK::CSchemaSystemTypeScope, m_pEnumBindings)); // m_nNumDeclaredClasses: 0x456

	if (!CGlobalLoader::Initialize()) {
		printf("Error initializing!!\n");
		while (true) {
			Sleep(50000000);
		}
	}
	if (!CGlobalLoader::InstallSchemaBindings()) {
		printf("Error installing bindings!!\n");
		while (true) {
			Sleep(50000000);
		}
	}
	CGlobalLoader::GetSchemaSystem()->LogSchemaSystemInfo();
	pLogger->Log("Found %i modules in SchemaSystem.\n\n", CGlobalLoader::GetSchemaSystem()->m_nScopeSize);
	pLogger->Log("m_iHealth: 0x%x\n", CSchemaManager::GetModule("client")->GetClass("C_BaseEntity")->GetField("m_iHealth")->GetOffset());
	// CTypedSchemaManagerGenerator::CreateEnums("C:\\schema-manager");
	// CSchemaDumper::DumpToFS("C:\\Current-Dump");

	while (true) {
		Sleep(50000000);
	}
}