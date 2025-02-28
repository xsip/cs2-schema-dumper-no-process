#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_TriggerPhysics {
			 uintptr_t m_gravityScale = 0xd30;
			 uintptr_t m_linearLimit = 0xd34;
			 uintptr_t m_linearDamping = 0xd38;
			 uintptr_t m_angularLimit = 0xd3c;
			 uintptr_t m_angularDamping = 0xd40;
			 uintptr_t m_linearForce = 0xd44;
			 uintptr_t m_flFrequency = 0xd48;
			 uintptr_t m_flDampingRatio = 0xd4c;
			 uintptr_t m_vecLinearForcePointAt = 0xd50;
			 uintptr_t m_bCollapseToForcePoint = 0xd5c;
			 uintptr_t m_vecLinearForcePointAtWorld = 0xd60;
			 uintptr_t m_vecLinearForceDirection = 0xd6c;
			 uintptr_t m_bConvertToDebrisWhenPossible = 0xd78;
		}
	}
}
