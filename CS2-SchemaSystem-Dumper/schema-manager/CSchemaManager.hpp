#pragma once 
#include "../CGlobalLoader.hpp"
#include <map>
#include <string>
#include "CSchemaManagerModule.hpp"
#include "../core/CLogService.hpp"
class CSchemaManager {
private:
	inline static CLogService* pLogger = new CLogService("CSchemaManager");

	inline static bool initialized = false;
	inline static std::map <const char*, CSchemaManagerModule*> moduleMap = {};
	inline static bool Initialize() {
		auto start = std::chrono::system_clock::now();
		CSchemaManagerModule::CreateEmptyModule();
		CSchemaManagerClass::CreateEmptyClass();
		CSchemaManagerField::CreateEmptyField();
		if (CSchemaManager::initialized)
			return true;

		auto pSchemaSystem = CGlobalLoader::GetSchemaSystem();
		for (int scopeIdx = 0; scopeIdx < pSchemaSystem->m_nScopeSize; scopeIdx++) {

			auto currentScope = pSchemaSystem->GetScopeEntry(scopeIdx);
			auto scopeStr = std::string(currentScope->m_szName);
			auto moduleNameFixed = new std::string(scopeStr.substr(0, scopeStr.find(".dll")));
			moduleMap[moduleNameFixed->c_str()] = new CSchemaManagerModule();

			if (currentScope->m_nNumDeclaredClasses == 65535)
				continue;


			for (int classIdx = 0; classIdx < currentScope->m_nNumDeclaredClasses; classIdx++) {
				auto currentClassDef = currentScope->m_pDeclaredClasses[classIdx];
				auto classData = currentClassDef.m_pDeclaredClass->m_Class;
				auto numFields = classData->m_nNumFields;
				moduleMap[moduleNameFixed->c_str()]->AddClass(classData);
			}
		}

		auto end = std::chrono::system_clock::now();

		std::chrono::duration<double> elapsed_seconds = end - start;
		CSchemaManager::pLogger->Log("Initializing took %.5f seconds\n", elapsed_seconds.count());
		return CSchemaManager::initialized = true;
	};
public:

	inline static CSchemaManagerModule* GetModule(const char* moduleName) {
		if (!CSchemaManager::initialized)
			CSchemaManager::Initialize();

		std::map<const char*, CSchemaManagerModule*>::iterator it;

		for (it = CSchemaManager::moduleMap.begin(); it != CSchemaManager::moduleMap.end(); it++)
		{
			if (strcmp(it->first, moduleName) == 0) {
				CSchemaManager::pLogger->Log("Found Module: %s\n", moduleName);
				return it->second;
			}
		}

		if (!CSchemaManagerModule::EmptyModule)
			CSchemaManagerModule::CreateEmptyModule();
		return CSchemaManagerModule::EmptyModule;

	};

};
