#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_RingWave {
			 uintptr_t m_TransformInput = 0x1c8; // CParticleTransformInput
			 uintptr_t m_flParticlesPerOrbit = 0x230; // CParticleCollectionFloatInput
			 uintptr_t m_flInitialRadius = 0x390; // CPerParticleFloatInput
			 uintptr_t m_flThickness = 0x4f0; // CPerParticleFloatInput
			 uintptr_t m_flInitialSpeedMin = 0x650; // CPerParticleFloatInput
			 uintptr_t m_flInitialSpeedMax = 0x7b0; // CPerParticleFloatInput
			 uintptr_t m_flRoll = 0x910; // CPerParticleFloatInput
			 uintptr_t m_flPitch = 0xa70; // CPerParticleFloatInput
			 uintptr_t m_flYaw = 0xbd0; // CPerParticleFloatInput
			 uintptr_t m_bEvenDistribution = 0xd30; // bool
			 uintptr_t m_bXYVelocityOnly = 0xd31; // bool
		}
	}
}
