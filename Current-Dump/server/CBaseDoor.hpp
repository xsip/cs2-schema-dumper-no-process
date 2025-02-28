#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseDoor {
			 uintptr_t m_angMoveEntitySpace = 0x820;
			 uintptr_t m_vecMoveDirParentSpace = 0x82c;
			 uintptr_t m_ls = 0x838;
			 uintptr_t m_bForceClosed = 0x858;
			 uintptr_t m_bDoorGroup = 0x859;
			 uintptr_t m_bLocked = 0x85a;
			 uintptr_t m_bIgnoreDebris = 0x85b;
			 uintptr_t m_eSpawnPosition = 0x85c;
			 uintptr_t m_flBlockDamage = 0x860;
			 uintptr_t m_NoiseMoving = 0x868;
			 uintptr_t m_NoiseArrived = 0x870;
			 uintptr_t m_NoiseMovingClosed = 0x878;
			 uintptr_t m_NoiseArrivedClosed = 0x880;
			 uintptr_t m_ChainTarget = 0x888;
			 uintptr_t m_OnBlockedClosing = 0x890;
			 uintptr_t m_OnBlockedOpening = 0x8b8;
			 uintptr_t m_OnUnblockedClosing = 0x8e0;
			 uintptr_t m_OnUnblockedOpening = 0x908;
			 uintptr_t m_OnFullyClosed = 0x930;
			 uintptr_t m_OnFullyOpen = 0x958;
			 uintptr_t m_OnClose = 0x980;
			 uintptr_t m_OnOpen = 0x9a8;
			 uintptr_t m_OnLockedUse = 0x9d0;
			 uintptr_t m_bLoopMoveSound = 0x9f8;
			 uintptr_t m_bCreateNavObstacle = 0xa10;
			 uintptr_t m_isChaining = 0xa11;
			 uintptr_t m_bIsUsable = 0xa12;
		}
	}
}
