#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderProjected {
			 uintptr_t m_bProjectCharacter = 0x210; // bool
			 uintptr_t m_bProjectWorld = 0x211; // bool
			 uintptr_t m_bProjectWater = 0x212; // bool
			 uintptr_t m_bFlipHorizontal = 0x213; // bool
			 uintptr_t m_bEnableProjectedDepthControls = 0x214; // bool
			 uintptr_t m_flMinProjectionDepth = 0x218; // float32
			 uintptr_t m_flMaxProjectionDepth = 0x21c; // float32
			 uintptr_t m_vecProjectedMaterials = 0x220; // CUtlVector< RenderProjectedMaterial_t >
			 uintptr_t m_flMaterialSelection = 0x238; // CPerParticleFloatInput
			 uintptr_t m_flAnimationTimeScale = 0x398; // float32
			 uintptr_t m_bOrientToNormal = 0x39c; // bool
			 uintptr_t m_MaterialVars = 0x3a0; // CUtlVector< MaterialVariable_t >
			 uintptr_t m_flRadiusScale = 0x3b8; // CParticleCollectionFloatInput
			 uintptr_t m_flAlphaScale = 0x518; // CParticleCollectionFloatInput
			 uintptr_t m_flRollScale = 0x678; // CParticleCollectionFloatInput
			 uintptr_t m_nAlpha2Field = 0x7d8; // ParticleAttributeIndex_t
			 uintptr_t m_vecColorScale = 0x7e0; // CParticleCollectionVecInput
			 uintptr_t m_nColorBlendType = 0xe58; // ParticleColorBlendType_t
		}
	}
}
