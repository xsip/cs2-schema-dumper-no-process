#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_CreateParticleImpulse {
			 uintptr_t m_InputRadius = 0x1c8; // CPerParticleFloatInput
			 uintptr_t m_InputMagnitude = 0x328; // CPerParticleFloatInput
			 uintptr_t m_nFalloffFunction = 0x488; // ParticleFalloffFunction_t
			 uintptr_t m_InputFalloffExp = 0x490; // CPerParticleFloatInput
			 uintptr_t m_nImpulseType = 0x5f0; // ParticleImpulseType_t
		}
	}
}
