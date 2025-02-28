#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_LightningSnapshotGenerator {
			 uintptr_t m_nCPSnapshot = 0x1c8; // int32
			 uintptr_t m_nCPStartPnt = 0x1cc; // int32
			 uintptr_t m_nCPEndPnt = 0x1d0; // int32
			 uintptr_t m_flSegments = 0x1d8; // CParticleCollectionFloatInput
			 uintptr_t m_flOffset = 0x338; // CParticleCollectionFloatInput
			 uintptr_t m_flOffsetDecay = 0x498; // CParticleCollectionFloatInput
			 uintptr_t m_flRecalcRate = 0x5f8; // CParticleCollectionFloatInput
			 uintptr_t m_flUVScale = 0x758; // CParticleCollectionFloatInput
			 uintptr_t m_flUVOffset = 0x8b8; // CParticleCollectionFloatInput
			 uintptr_t m_flSplitRate = 0xa18; // CParticleCollectionFloatInput
			 uintptr_t m_flBranchTwist = 0xb78; // CParticleCollectionFloatInput
			 uintptr_t m_nBranchBehavior = 0xcd8; // ParticleLightnintBranchBehavior_t
			 uintptr_t m_flRadiusStart = 0xce0; // CParticleCollectionFloatInput
			 uintptr_t m_flRadiusEnd = 0xe40; // CParticleCollectionFloatInput
			 uintptr_t m_flDedicatedPool = 0xfa0; // CParticleCollectionFloatInput
		}
	}
}
