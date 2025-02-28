#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CompositeMaterialInputContainer_t {
			 uintptr_t m_bEnabled = 0x0; // bool
			 uintptr_t m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
			 uintptr_t m_strSpecificContainerMaterial = 0x8; // CResourceName
			 uintptr_t m_strAttrName = 0xe8; // CUtlString
			 uintptr_t m_strAlias = 0xf0; // CUtlString
			 uintptr_t m_vecLooseVariables = 0xf8; // CUtlVector< CompositeMaterialInputLooseVariable_t >
			 uintptr_t m_strAttrNameForVar = 0x110; // CUtlString
			 uintptr_t m_bExposeExternally = 0x118; // bool
		}
	}
}
