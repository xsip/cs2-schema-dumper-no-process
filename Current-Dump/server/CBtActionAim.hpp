#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBtActionAim {
			 uintptr_t m_szSensorInputKey = 0x68; // CUtlString
			 uintptr_t m_szAimReadyKey = 0x80; // CUtlString
			 uintptr_t m_flZoomCooldownTimestamp = 0x88; // float32
			 uintptr_t m_bDoneAiming = 0x8c; // bool
			 uintptr_t m_flLerpStartTime = 0x90; // float32
			 uintptr_t m_flNextLookTargetLerpTime = 0x94; // float32
			 uintptr_t m_flPenaltyReductionRatio = 0x98; // float32
			 uintptr_t m_NextLookTarget = 0x9c; // QAngle
			 uintptr_t m_AimTimer = 0xa8; // CountdownTimer
			 uintptr_t m_SniperHoldTimer = 0xc0; // CountdownTimer
			 uintptr_t m_FocusIntervalTimer = 0xd8; // CountdownTimer
			 uintptr_t m_bAcquired = 0xf0; // bool
		}
	}
}
