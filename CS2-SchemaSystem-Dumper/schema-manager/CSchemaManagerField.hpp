#pragma once
#include <Windows.h>

#include "../schema-class/CSchemaFieldType.hpp"
#include "../schema-class/CSchemaField.hpp"


class CSchemaManagerField {

private:
	SDK::CSchemaField data;
public:
	inline static CSchemaManagerField* EmptyField = 0x0;
	inline static void CreateEmptyField() {
		if (!CSchemaManagerField::EmptyField) {
			CSchemaManagerField::EmptyField = new CSchemaManagerField();
		}
	}
public:

	CSchemaManagerField() {
		data = {};
		data.m_szName = "";
		data.m_nMetadata = nullptr;
		data.m_nOffset = 0x0;
		data.m_nMetadataSize = 0x0;
		data.m_nMetadata = nullptr;
	}

	CSchemaManagerField(SDK::CSchemaField _data) {

		data = _data;
	}

	DWORD GetOffset() {
		return data.m_nOffset;
	}

	const char* GetType() {
		return data.m_pType->m_szName;
	}

};