#pragma once
#include "CSchemaHelper.hpp"
namespace SDK {
	class CSchemaFieldType;

	class CSchemaField
	{
	public:
		const char* m_szName;
		CSchemaFieldType* m_pType;
		uint32_t m_nOffset;
		uint32_t m_nMetadataSize;
		void* m_nMetadata;
	};

}