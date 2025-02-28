#pragma once
#include <Windows.h>
#include <tchar.h>

#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include <thread>
#include <vector>
#include <map>

#include "CSchemaInclude.hpp"

class SchemaLoadingHandler {
private:
	template<typename T>
	using _CreateInterface = T (*)(const char* interfaceName, int unknown);
	
	typedef uintptr_t(*_InstallSchemaBindings)(const char* interfaceName, SDK::CSchemaSystem* pSchemaSystem);

private:
	inline static HINSTANCE schemaSystemDllHandle = NULL;
	inline static HINSTANCE tier0DllHandle = NULL;
	inline static std::map<const char*, HINSTANCE> dependencyMap = std::map<const char*, HINSTANCE>{};
	inline static std::map<const char*, bool> loadedMainDlls = std::map<const char*, bool>{};
	inline static std::map<const char*, bool> installedSchemaBindings = std::map<const char*, bool>{};

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

	inline static void LogDependencyMap() {
		
		std::map<const char*, HINSTANCE>::iterator it;
		
		printf("\n\nDependencyMap:\n");

		for (it = SchemaLoadingHandler::dependencyMap.begin(); it != SchemaLoadingHandler::dependencyMap.end(); it++)
		{
			printf("\t%s: 0x%p\n", it->first, it->second);
		}
	}
	inline static void LogLoadedMainDlls() {
		
		std::map<const char*, bool>::iterator it;

		printf("\n\nLoaded Main DLLs:\n");


		for (it = SchemaLoadingHandler::loadedMainDlls.begin(); it != SchemaLoadingHandler::loadedMainDlls.end(); it++)
		{
			printf("\t%s: %i\n", it->first, it->second);
		}
	}

	inline static void LogInstalledBindings() {
		
		std::map<const char*, bool>::iterator it;

		printf("\n\nInstalledSchemaBindings:\n");


		for (it = SchemaLoadingHandler::installedSchemaBindings.begin(); it != SchemaLoadingHandler::installedSchemaBindings.end(); it++)
		{
			printf("\t%s: %i\n", it->first, it->second);
		}
	}

	inline static void DebugLog() {
		SchemaLoadingHandler::LogDependencyMap();
		SchemaLoadingHandler::LogLoadedMainDlls();
		SchemaLoadingHandler::LogInstalledBindings();
	}

	static bool IsInDependencyMap(const char* dllWithPath);
	static bool IsInLoadedMainDllsMap(const char* dllWithPath);
	static bool IsInInstalledSchemaBindings(const char* dllWithPath);

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