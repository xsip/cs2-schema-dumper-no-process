#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerLook {
			 uintptr_t m_hLookTarget = 0x988;
			 uintptr_t m_flFieldOfView = 0x98c;
			 uintptr_t m_flLookTime = 0x990;
			 uintptr_t m_flLookTimeTotal = 0x994;
			 uintptr_t m_flLookTimeLast = 0x998;
			 uintptr_t m_flTimeoutDuration = 0x99c;
			 uintptr_t m_bTimeoutFired = 0x9a0;
			 uintptr_t m_bIsLooking = 0x9a1;
			 uintptr_t m_b2DFOV = 0x9a2;
			 uintptr_t m_bUseVelocity = 0x9a3;
			 uintptr_t m_bTestOcclusion = 0x9a4;
			 uintptr_t m_OnTimeout = 0x9a8;
			 uintptr_t m_OnStartLook = 0x9d0;
			 uintptr_t m_OnEndLook = 0x9f8;
		}
	}
}
