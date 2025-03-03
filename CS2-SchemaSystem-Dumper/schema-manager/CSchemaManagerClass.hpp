#pragma once 
#include <map>
#include "CSchemaManagerField.hpp"
#include "../schema-class/CSchemaClass.hpp"
#include "../schema-class/CSchemaDeclaredClass.hpp"
#include "../core/CLogService.hpp"

class CSchemaManagerClass {
public:
	inline static CSchemaManagerClass* EmptyClass = 0x0;
	inline static void CreateEmptyClass() {
		if (!CSchemaManagerClass::EmptyClass) {
			CSchemaManagerClass::EmptyClass = new CSchemaManagerClass();
		}
	}
private:
	inline static CLogService* pLogger = new CLogService("CSchemaManagerModule");

	SDK::CSchemaClass* data;
	inline static std::map<const char*, CSchemaManagerField*> fieldMap = {};
public:
	CSchemaManagerClass() {}

	CSchemaManagerClass(SDK::CSchemaClass* schemaClass) { 
		data = schemaClass;
	};
	void AddField(SDK::CSchemaField field) {
		fieldMap[field.m_szName] = new CSchemaManagerField(field);
	}
	CSchemaManagerField* GetField(const char* fieldName) {
		std::map<const char*, CSchemaManagerField*>::iterator it;

		for (it = CSchemaManagerClass::fieldMap.begin(); it != CSchemaManagerClass::fieldMap.end(); it++)
		{
			if (strcmp(it->first, fieldName) == 0) {
				CSchemaManagerClass::pLogger->Log("Found Field: %s\n", fieldName);
				return it->second;


			}
		}

		if (!CSchemaManagerField::EmptyField)
			CSchemaManagerField::CreateEmptyField();

		return CSchemaManagerField::EmptyField;

	}
};