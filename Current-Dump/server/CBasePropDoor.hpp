#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBasePropDoor {
			 uintptr_t m_flAutoReturnDelay = 0xc68; // float32
			 uintptr_t m_hDoorList = 0xc70; // CUtlVector< CHandle< CBasePropDoor > >
			 uintptr_t m_nHardwareType = 0xc88; // int32
			 uintptr_t m_bNeedsHardware = 0xc8c; // bool
			 uintptr_t m_eDoorState = 0xc90; // DoorState_t
			 uintptr_t m_bLocked = 0xc94; // bool
			 uintptr_t m_closedPosition = 0xc98; // Vector
			 uintptr_t m_closedAngles = 0xca4; // QAngle
			 uintptr_t m_hBlocker = 0xcb0; // CHandle< CBaseEntity >
			 uintptr_t m_bFirstBlocked = 0xcb4; // bool
			 uintptr_t m_ls = 0xcb8; // locksound_t
			 uintptr_t m_bForceClosed = 0xcd8; // bool
			 uintptr_t m_vecLatchWorldPosition = 0xcdc; // Vector
			 uintptr_t m_hActivator = 0xce8; // CHandle< CBaseEntity >
			 uintptr_t m_SoundMoving = 0xcf8; // CUtlSymbolLarge
			 uintptr_t m_SoundOpen = 0xd00; // CUtlSymbolLarge
			 uintptr_t m_SoundClose = 0xd08; // CUtlSymbolLarge
			 uintptr_t m_SoundLock = 0xd10; // CUtlSymbolLarge
			 uintptr_t m_SoundUnlock = 0xd18; // CUtlSymbolLarge
			 uintptr_t m_SoundLatch = 0xd20; // CUtlSymbolLarge
			 uintptr_t m_SoundPound = 0xd28; // CUtlSymbolLarge
			 uintptr_t m_SoundJiggle = 0xd30; // CUtlSymbolLarge
			 uintptr_t m_SoundLockedAnim = 0xd38; // CUtlSymbolLarge
			 uintptr_t m_numCloseAttempts = 0xd40; // int32
			 uintptr_t m_nPhysicsMaterial = 0xd44; // CUtlStringToken
			 uintptr_t m_SlaveName = 0xd48; // CUtlSymbolLarge
			 uintptr_t m_hMaster = 0xd50; // CHandle< CBasePropDoor >
			 uintptr_t m_OnBlockedClosing = 0xd58; // CEntityIOOutput
			 uintptr_t m_OnBlockedOpening = 0xd80; // CEntityIOOutput
			 uintptr_t m_OnUnblockedClosing = 0xda8; // CEntityIOOutput
			 uintptr_t m_OnUnblockedOpening = 0xdd0; // CEntityIOOutput
			 uintptr_t m_OnFullyClosed = 0xdf8; // CEntityIOOutput
			 uintptr_t m_OnFullyOpen = 0xe20; // CEntityIOOutput
			 uintptr_t m_OnClose = 0xe48; // CEntityIOOutput
			 uintptr_t m_OnOpen = 0xe70; // CEntityIOOutput
			 uintptr_t m_OnLockedUse = 0xe98; // CEntityIOOutput
			 uintptr_t m_OnAjarOpen = 0xec0; // CEntityIOOutput
		}
	}
}
