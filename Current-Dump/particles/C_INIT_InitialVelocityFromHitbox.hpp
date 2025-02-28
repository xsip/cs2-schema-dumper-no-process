#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_InitialVelocityFromHitbox {
			 uintptr_t m_flVelocityMin = 0x1c8; // float32
			 uintptr_t m_flVelocityMax = 0x1cc; // float32
			 uintptr_t m_nControlPointNumber = 0x1d0; // int32
			 uintptr_t m_HitboxSetName = 0x1d4; // char[128]
			 uintptr_t m_bUseBones = 0x254; // bool
		}
	}
}
