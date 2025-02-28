#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CNavLinkAreaEntity {
			 uintptr_t m_flWidth = 0x4e0; // float32
			 uintptr_t m_vLocatorOffset = 0x4e4; // Vector
			 uintptr_t m_qLocatorAnglesOffset = 0x4f0; // QAngle
			 uintptr_t m_strMovementForward = 0x500; // CUtlSymbolLarge
			 uintptr_t m_strMovementReverse = 0x508; // CUtlSymbolLarge
			 uintptr_t m_nNavLinkIdForward = 0x510; // int32
			 uintptr_t m_nNavLinkIdReverse = 0x514; // int32
			 uintptr_t m_bEnabled = 0x518; // bool
			 uintptr_t m_strFilterName = 0x520; // CUtlSymbolLarge
			 uintptr_t m_hFilter = 0x528; // CHandle< CBaseFilter >
			 uintptr_t m_OnNavLinkStart = 0x530; // CEntityIOOutput
			 uintptr_t m_OnNavLinkFinish = 0x558; // CEntityIOOutput
			 uintptr_t m_bIsTerminus = 0x580; // bool
		}
	}
}
