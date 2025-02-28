#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_PositionWarpScalar {
			 uintptr_t m_vecWarpMin = 0x1c8; // Vector
			 uintptr_t m_vecWarpMax = 0x1d4; // Vector
			 uintptr_t m_InputValue = 0x1e0; // CPerParticleFloatInput
			 uintptr_t m_flPrevPosScale = 0x340; // float32
			 uintptr_t m_nScaleControlPointNumber = 0x344; // int32
			 uintptr_t m_nControlPointNumber = 0x348; // int32
		}
	}
}
