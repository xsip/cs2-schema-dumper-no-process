#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderCables {
			 uintptr_t m_flRadiusScale = 0x210; // CParticleCollectionFloatInput
			 uintptr_t m_flAlphaScale = 0x370; // CParticleCollectionFloatInput
			 uintptr_t m_vecColorScale = 0x4d0; // CParticleCollectionVecInput
			 uintptr_t m_nColorBlendType = 0xb48; // ParticleColorBlendType_t
			 uintptr_t m_hMaterial = 0xb50; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_nTextureRepetitionMode = 0xb58; // TextureRepetitionMode_t
			 uintptr_t m_flTextureRepeatsPerSegment = 0xb60; // CParticleCollectionFloatInput
			 uintptr_t m_flTextureRepeatsCircumference = 0xcc0; // CParticleCollectionFloatInput
			 uintptr_t m_flColorMapOffsetV = 0xe20; // CParticleCollectionFloatInput
			 uintptr_t m_flColorMapOffsetU = 0xf80; // CParticleCollectionFloatInput
			 uintptr_t m_flNormalMapOffsetV = 0x10e0; // CParticleCollectionFloatInput
			 uintptr_t m_flNormalMapOffsetU = 0x1240; // CParticleCollectionFloatInput
			 uintptr_t m_bDrawCableCaps = 0x13a0; // bool
			 uintptr_t m_flCapRoundness = 0x13a4; // float32
			 uintptr_t m_flCapOffsetAmount = 0x13a8; // float32
			 uintptr_t m_flTessScale = 0x13ac; // float32
			 uintptr_t m_nMinTesselation = 0x13b0; // int32
			 uintptr_t m_nMaxTesselation = 0x13b4; // int32
			 uintptr_t m_nRoundness = 0x13b8; // int32
			 uintptr_t m_LightingTransform = 0x13c0; // CParticleTransformInput
			 uintptr_t m_MaterialFloatVars = 0x1428; // CUtlVector< FloatInputMaterialVariable_t >
			 uintptr_t m_MaterialVecVars = 0x1458; // CUtlVector< VecInputMaterialVariable_t >
		}
	}
}
