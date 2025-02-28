#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerLook {
			 uintptr_t m_hLookTarget = 0x988; // CHandle< CBaseEntity >
			 uintptr_t m_flFieldOfView = 0x98c; // float32
			 uintptr_t m_flLookTime = 0x990; // float32
			 uintptr_t m_flLookTimeTotal = 0x994; // float32
			 uintptr_t m_flLookTimeLast = 0x998; // GameTime_t
			 uintptr_t m_flTimeoutDuration = 0x99c; // float32
			 uintptr_t m_bTimeoutFired = 0x9a0; // bool
			 uintptr_t m_bIsLooking = 0x9a1; // bool
			 uintptr_t m_b2DFOV = 0x9a2; // bool
			 uintptr_t m_bUseVelocity = 0x9a3; // bool
			 uintptr_t m_bTestOcclusion = 0x9a4; // bool
			 uintptr_t m_OnTimeout = 0x9a8; // CEntityIOOutput
			 uintptr_t m_OnStartLook = 0x9d0; // CEntityIOOutput
			 uintptr_t m_OnEndLook = 0x9f8; // CEntityIOOutput
		}
	}
}
