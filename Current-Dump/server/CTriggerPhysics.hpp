#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerPhysics {
			 uintptr_t m_gravityScale = 0x970; // float32
			 uintptr_t m_linearLimit = 0x974; // float32
			 uintptr_t m_linearDamping = 0x978; // float32
			 uintptr_t m_angularLimit = 0x97c; // float32
			 uintptr_t m_angularDamping = 0x980; // float32
			 uintptr_t m_linearForce = 0x984; // float32
			 uintptr_t m_flFrequency = 0x988; // float32
			 uintptr_t m_flDampingRatio = 0x98c; // float32
			 uintptr_t m_vecLinearForcePointAt = 0x990; // Vector
			 uintptr_t m_bCollapseToForcePoint = 0x99c; // bool
			 uintptr_t m_vecLinearForcePointAtWorld = 0x9a0; // Vector
			 uintptr_t m_vecLinearForceDirection = 0x9ac; // Vector
			 uintptr_t m_bConvertToDebrisWhenPossible = 0x9b8; // bool
		}
	}
}
