#pragma once
#include <map>

#include "CSchemaManagerClass.hpp"
#include "../core/CLogService.hpp"
class CSchemaManagerModule {

private:
	const char* moduleName;
	inline static CLogService* pLogger = new CLogService("CSchemaManagerModule");

public:
	
	inline static CSchemaManagerModule* EmptyModule = 0x0;
	
	inline static void CreateEmptyModule() {
		if (!CSchemaManagerModule::EmptyModule) {
			CSchemaManagerModule::EmptyModule = new CSchemaManagerModule();
		}
	}

	inline static std::map<const char*, CSchemaManagerClass*> classMap = {};

public:

	CSchemaManagerModule() { };

	void AddClass(SDK::CSchemaClass* mgrClass) {
		classMap[mgrClass->m_szName] = new CSchemaManagerClass(mgrClass);

		for (int propertyIdx = 0; propertyIdx < mgrClass->m_nNumFields; propertyIdx++) {
			classMap[mgrClass->m_szName]->AddField(mgrClass->m_pFields[propertyIdx]);
		}
	}

	CSchemaManagerClass* GetClass(const char* fieldName) {
		std::map<const char*, CSchemaManagerClass*>::iterator it;

		for (it = CSchemaManagerModule::classMap.begin(); it != CSchemaManagerModule::classMap.end(); it++)
		{
			if (strcmp(it->first, fieldName) == 0) {
				CSchemaManagerModule::pLogger->Log("Found Field: %s\n", fieldName);
				return it->second;
			}
		}
		
		if (!CSchemaManagerClass::EmptyClass)
			CSchemaManagerClass::CreateEmptyClass();

		return CSchemaManagerClass::EmptyClass;

	}
};