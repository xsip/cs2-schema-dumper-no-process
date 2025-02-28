#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_TriggerPhysics {
			 uintptr_t m_gravityScale = 0xd30; // float32
			 uintptr_t m_linearLimit = 0xd34; // float32
			 uintptr_t m_linearDamping = 0xd38; // float32
			 uintptr_t m_angularLimit = 0xd3c; // float32
			 uintptr_t m_angularDamping = 0xd40; // float32
			 uintptr_t m_linearForce = 0xd44; // float32
			 uintptr_t m_flFrequency = 0xd48; // float32
			 uintptr_t m_flDampingRatio = 0xd4c; // float32
			 uintptr_t m_vecLinearForcePointAt = 0xd50; // Vector
			 uintptr_t m_bCollapseToForcePoint = 0xd5c; // bool
			 uintptr_t m_vecLinearForcePointAtWorld = 0xd60; // Vector
			 uintptr_t m_vecLinearForceDirection = 0xd6c; // Vector
			 uintptr_t m_bConvertToDebrisWhenPossible = 0xd78; // bool
		}
	}
}
