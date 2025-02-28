#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderModels {
			 uintptr_t m_bOnlyRenderInEffectsBloomPass = 0x210; // bool
			 uintptr_t m_bOnlyRenderInEffectsWaterPass = 0x211; // bool
			 uintptr_t m_bUseMixedResolutionRendering = 0x212; // bool
			 uintptr_t m_bOnlyRenderInEffecsGameOverlay = 0x213; // bool
			 uintptr_t m_ModelList = 0x218; // CUtlVector< ModelReference_t >
			 uintptr_t m_nBodyGroupField = 0x230; // ParticleAttributeIndex_t
			 uintptr_t m_nSubModelField = 0x234; // ParticleAttributeIndex_t
			 uintptr_t m_bIgnoreNormal = 0x238; // bool
			 uintptr_t m_bOrientZ = 0x239; // bool
			 uintptr_t m_bCenterOffset = 0x23a; // bool
			 uintptr_t m_vecLocalOffset = 0x240; // CPerParticleVecInput
			 uintptr_t m_vecLocalRotation = 0x8b8; // CPerParticleVecInput
			 uintptr_t m_bIgnoreRadius = 0xf30; // bool
			 uintptr_t m_nModelScaleCP = 0xf34; // int32
			 uintptr_t m_vecComponentScale = 0xf38; // CPerParticleVecInput
			 uintptr_t m_bLocalScale = 0x15b0; // bool
			 uintptr_t m_nSizeCullBloat = 0x15b4; // int32
			 uintptr_t m_bAnimated = 0x15b8; // bool
			 uintptr_t m_flAnimationRate = 0x15c0; // CPerParticleFloatInput
			 uintptr_t m_bScaleAnimationRate = 0x1720; // bool
			 uintptr_t m_bForceLoopingAnimation = 0x1721; // bool
			 uintptr_t m_bResetAnimOnStop = 0x1722; // bool
			 uintptr_t m_bManualAnimFrame = 0x1723; // bool
			 uintptr_t m_nAnimationScaleField = 0x1724; // ParticleAttributeIndex_t
			 uintptr_t m_nAnimationField = 0x1728; // ParticleAttributeIndex_t
			 uintptr_t m_nManualFrameField = 0x172c; // ParticleAttributeIndex_t
			 uintptr_t m_ActivityName = 0x1730; // char[256]
			 uintptr_t m_SequenceName = 0x1830; // char[256]
			 uintptr_t m_bEnableClothSimulation = 0x1930; // bool
			 uintptr_t m_ClothEffectName = 0x1931; // char[64]
			 uintptr_t m_hOverrideMaterial = 0x1978; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_bOverrideTranslucentMaterials = 0x1980; // bool
			 uintptr_t m_nSkin = 0x1988; // CPerParticleFloatInput
			 uintptr_t m_MaterialVars = 0x1ae8; // CUtlVector< MaterialVariable_t >
			 uintptr_t m_flManualModelSelection = 0x1b00; // CPerParticleFloatInput
			 uintptr_t m_modelInput = 0x1c60; // CParticleModelInput
			 uintptr_t m_nLOD = 0x1cc0; // int32
			 uintptr_t m_EconSlotName = 0x1cc4; // char[256]
			 uintptr_t m_bOriginalModel = 0x1dc4; // bool
			 uintptr_t m_bSuppressTint = 0x1dc5; // bool
			 uintptr_t m_nSubModelFieldType = 0x1dc8; // RenderModelSubModelFieldType_t
			 uintptr_t m_bDisableShadows = 0x1dcc; // bool
			 uintptr_t m_bDisableDepthPrepass = 0x1dcd; // bool
			 uintptr_t m_bAcceptsDecals = 0x1dce; // bool
			 uintptr_t m_bForceDrawInterlevedWithSiblings = 0x1dcf; // bool
			 uintptr_t m_bDoNotDrawInParticlePass = 0x1dd0; // bool
			 uintptr_t m_bAllowApproximateTransforms = 0x1dd1; // bool
			 uintptr_t m_szRenderAttribute = 0x1dd2; // char[260]
			 uintptr_t m_flRadiusScale = 0x1ed8; // CParticleCollectionFloatInput
			 uintptr_t m_flAlphaScale = 0x2038; // CParticleCollectionFloatInput
			 uintptr_t m_flRollScale = 0x2198; // CParticleCollectionFloatInput
			 uintptr_t m_nAlpha2Field = 0x22f8; // ParticleAttributeIndex_t
			 uintptr_t m_vecColorScale = 0x2300; // CParticleCollectionVecInput
			 uintptr_t m_nColorBlendType = 0x2978; // ParticleColorBlendType_t
		}
	}
}
