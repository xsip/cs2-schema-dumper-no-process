#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_LerpToInitialPosition {
			 uintptr_t m_nControlPointNumber = 0x1c0; // int32
			 uintptr_t m_flInterpolation = 0x1c8; // CPerParticleFloatInput
			 uintptr_t m_nCacheField = 0x328; // ParticleAttributeIndex_t
			 uintptr_t m_flScale = 0x330; // CParticleCollectionFloatInput
			 uintptr_t m_vecScale = 0x490; // CParticleCollectionVecInput
		}
	}
}
