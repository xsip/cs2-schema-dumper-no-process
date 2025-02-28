#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RotateVector {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_vecRotAxisMin = 0x1c4; // Vector
			 uintptr_t m_vecRotAxisMax = 0x1d0; // Vector
			 uintptr_t m_flRotRateMin = 0x1dc; // float32
			 uintptr_t m_flRotRateMax = 0x1e0; // float32
			 uintptr_t m_bNormalize = 0x1e4; // bool
			 uintptr_t m_flScale = 0x1e8; // CPerParticleFloatInput
		}
	}
}
