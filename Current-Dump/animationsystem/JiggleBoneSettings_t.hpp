#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace JiggleBoneSettings_t {
			 uintptr_t m_nBoneIndex = 0x0; // int32
			 uintptr_t m_flSpringStrength = 0x4; // float32
			 uintptr_t m_flMaxTimeStep = 0x8; // float32
			 uintptr_t m_flDamping = 0xc; // float32
			 uintptr_t m_vBoundsMaxLS = 0x10; // Vector
			 uintptr_t m_vBoundsMinLS = 0x1c; // Vector
			 uintptr_t m_eSimSpace = 0x28; // JiggleBoneSimSpace
		}
	}
}
