#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBasePropDoor {
			 uintptr_t m_flAutoReturnDelay = 0xc68;
			 uintptr_t m_hDoorList = 0xc70;
			 uintptr_t m_nHardwareType = 0xc88;
			 uintptr_t m_bNeedsHardware = 0xc8c;
			 uintptr_t m_eDoorState = 0xc90;
			 uintptr_t m_bLocked = 0xc94;
			 uintptr_t m_closedPosition = 0xc98;
			 uintptr_t m_closedAngles = 0xca4;
			 uintptr_t m_hBlocker = 0xcb0;
			 uintptr_t m_bFirstBlocked = 0xcb4;
			 uintptr_t m_ls = 0xcb8;
			 uintptr_t m_bForceClosed = 0xcd8;
			 uintptr_t m_vecLatchWorldPosition = 0xcdc;
			 uintptr_t m_hActivator = 0xce8;
			 uintptr_t m_SoundMoving = 0xcf8;
			 uintptr_t m_SoundOpen = 0xd00;
			 uintptr_t m_SoundClose = 0xd08;
			 uintptr_t m_SoundLock = 0xd10;
			 uintptr_t m_SoundUnlock = 0xd18;
			 uintptr_t m_SoundLatch = 0xd20;
			 uintptr_t m_SoundPound = 0xd28;
			 uintptr_t m_SoundJiggle = 0xd30;
			 uintptr_t m_SoundLockedAnim = 0xd38;
			 uintptr_t m_numCloseAttempts = 0xd40;
			 uintptr_t m_nPhysicsMaterial = 0xd44;
			 uintptr_t m_SlaveName = 0xd48;
			 uintptr_t m_hMaster = 0xd50;
			 uintptr_t m_OnBlockedClosing = 0xd58;
			 uintptr_t m_OnBlockedOpening = 0xd80;
			 uintptr_t m_OnUnblockedClosing = 0xda8;
			 uintptr_t m_OnUnblockedOpening = 0xdd0;
			 uintptr_t m_OnFullyClosed = 0xdf8;
			 uintptr_t m_OnFullyOpen = 0xe20;
			 uintptr_t m_OnClose = 0xe48;
			 uintptr_t m_OnOpen = 0xe70;
			 uintptr_t m_OnLockedUse = 0xe98;
			 uintptr_t m_OnAjarOpen = 0xec0;
		}
	}
}
