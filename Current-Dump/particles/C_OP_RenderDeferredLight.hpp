#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderDeferredLight {
			 uintptr_t m_bUseAlphaTestWindow = 0x210; // bool
			 uintptr_t m_bUseTexture = 0x211; // bool
			 uintptr_t m_flRadiusScale = 0x214; // float32
			 uintptr_t m_flAlphaScale = 0x218; // float32
			 uintptr_t m_nAlpha2Field = 0x21c; // ParticleAttributeIndex_t
			 uintptr_t m_vecColorScale = 0x220; // CParticleCollectionVecInput
			 uintptr_t m_nColorBlendType = 0x898; // ParticleColorBlendType_t
			 uintptr_t m_flLightDistance = 0x89c; // float32
			 uintptr_t m_flStartFalloff = 0x8a0; // float32
			 uintptr_t m_flDistanceFalloff = 0x8a4; // float32
			 uintptr_t m_flSpotFoV = 0x8a8; // float32
			 uintptr_t m_nAlphaTestPointField = 0x8ac; // ParticleAttributeIndex_t
			 uintptr_t m_nAlphaTestRangeField = 0x8b0; // ParticleAttributeIndex_t
			 uintptr_t m_nAlphaTestSharpnessField = 0x8b4; // ParticleAttributeIndex_t
			 uintptr_t m_hTexture = 0x8b8; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_nHSVShiftControlPoint = 0x8c0; // int32
		}
	}
}
