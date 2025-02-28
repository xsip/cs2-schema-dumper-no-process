#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapParticleCountToScalar {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_nInputMin = 0x1c8; // CParticleCollectionFloatInput
			 uintptr_t m_nInputMax = 0x328; // CParticleCollectionFloatInput
			 uintptr_t m_flOutputMin = 0x488; // CParticleCollectionFloatInput
			 uintptr_t m_flOutputMax = 0x5e8; // CParticleCollectionFloatInput
			 uintptr_t m_bActiveRange = 0x748; // bool
			 uintptr_t m_nSetMethod = 0x74c; // ParticleSetMethod_t
		}
	}
}
