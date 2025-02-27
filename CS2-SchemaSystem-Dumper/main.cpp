#include <Windows.h>
#include <tchar.h>

#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include <thread>
#include <vector>

#include "memory.h"
#include "CSchemaSystem.h"
#include  "SchemaLoader.hpp"
#include "AllLoader.hpp"
class ModuleData{
public:
	ModuleData(const char* d) {
		name = (char*)d;
	}
	char* name;
};
int main(int argc, char* argv[]) {

	// g_Memory.Initialize("cs2.exe");
	SetConsoleTitle("CS2 SchemaDumper");

	if (!AllLoader::Initialize()) {
		printf("Error initializing!!\n");
		while (true) {
			Sleep(50000000);
		}
	}
	if (!AllLoader::InstallSchemaBindings()) {
		printf("Error installing bindings!!\n");
		while (true) {
			Sleep(50000000);
		}
	}
	auto pSchemaSystem = AllLoader::GetSchemaSystem();
	
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


	/*
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\engine2.dll", "ppp" }, // DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\csgo\bin\win64\server.dll", "ppp" }, // DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\csgo\bin\win64\client.dll", "ppp" }, // DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\schemasystem.dll", "ppp" }, // DONE

{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\filesystem_stdio.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\inputsystem.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\imemanager.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\localize.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\rendersystemdx11.dll", "ppp" }, // DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\resourcesystem.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\materialsystem2.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\meshsystem.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\worldrenderer.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\pulse_system.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\vscript.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\networksystem.dll", "ppp" } DONE,
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\animationsystem.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\vphysics2.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\soundsystem.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\steamaudio.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\scenesystem.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\particles.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\panoramauiclient.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\v8system.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\panorama.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\panorama_text_pango.dll", "ppp" }, // CANT DO!
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\csgo\bin\win64\host.dll", "ppp" }, // DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\scenefilecache.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\csgo\bin\win64\matchmaking.dll", "ppp" }, DONE
{       "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\navsystem.dll", "ppp" },
	*/

	/*SDK::CSchemaSystem _SchemaSystem = {0};


	printf("offsetof(_SchemaSystem, m_pScopeArray): 0x%x\n", offsetof(_SchemaSystem, m_pScopeArray));
	_SchemaSystem.m_nScopeSize = g_Memory.Read<int>(SchemaSystem_001Addr + (uintptr_t)offsetof(_SchemaSystem, m_nScopeSize));
	auto pSchemaScopeArray = g_Memory.Read<uintptr_t>(SchemaSystem_001Addr + (uintptr_t)offsetof(_SchemaSystem, m_pScopeArray));
	printf("res: %i\n", _SchemaSystem.m_nScopeSize);

	SDK::CSchemaSystemTypeScope _CSchemaSystemTypeScope = { 0 };
	SDK::CSchemaDeclaredClassEntry _CSchemaDeclaredClassEntry = { 0 };
	SDK::CSchemaDeclaredClass _CSchemaDeclaredClass = { 0 };

	printf("ClassesOffset: 0x%x\n", offsetof(_CSchemaSystemTypeScope, m_pDeclaredClasses));



	for (int i = 0; i < _SchemaSystem.m_nScopeSize; i++) {
		
		uintptr_t pSchemaTypeScope = g_Memory.Read<uintptr_t>(pSchemaScopeArray + 0x8*i);
		auto pSchemaTypeScopeName = g_Memory.ReadString(pSchemaTypeScope + offsetof(_CSchemaSystemTypeScope, m_szName));
		auto numClasses = g_Memory.Read<int>(pSchemaTypeScope + offsetof(_CSchemaSystemTypeScope, m_nNumDeclaredClasses));
		
		printf("pSchemaTypeScope: 0x%p\n", pSchemaTypeScope);
		printf("Name: %s\n", pSchemaTypeScopeName.c_str());
		printf("Classes: %i\n", numClasses);
		auto pClasses = g_Memory.Read<uintptr_t>(pSchemaTypeScope + offsetof(_CSchemaSystemTypeScope, m_pDeclaredClasses));
		printf("pClasses: 0x%p\n", pClasses);
		for (int _class = 0; _class < 2/*numClasses* /; _class++) {
			auto pClass = g_Memory.Read<uintptr_t>(pClasses + 0x10 + 0x18 * _class);
			auto declaredClass = g_Memory.Read<uintptr_t>(pClass + offsetof(_CSchemaDeclaredClassEntry, m_pDeclaredClass));
			auto pClassName = g_Memory.ReadString(declaredClass + offsetof(_CSchemaDeclaredClass, m_szName));
			printf("\t\tClass: 0x%p\n", pClass);
			printf("\t\tName: %s\n", pClassName.c_str());


		}
	}*/
}