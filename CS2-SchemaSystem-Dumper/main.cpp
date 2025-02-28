#include <Windows.h>
#include <tchar.h>

#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include <thread>
#include <vector>

#include "memory.h"
#include "CSchemaSystem.h"
#include  "SchemaLoadingHandler.hpp"
#include "GlobalLoader.hpp"

int main(int argc, char* argv[]) {
	// g_Memory.Initialize("cs2.exe");
	SetConsoleTitle("CS2 SchemaDumper");
	BaseLoader::basePath = "D:\\SteamLibrary\\steamapps\\common\\Counter-Strike Global Offensive\\";

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
	auto pSchemaSystem = GlobalLoader::GetSchemaSystem();
	
	printf("pSchemaSystem001: 0x%p\n", pSchemaSystem);
	printf("Entries: %i\n", pSchemaSystem->m_nScopeSize);

	for (int i = 0; i < pSchemaSystem->m_nScopeSize; i++) {
		auto currentScope = pSchemaSystem->m_pScopeArray[i];
		

		if (currentScope->m_nNumDeclaredClasses == 65535)
			continue;

		for (int classDef = 0; classDef < currentScope->m_nNumDeclaredClasses; classDef++) {
			auto currentClassDef = currentScope->m_pDeclaredClasses[classDef];
			if (strstr(currentClassDef.m_pDeclaredClass->m_szName, "C_BaseEntity")) {
				auto classData = currentClassDef.m_pDeclaredClass->m_Class;
				auto numFields = classData->m_nNumFields;
				printf("Current Scope: %s\n", currentScope->m_szName);
				printf("\tClassDefinition: %s ( %i fields )\n", currentClassDef.m_pDeclaredClass->m_szName, numFields);
				for (int fieldId = 0; fieldId < numFields; fieldId++) {
					printf("Field: %s | Offset: 0x%x\n", classData->m_pFields[fieldId].m_szName, classData->m_pFields[fieldId].m_nOffset);
				}
			}
		}
	}
	while (true) {
		Sleep(50000000);
	}
}