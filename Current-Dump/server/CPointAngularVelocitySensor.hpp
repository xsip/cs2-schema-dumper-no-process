#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointAngularVelocitySensor {
			 uintptr_t m_hTargetEntity = 0x4e0;
			 uintptr_t m_flThreshold = 0x4e4;
			 uintptr_t m_nLastCompareResult = 0x4e8;
			 uintptr_t m_nLastFireResult = 0x4ec;
			 uintptr_t m_flFireTime = 0x4f0;
			 uintptr_t m_flFireInterval = 0x4f4;
			 uintptr_t m_flLastAngVelocity = 0x4f8;
			 uintptr_t m_lastOrientation = 0x4fc;
			 uintptr_t m_vecAxis = 0x508;
			 uintptr_t m_bUseHelper = 0x514;
			 uintptr_t m_AngularVelocity = 0x518;
			 uintptr_t m_OnLessThan = 0x540;
			 uintptr_t m_OnLessThanOrEqualTo = 0x568;
			 uintptr_t m_OnGreaterThan = 0x590;
			 uintptr_t m_OnGreaterThanOrEqualTo = 0x5b8;
			 uintptr_t m_OnEqualTo = 0x5e0;
		}
	}
}
