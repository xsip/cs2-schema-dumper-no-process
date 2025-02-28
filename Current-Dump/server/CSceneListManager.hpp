#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSceneListManager {
			 uintptr_t m_hListManagers = 0x4e0; // CUtlVector< CHandle< CSceneListManager > >
			 uintptr_t m_iszScenes = 0x4f8; // CUtlSymbolLarge[16]
			 uintptr_t m_hScenes = 0x578; // CHandle< CBaseEntity >[16]
		}
	}
}
