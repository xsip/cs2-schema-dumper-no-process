#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysHinge {
			 uintptr_t m_soundInfo = 0x560;
			 uintptr_t m_NotifyMinLimitReached = 0x5e8;
			 uintptr_t m_NotifyMaxLimitReached = 0x610;
			 uintptr_t m_bAtMinLimit = 0x638;
			 uintptr_t m_bAtMaxLimit = 0x639;
			 uintptr_t m_hinge = 0x63c;
			 uintptr_t m_hingeFriction = 0x67c;
			 uintptr_t m_systemLoadScale = 0x680;
			 uintptr_t m_bIsAxisLocal = 0x684;
			 uintptr_t m_flMinRotation = 0x688;
			 uintptr_t m_flMaxRotation = 0x68c;
			 uintptr_t m_flInitialRotation = 0x690;
			 uintptr_t m_flMotorFrequency = 0x694;
			 uintptr_t m_flMotorDampingRatio = 0x698;
			 uintptr_t m_flAngleSpeed = 0x69c;
			 uintptr_t m_flAngleSpeedThreshold = 0x6a0;
			 uintptr_t m_OnStartMoving = 0x6a8;
			 uintptr_t m_OnStopMoving = 0x6d0;
		}
	}
}
