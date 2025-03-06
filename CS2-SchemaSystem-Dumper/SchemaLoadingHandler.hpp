#pragma once
#include <Windows.h>
#include <tchar.h>

#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include <thread>
#include <vector>
#include <map>

#include "SchemaClassInclude.hpp"
#include "core/CLogService.hpp"
class SchemaLoadingHandler {
private:
	template<typename T>
	using _CreateInterface = T(*)(const char* interfaceName, int unknown);

	typedef uintptr_t(*_InstallSchemaBindings)(const char* interfaceName, SDK::CSchemaSystem* pSchemaSystem);

private:
	inline static CLogService* pLogger = new CLogService("SchemaLoadingHandler");
public:
	inline static HINSTANCE schemaSystemDllHandle = NULL;
private:
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
	inline static SDK::CSchemaSystem* GetSchemaSystem() {
		return SchemaLoadingHandler::pSchemaSystem;
	}
private:
	SchemaLoadingHandler() {

	};
public:
	inline static HMODULE GetDependency(const char* dllName) {
		std::map<const char*, HINSTANCE>::iterator it;


		for (it = SchemaLoadingHandler::dependencyMap.begin(); it != SchemaLoadingHandler::dependencyMap.end(); it++)
		{
			if (strcmp(it->first, dllName) == 0)
				return it->second;
		}
		return 0x0;
	}
	inline static void LogDependencyMap() {

		std::map<const char*, HINSTANCE>::iterator it;

		SchemaLoadingHandler::pLogger->Log("\n\nDependencyMap:\n");

		for (it = SchemaLoadingHandler::dependencyMap.begin(); it != SchemaLoadingHandler::dependencyMap.end(); it++)
		{
			SchemaLoadingHandler::pLogger->Log("\t%s: 0x%p\n", it->first, it->second);
		}
	}
	inline static void LogLoadedMainDlls() {

		std::map<const char*, bool>::iterator it;

		SchemaLoadingHandler::pLogger->Log("\n\nLoaded Main DLLs:\n");


		for (it = SchemaLoadingHandler::loadedMainDlls.begin(); it != SchemaLoadingHandler::loadedMainDlls.end(); it++)
		{
			SchemaLoadingHandler::pLogger->Log("\t%s: %i\n", it->first, it->second);
		}
	}

	inline static void LogInstalledBindings() {

		std::map<const char*, bool>::iterator it;

		SchemaLoadingHandler::pLogger->Log("\n\nInstalledSchemaBindings:\n");


		for (it = SchemaLoadingHandler::installedSchemaBindings.begin(); it != SchemaLoadingHandler::installedSchemaBindings.end(); it++)
		{
			SchemaLoadingHandler::pLogger->Log("\t%s: %i\n", it->first, it->second);
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
		auto dllNameWithoutPath = SchemaLoadingHandler::GetModuleNameFromPath(dllName);
		for (it = SchemaLoadingHandler::dependencyMap.begin(); it != SchemaLoadingHandler::dependencyMap.end(); it++)
		{
			if (strcmp(it->first, dllNameWithoutPath->c_str()) == 0) {
				foundDll = it->second;
				break;
			}
		}

		if (!foundDll) {
			SchemaLoadingHandler::pLogger->Log("Didn't find %s to get CreateInterface function..\n", dllName);
			return NULL;
		}

		SchemaLoadingHandler::_CreateInterface<T> createInterface = (SchemaLoadingHandler::_CreateInterface<T>)GetProcAddress(foundDll, "CreateInterface");
		return createInterface;
	}

	static bool InstallSchemaBindings(const char* dllName, const char* schema = "SchemaSystem_001");
	static bool LoadNeededDlls(std::vector<const char*> dependencyDlls, const char* mainDll);

	static std::string* GetModuleNameFromPath(const char* dllName) {
		std::string* s = new std::string(dllName);
		std::string delimiter = "\\";
		size_t pos_start = 0, pos_end, delim_len = delimiter.length();
		std::string token;
		std::vector<std::string> res;

		while ((pos_end = s->find(delimiter, pos_start)) != std::string::npos) {
			token = s->substr(pos_start, pos_end - pos_start);
			pos_start = pos_end + delim_len;
			res.push_back(token);
		}

		res.push_back(s->substr(pos_start));
		return new std::string(res[res.size() - 1]);
	}

};