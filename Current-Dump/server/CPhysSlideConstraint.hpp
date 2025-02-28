#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysSlideConstraint {
			 uintptr_t m_axisEnd = 0x560; // Vector
			 uintptr_t m_slideFriction = 0x56c; // float32
			 uintptr_t m_systemLoadScale = 0x570; // float32
			 uintptr_t m_initialOffset = 0x574; // float32
			 uintptr_t m_bEnableLinearConstraint = 0x578; // bool
			 uintptr_t m_bEnableAngularConstraint = 0x579; // bool
			 uintptr_t m_flMotorFrequency = 0x57c; // float32
			 uintptr_t m_flMotorDampingRatio = 0x580; // float32
			 uintptr_t m_bUseEntityPivot = 0x584; // bool
			 uintptr_t m_soundInfo = 0x588; // ConstraintSoundInfo
		}
	}
}
