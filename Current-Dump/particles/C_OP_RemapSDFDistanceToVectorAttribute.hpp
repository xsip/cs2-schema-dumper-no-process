#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapSDFDistanceToVectorAttribute {
			 uintptr_t m_nVectorFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_nVectorFieldInput = 0x1c4; // ParticleAttributeIndex_t
			 uintptr_t m_flMinDistance = 0x1c8; // CParticleCollectionFloatInput
			 uintptr_t m_flMaxDistance = 0x328; // CParticleCollectionFloatInput
			 uintptr_t m_vValueBelowMin = 0x488; // Vector
			 uintptr_t m_vValueAtMin = 0x494; // Vector
			 uintptr_t m_vValueAtMax = 0x4a0; // Vector
			 uintptr_t m_vValueAboveMax = 0x4ac; // Vector
		}
	}
}
