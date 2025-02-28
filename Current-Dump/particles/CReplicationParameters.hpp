#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CReplicationParameters {
			 uintptr_t m_nReplicationMode = 0x0; // ParticleReplicationMode_t
			 uintptr_t m_bScaleChildParticleRadii = 0x4; // bool
			 uintptr_t m_flMinRandomRadiusScale = 0x8; // CParticleCollectionFloatInput
			 uintptr_t m_flMaxRandomRadiusScale = 0x168; // CParticleCollectionFloatInput
			 uintptr_t m_vMinRandomDisplacement = 0x2c8; // CParticleCollectionVecInput
			 uintptr_t m_vMaxRandomDisplacement = 0x940; // CParticleCollectionVecInput
			 uintptr_t m_flModellingScale = 0xfb8; // CParticleCollectionFloatInput
		}
	}
}
