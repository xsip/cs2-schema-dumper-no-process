#pragma once
#include "CSchemaHelper.hpp"

namespace SDK {
	class CSchemaField;

	class CSchemaClass
	{
	public:
		void* vfptr;
		const char* m_szName;
		const char* m_szModuleName;
		uint32_t m_nSize;
		uint16_t m_nNumFields;

		S2_PAD(0x2);

		uint16_t m_nStaticSize;
		uint16_t m_nMetadataSize;

		S2_PAD(0x4);

		CSchemaField* m_pFields;
	};

}