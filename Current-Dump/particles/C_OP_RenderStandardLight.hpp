#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderStandardLight {
			 uintptr_t m_nLightType = 0x210; // ParticleLightTypeChoiceList_t
			 uintptr_t m_vecColorScale = 0x218; // CParticleCollectionVecInput
			 uintptr_t m_nColorBlendType = 0x890; // ParticleColorBlendType_t
			 uintptr_t m_flIntensity = 0x898; // CParticleCollectionFloatInput
			 uintptr_t m_bCastShadows = 0x9f8; // bool
			 uintptr_t m_flTheta = 0xa00; // CParticleCollectionFloatInput
			 uintptr_t m_flPhi = 0xb60; // CParticleCollectionFloatInput
			 uintptr_t m_flRadiusMultiplier = 0xcc0; // CParticleCollectionFloatInput
			 uintptr_t m_nAttenuationStyle = 0xe20; // StandardLightingAttenuationStyle_t
			 uintptr_t m_flFalloffLinearity = 0xe28; // CParticleCollectionFloatInput
			 uintptr_t m_flFiftyPercentFalloff = 0xf88; // CParticleCollectionFloatInput
			 uintptr_t m_flZeroPercentFalloff = 0x10e8; // CParticleCollectionFloatInput
			 uintptr_t m_bRenderDiffuse = 0x1248; // bool
			 uintptr_t m_bRenderSpecular = 0x1249; // bool
			 uintptr_t m_lightCookie = 0x1250; // CUtlString
			 uintptr_t m_nPriority = 0x1258; // int32
			 uintptr_t m_nFogLightingMode = 0x125c; // ParticleLightFogLightingMode_t
			 uintptr_t m_flFogContribution = 0x1260; // CParticleCollectionRendererFloatInput
			 uintptr_t m_nCapsuleLightBehavior = 0x13c0; // ParticleLightBehaviorChoiceList_t
			 uintptr_t m_flCapsuleLength = 0x13c4; // float32
			 uintptr_t m_bReverseOrder = 0x13c8; // bool
			 uintptr_t m_bClosedLoop = 0x13c9; // bool
			 uintptr_t m_nPrevPntSource = 0x13cc; // ParticleAttributeIndex_t
			 uintptr_t m_flMaxLength = 0x13d0; // float32
			 uintptr_t m_flMinLength = 0x13d4; // float32
			 uintptr_t m_bIgnoreDT = 0x13d8; // bool
			 uintptr_t m_flConstrainRadiusToLengthRatio = 0x13dc; // float32
			 uintptr_t m_flLengthScale = 0x13e0; // float32
			 uintptr_t m_flLengthFadeInTime = 0x13e4; // float32
		}
	}
}
