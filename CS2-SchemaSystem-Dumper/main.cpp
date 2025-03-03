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
#include "dumper/CSchemaDumper.hpp"
#include "schema-manager/CSchemaManager.hpp"
#include "schema-manager/CTypedSchemManagerGenerator.hpp"
#include "interface-grabber/InterfaceGrabber.hpp"

#include "core/CLogService.hpp"

int main(int argc, char* argv[]) {
	auto pLogger = new CLogService("Main");

	SetConsoleTitle("CS2 SchemaDumper");
	BaseLoader::basePath = "D:\\SteamLibrary\\steamapps\\common\\Counter-Strike Global Offensive\\";

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
	auto pSchemaSystem = CGlobalLoader::GetSchemaSystem();
	pSchemaSystem->LogSchemaSystemInfo();
	pLogger->Log("Found %i modules in SchemaSystem.\n\n", CGlobalLoader::GetSchemaSystem()->m_nScopeSize);
	pLogger->Log("m_iHealth: 0x%x\n", CSchemaManager::GetModule("client")->GetClass("C_BaseEntity")->GetField("m_iHealth")->GetOffset());

	/*typedef uintptr_t(*_Test)();
	*(uintptr_t*)(CGlobalLoader::GetSchemaSystemHandle() + 0x5A5F0) = NULL;
	auto lol = (_Test)(CGlobalLoader::GetSchemaSystemHandle() + 0x1030);
	printf("Res: 0x%p\n", lol());
	*/
	// CTypedSchemaManagerGenerator::CreateEnums("C:\\schema-manager");
	// CSchemaDumper::DumpToFS("C:\\Current-Dump");
	while (true) {
		Sleep(50000000);
	}
}