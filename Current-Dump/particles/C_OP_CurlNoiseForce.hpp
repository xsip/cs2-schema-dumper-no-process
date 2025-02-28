#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_CurlNoiseForce {
			 uintptr_t m_nNoiseType = 0x1d0; // ParticleDirectionNoiseType_t
			 uintptr_t m_vecNoiseFreq = 0x1d8; // CPerParticleVecInput
			 uintptr_t m_vecNoiseScale = 0x850; // CPerParticleVecInput
			 uintptr_t m_vecOffset = 0xec8; // CPerParticleVecInput
			 uintptr_t m_vecOffsetRate = 0x1540; // CPerParticleVecInput
			 uintptr_t m_flWorleySeed = 0x1bb8; // CPerParticleFloatInput
			 uintptr_t m_flWorleyJitter = 0x1d18; // CPerParticleFloatInput
		}
	}
}
