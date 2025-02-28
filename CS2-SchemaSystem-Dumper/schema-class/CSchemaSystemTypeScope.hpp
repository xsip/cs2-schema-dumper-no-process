#pragma once
#include "CSchemaHelper.hpp"
#include "CSchemaDeclaredEnum.hpp"

namespace SDK {
	class CSchemaDeclaredClassEntry;


	class CSchemaSystemTypeScope
	{// 0x18c = pNumEnums
	public:
		void* vfptr;
		char m_szName[256];
		CSchemaSystemTypeScope* pGlobalScope;
		S2_PAD(0x7C);
		S2_PAD(sizeof(int));
		S2_PAD(0x2B0);
		CSchemaDeclaredClassEntry* m_pDeclaredClasses;
		S2_PAD(0xE);
		uint16_t m_nNumDeclaredClasses;
		S2_PAD(0x10);
		CSchemaDeclaredEnumEntry* m_pEnumBindings;

		inline CSchemaDeclaredEnum* GetEnumBinding(int idx) {
			return m_pEnumBindings[idx].m_pDecleratedEnum;
			// return *(CSchemaDeclaredEnum**)((uintptr_t)m_pEnumBindings + 0x10 + (0x28 * idx));
		}
	};
}