#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointAngularVelocitySensor {
			 uintptr_t m_hTargetEntity = 0x4e0; // CHandle< CBaseEntity >
			 uintptr_t m_flThreshold = 0x4e4; // float32
			 uintptr_t m_nLastCompareResult = 0x4e8; // int32
			 uintptr_t m_nLastFireResult = 0x4ec; // int32
			 uintptr_t m_flFireTime = 0x4f0; // GameTime_t
			 uintptr_t m_flFireInterval = 0x4f4; // float32
			 uintptr_t m_flLastAngVelocity = 0x4f8; // float32
			 uintptr_t m_lastOrientation = 0x4fc; // QAngle
			 uintptr_t m_vecAxis = 0x508; // Vector
			 uintptr_t m_bUseHelper = 0x514; // bool
			 uintptr_t m_AngularVelocity = 0x518; // CEntityOutputTemplate< float32 >
			 uintptr_t m_OnLessThan = 0x540; // CEntityIOOutput
			 uintptr_t m_OnLessThanOrEqualTo = 0x568; // CEntityIOOutput
			 uintptr_t m_OnGreaterThan = 0x590; // CEntityIOOutput
			 uintptr_t m_OnGreaterThanOrEqualTo = 0x5b8; // CEntityIOOutput
			 uintptr_t m_OnEqualTo = 0x5e0; // CEntityIOOutput
		}
	}
}
