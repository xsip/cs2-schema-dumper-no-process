#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPulseGraphComponentBase {
			 uintptr_t m_hOwner = 0x8; // CHandle< CBaseEntity >
			 uintptr_t m_bActivated = 0xc; // bool
			 uintptr_t m_sNameFixupStaticPrefix = 0x10; // CUtlSymbolLarge
			 uintptr_t m_sNameFixupParent = 0x18; // CUtlSymbolLarge
			 uintptr_t m_sNameFixupLocal = 0x20; // CUtlSymbolLarge
			 uintptr_t m_sProceduralWorldNameForRelays = 0x28; // CUtlSymbolLarge
		}
	}
}
