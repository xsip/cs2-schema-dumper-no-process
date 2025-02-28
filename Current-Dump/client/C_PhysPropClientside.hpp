#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PhysPropClientside {
			 uintptr_t m_flTouchDelta = 0x1110; // GameTime_t
			 uintptr_t m_fDeathTime = 0x1114; // GameTime_t
			 uintptr_t m_inertiaScale = 0x1118; // float32
			 uintptr_t m_vecDamagePosition = 0x111c; // Vector
			 uintptr_t m_vecDamageDirection = 0x1128; // Vector
			 uintptr_t m_nDamageType = 0x1134; // DamageTypes_t
		}
	}
}
