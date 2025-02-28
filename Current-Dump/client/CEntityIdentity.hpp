#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CEntityIdentity {
			 uintptr_t m_nameStringableIndex = 0x14; // int32
			 uintptr_t m_name = 0x18; // CUtlSymbolLarge
			 uintptr_t m_designerName = 0x20; // CUtlSymbolLarge
			 uintptr_t m_flags = 0x30; // uint32
			 uintptr_t m_worldGroupId = 0x38; // WorldGroupId_t
			 uintptr_t m_fDataObjectTypes = 0x3c; // uint32
			 uintptr_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
			 uintptr_t m_pPrev = 0x58; // CEntityIdentity*
			 uintptr_t m_pNext = 0x60; // CEntityIdentity*
			 uintptr_t m_pPrevByClass = 0x68; // CEntityIdentity*
			 uintptr_t m_pNextByClass = 0x70; // CEntityIdentity*
		}
	}
}
