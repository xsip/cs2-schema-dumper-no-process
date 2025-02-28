#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CNavLinkAreaEntity {
			 uintptr_t m_flWidth = 0x4e0;
			 uintptr_t m_vLocatorOffset = 0x4e4;
			 uintptr_t m_qLocatorAnglesOffset = 0x4f0;
			 uintptr_t m_strMovementForward = 0x500;
			 uintptr_t m_strMovementReverse = 0x508;
			 uintptr_t m_nNavLinkIdForward = 0x510;
			 uintptr_t m_nNavLinkIdReverse = 0x514;
			 uintptr_t m_bEnabled = 0x518;
			 uintptr_t m_strFilterName = 0x520;
			 uintptr_t m_hFilter = 0x528;
			 uintptr_t m_OnNavLinkStart = 0x530;
			 uintptr_t m_OnNavLinkFinish = 0x558;
			 uintptr_t m_bIsTerminus = 0x580;
		}
	}
}
