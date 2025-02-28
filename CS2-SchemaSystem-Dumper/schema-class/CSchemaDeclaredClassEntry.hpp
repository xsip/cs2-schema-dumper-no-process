#pragma once
#include "CSchemaHelper.hpp"
namespace SDK {

	class CSchemaDeclaredClass;

	class CSchemaDeclaredClassEntry
	{
	public:
		uint64_t m_nHash[2];
		CSchemaDeclaredClass* m_pDeclaredClass;
	};
}