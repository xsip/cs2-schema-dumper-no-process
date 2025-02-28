#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysHinge {
			 uintptr_t m_soundInfo = 0x560; // ConstraintSoundInfo
			 uintptr_t m_NotifyMinLimitReached = 0x5e8; // CEntityIOOutput
			 uintptr_t m_NotifyMaxLimitReached = 0x610; // CEntityIOOutput
			 uintptr_t m_bAtMinLimit = 0x638; // bool
			 uintptr_t m_bAtMaxLimit = 0x639; // bool
			 uintptr_t m_hinge = 0x63c; // constraint_hingeparams_t
			 uintptr_t m_hingeFriction = 0x67c; // float32
			 uintptr_t m_systemLoadScale = 0x680; // float32
			 uintptr_t m_bIsAxisLocal = 0x684; // bool
			 uintptr_t m_flMinRotation = 0x688; // float32
			 uintptr_t m_flMaxRotation = 0x68c; // float32
			 uintptr_t m_flInitialRotation = 0x690; // float32
			 uintptr_t m_flMotorFrequency = 0x694; // float32
			 uintptr_t m_flMotorDampingRatio = 0x698; // float32
			 uintptr_t m_flAngleSpeed = 0x69c; // float32
			 uintptr_t m_flAngleSpeedThreshold = 0x6a0; // float32
			 uintptr_t m_OnStartMoving = 0x6a8; // CEntityIOOutput
			 uintptr_t m_OnStopMoving = 0x6d0; // CEntityIOOutput
		}
	}
}
