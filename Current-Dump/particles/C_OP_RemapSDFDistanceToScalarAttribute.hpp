#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapSDFDistanceToScalarAttribute {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_nVectorFieldInput = 0x1c4; // ParticleAttributeIndex_t
			 uintptr_t m_flMinDistance = 0x1c8; // CParticleCollectionFloatInput
			 uintptr_t m_flMaxDistance = 0x328; // CParticleCollectionFloatInput
			 uintptr_t m_flValueBelowMin = 0x488; // CParticleCollectionFloatInput
			 uintptr_t m_flValueAtMin = 0x5e8; // CParticleCollectionFloatInput
			 uintptr_t m_flValueAtMax = 0x748; // CParticleCollectionFloatInput
			 uintptr_t m_flValueAboveMax = 0x8a8; // CParticleCollectionFloatInput
		}
	}
}
