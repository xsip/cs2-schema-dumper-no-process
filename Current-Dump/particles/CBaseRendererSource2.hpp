#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CBaseRendererSource2 {
			 uintptr_t m_flRadiusScale = 0x210; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flAlphaScale = 0x370; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flRollScale = 0x4d0; // CParticleCollectionRendererFloatInput
			 uintptr_t m_nAlpha2Field = 0x630; // ParticleAttributeIndex_t
			 uintptr_t m_vecColorScale = 0x638; // CParticleCollectionRendererVecInput
			 uintptr_t m_nColorBlendType = 0xcb0; // ParticleColorBlendType_t
			 uintptr_t m_nShaderType = 0xcb4; // SpriteCardShaderType_t
			 uintptr_t m_strShaderOverride = 0xcb8; // CUtlString
			 uintptr_t m_flCenterXOffset = 0xcc0; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flCenterYOffset = 0xe20; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flBumpStrength = 0xf80; // float32
			 uintptr_t m_nCropTextureOverride = 0xf84; // ParticleSequenceCropOverride_t
			 uintptr_t m_vecTexturesInput = 0xf88; // CUtlVector< TextureGroup_t >
			 uintptr_t m_flAnimationRate = 0xfa0; // float32
			 uintptr_t m_nAnimationType = 0xfa4; // AnimationType_t
			 uintptr_t m_bAnimateInFPS = 0xfa8; // bool
			 uintptr_t m_flMotionVectorScaleU = 0xfb0; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flMotionVectorScaleV = 0x1110; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flSelfIllumAmount = 0x1270; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flDiffuseAmount = 0x13d0; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flDiffuseClamp = 0x1530; // CParticleCollectionRendererFloatInput
			 uintptr_t m_nLightingControlPoint = 0x1690; // int32
			 uintptr_t m_nSelfIllumPerParticle = 0x1694; // ParticleAttributeIndex_t
			 uintptr_t m_nOutputBlendMode = 0x1698; // ParticleOutputBlendMode_t
			 uintptr_t m_bGammaCorrectVertexColors = 0x169c; // bool
			 uintptr_t m_bSaturateColorPreAlphaBlend = 0x169d; // bool
			 uintptr_t m_flAddSelfAmount = 0x16a0; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flDesaturation = 0x1800; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flOverbrightFactor = 0x1960; // CParticleCollectionRendererFloatInput
			 uintptr_t m_nHSVShiftControlPoint = 0x1ac0; // int32
			 uintptr_t m_nFogType = 0x1ac4; // ParticleFogType_t
			 uintptr_t m_flFogAmount = 0x1ac8; // CParticleCollectionRendererFloatInput
			 uintptr_t m_bTintByFOW = 0x1c28; // bool
			 uintptr_t m_bTintByGlobalLight = 0x1c29; // bool
			 uintptr_t m_nPerParticleAlphaReference = 0x1c2c; // SpriteCardPerParticleScale_t
			 uintptr_t m_nPerParticleAlphaRefWindow = 0x1c30; // SpriteCardPerParticleScale_t
			 uintptr_t m_nAlphaReferenceType = 0x1c34; // ParticleAlphaReferenceType_t
			 uintptr_t m_flAlphaReferenceSoftness = 0x1c38; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flSourceAlphaValueToMapToZero = 0x1d98; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flSourceAlphaValueToMapToOne = 0x1ef8; // CParticleCollectionRendererFloatInput
			 uintptr_t m_bRefract = 0x2058; // bool
			 uintptr_t m_bRefractSolid = 0x2059; // bool
			 uintptr_t m_flRefractAmount = 0x2060; // CParticleCollectionRendererFloatInput
			 uintptr_t m_nRefractBlurRadius = 0x21c0; // int32
			 uintptr_t m_nRefractBlurType = 0x21c4; // BlurFilterType_t
			 uintptr_t m_bOnlyRenderInEffectsBloomPass = 0x21c8; // bool
			 uintptr_t m_bOnlyRenderInEffectsWaterPass = 0x21c9; // bool
			 uintptr_t m_bUseMixedResolutionRendering = 0x21ca; // bool
			 uintptr_t m_bOnlyRenderInEffecsGameOverlay = 0x21cb; // bool
			 uintptr_t m_stencilTestID = 0x21cc; // char[128]
			 uintptr_t m_bStencilTestExclude = 0x224c; // bool
			 uintptr_t m_stencilWriteID = 0x224d; // char[128]
			 uintptr_t m_bWriteStencilOnDepthPass = 0x22cd; // bool
			 uintptr_t m_bWriteStencilOnDepthFail = 0x22ce; // bool
			 uintptr_t m_bReverseZBuffering = 0x22cf; // bool
			 uintptr_t m_bDisableZBuffering = 0x22d0; // bool
			 uintptr_t m_nFeatheringMode = 0x22d4; // ParticleDepthFeatheringMode_t
			 uintptr_t m_flFeatheringMinDist = 0x22d8; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flFeatheringMaxDist = 0x2438; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flFeatheringFilter = 0x2598; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flDepthBias = 0x26f8; // CParticleCollectionRendererFloatInput
			 uintptr_t m_nSortMethod = 0x2858; // ParticleSortingChoiceList_t
			 uintptr_t m_bBlendFramesSeq0 = 0x285c; // bool
			 uintptr_t m_bMaxLuminanceBlendingSequence0 = 0x285d; // bool
		}
	}
}
