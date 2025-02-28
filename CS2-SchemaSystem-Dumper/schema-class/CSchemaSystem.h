#pragma once
#include "CSchemaHelper.hpp"
#include "../Memory.hpp"
namespace SDK
{
	class CSchemaSystemTypeScope;

	class CSchemaSystem
	{
	public:
		S2_PAD(0x188);

		uint64_t m_nScopeSize;
		CSchemaSystemTypeScope** m_pScopeArray;
		
		inline void LogSchemaSystemInfo() {
			printf("\n");
			Memory::CallVFunc<void, 30U>((void*)this);
			printf("\n");
		}

		inline CSchemaSystemTypeScope* GetScopeEntry(int idx) {
			return m_pScopeArray[idx];
		}
	};
}