#pragma once
#include "CSchemaHelper.hpp"
namespace SDK {
	class CSchemaSystemTypeScope;

	class CSchemaDeclaredEnum {
	public:
		void* vfptr;
		const char* m_szName;
		CSchemaSystemTypeScope* pGlobalScope;
	};

	class CSchemaDeclaredEnumEntry
	{
	public:
		uint64_t m_nHash[2];
		CSchemaDeclaredEnum *m_pDecleratedEnum;
	};
}