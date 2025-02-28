#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicCase {
			 uintptr_t m_nCase = 0x4e0; // CUtlSymbolLarge[32]
			 uintptr_t m_nShuffleCases = 0x5e0; // int32
			 uintptr_t m_nLastShuffleCase = 0x5e4; // int32
			 uintptr_t m_uchShuffleCaseMap = 0x5e8; // uint8[32]
			 uintptr_t m_OnCase = 0x608; // CEntityIOOutput[32]
			 uintptr_t m_OnDefault = 0xb08; // CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > >
		}
	}
}
