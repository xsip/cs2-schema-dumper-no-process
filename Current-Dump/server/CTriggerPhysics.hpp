#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerPhysics {
			 uintptr_t m_gravityScale = 0x970;
			 uintptr_t m_linearLimit = 0x974;
			 uintptr_t m_linearDamping = 0x978;
			 uintptr_t m_angularLimit = 0x97c;
			 uintptr_t m_angularDamping = 0x980;
			 uintptr_t m_linearForce = 0x984;
			 uintptr_t m_flFrequency = 0x988;
			 uintptr_t m_flDampingRatio = 0x98c;
			 uintptr_t m_vecLinearForcePointAt = 0x990;
			 uintptr_t m_bCollapseToForcePoint = 0x99c;
			 uintptr_t m_vecLinearForcePointAtWorld = 0x9a0;
			 uintptr_t m_vecLinearForceDirection = 0x9ac;
			 uintptr_t m_bConvertToDebrisWhenPossible = 0x9b8;
		}
	}
}
