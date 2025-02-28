#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_InitialVelocityNoise {
			 uintptr_t m_vecAbsVal = 0x1c8; // Vector
			 uintptr_t m_vecAbsValInv = 0x1d4; // Vector
			 uintptr_t m_vecOffsetLoc = 0x1e0; // CPerParticleVecInput
			 uintptr_t m_flOffset = 0x858; // CPerParticleFloatInput
			 uintptr_t m_vecOutputMin = 0x9b8; // CPerParticleVecInput
			 uintptr_t m_vecOutputMax = 0x1030; // CPerParticleVecInput
			 uintptr_t m_flNoiseScale = 0x16a8; // CPerParticleFloatInput
			 uintptr_t m_flNoiseScaleLoc = 0x1808; // CPerParticleFloatInput
			 uintptr_t m_TransformInput = 0x1968; // CParticleTransformInput
			 uintptr_t m_bIgnoreDt = 0x19d0; // bool
		}
	}
}
