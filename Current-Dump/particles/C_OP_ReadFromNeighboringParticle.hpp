#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ReadFromNeighboringParticle {
			 uintptr_t m_nFieldInput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_nFieldOutput = 0x1c4; // ParticleAttributeIndex_t
			 uintptr_t m_nIncrement = 0x1c8; // int32
			 uintptr_t m_DistanceCheck = 0x1d0; // CPerParticleFloatInput
			 uintptr_t m_flInterpolation = 0x330; // CPerParticleFloatInput
		}
	}
}
