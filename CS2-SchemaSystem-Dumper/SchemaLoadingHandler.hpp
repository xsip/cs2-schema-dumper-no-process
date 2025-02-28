#pragma once
#include <Windows.h>
#include <tchar.h>

#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include <thread>
#include <vector>
#include <map>

#include "CSchemaSystem.h"


class SchemaLoadingHandler {
private:
	template<typename T>
	using _CreateInterface = T (*)(const char* interfaceName, int unknown);
	
	typedef uintptr_t(*_InstallSchemaBindings)(const char* interfaceName, SDK::CSchemaSystem* pSchemaSystem);

private:
	inline static HINSTANCE schemaSystemDllHandle = NULL;
	inline static HINSTANCE tier0DllHandle = NULL;
	inline static std::map<const char*, HINSTANCE> dependencyMap = std::map<const char*, HINSTANCE>{};
	inline static std::map<const char*, boolean> loadedMainDlls = std::map<const char*, boolean>{};
	inline static std::map<const char*, boolean> installedSchemaBindings = std::map<const char*, boolean>{};

private:
	inline static const char* tier0Path = "game\\bin\\win64\\tier0.dll";
	inline static const char* schemaSystemPath = "game\\bin\\win64\\schemasystem.dll";

private:
	inline static SDK::CSchemaSystem* pSchemaSystem = NULL;

public:
	inline static SDK::CSchemaSystem *GetSchemaSystem() {
		return SchemaLoadingHandler::pSchemaSystem;
	}
public:
	SchemaLoadingHandler() {

	};

	template<typename T>
	inline static _CreateInterface<T> GetCreateInterfaceFn(const char* dllName) {


		std::map<const char*, HINSTANCE>::iterator it;
		HINSTANCE foundDll = NULL;
		for (it = SchemaLoadingHandler::dependencyMap.begin(); it != SchemaLoadingHandler::dependencyMap.end(); it++)
		{
			if (strstr(it->first, dllName)) {
				foundDll = it->second;
				break;
			}
		}

		if (!foundDll) {
			printf("Didn't find %s to get CreateInterface function..\n", dllName);
			return NULL;
		}

		SchemaLoadingHandler::_CreateInterface<T> createInterface = (SchemaLoadingHandler::_CreateInterface<T>)GetProcAddress(foundDll, "CreateInterface");
		return createInterface;
	}

	static bool InstallSchemaBindings(const char* dllName, const char* schema = "SchemaSystem_001");
	static bool LoadNeededDlls(std::vector<const char*> dependencyDlls, const char* mainDll);
	
};