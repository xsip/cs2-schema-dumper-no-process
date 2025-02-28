#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerTeleport {
			 uintptr_t m_iLandmark = 0x960; // CUtlSymbolLarge
			 uintptr_t m_bUseLandmarkAngles = 0x968; // bool
			 uintptr_t m_bMirrorPlayer = 0x969; // bool
			 uintptr_t m_bCheckDestIfClearForPlayer = 0x96a; // bool
		}
	}
}
