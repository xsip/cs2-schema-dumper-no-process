#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBtActionAim {
			 uintptr_t m_szSensorInputKey = 0x68;
			 uintptr_t m_szAimReadyKey = 0x80;
			 uintptr_t m_flZoomCooldownTimestamp = 0x88;
			 uintptr_t m_bDoneAiming = 0x8c;
			 uintptr_t m_flLerpStartTime = 0x90;
			 uintptr_t m_flNextLookTargetLerpTime = 0x94;
			 uintptr_t m_flPenaltyReductionRatio = 0x98;
			 uintptr_t m_NextLookTarget = 0x9c;
			 uintptr_t m_AimTimer = 0xa8;
			 uintptr_t m_SniperHoldTimer = 0xc0;
			 uintptr_t m_FocusIntervalTimer = 0xd8;
			 uintptr_t m_bAcquired = 0xf0;
		}
	}
}
