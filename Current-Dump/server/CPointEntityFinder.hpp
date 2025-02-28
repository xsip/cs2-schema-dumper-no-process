#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointEntityFinder {
			 uintptr_t m_hEntity = 0x4e0; // CHandle< CBaseEntity >
			 uintptr_t m_iFilterName = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_hFilter = 0x4f0; // CHandle< CBaseFilter >
			 uintptr_t m_iRefName = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_hReference = 0x500; // CHandle< CBaseEntity >
			 uintptr_t m_FindMethod = 0x504; // EntFinderMethod_t
			 uintptr_t m_OnFoundEntity = 0x508; // CEntityIOOutput
		}
	}
}
