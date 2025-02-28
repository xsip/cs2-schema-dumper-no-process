#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderOmni2Light {
			 uintptr_t m_nLightType = 0x210; // ParticleOmni2LightTypeChoiceList_t
			 uintptr_t m_vColorBlend = 0x218; // CParticleCollectionVecInput
			 uintptr_t m_nColorBlendType = 0x890; // ParticleColorBlendType_t
			 uintptr_t m_nBrightnessUnit = 0x894; // ParticleLightUnitChoiceList_t
			 uintptr_t m_flBrightnessLumens = 0x898; // CPerParticleFloatInput
			 uintptr_t m_flBrightnessCandelas = 0x9f8; // CPerParticleFloatInput
			 uintptr_t m_bCastShadows = 0xb58; // bool
			 uintptr_t m_bFog = 0xb59; // bool
			 uintptr_t m_flFogScale = 0xb60; // CPerParticleFloatInput
			 uintptr_t m_flLuminaireRadius = 0xcc0; // CPerParticleFloatInput
			 uintptr_t m_flSkirt = 0xe20; // CPerParticleFloatInput
			 uintptr_t m_flRange = 0xf80; // CPerParticleFloatInput
			 uintptr_t m_flInnerConeAngle = 0x10e0; // CPerParticleFloatInput
			 uintptr_t m_flOuterConeAngle = 0x1240; // CPerParticleFloatInput
			 uintptr_t m_hLightCookie = 0x13a0; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_bSphericalCookie = 0x13a8; // bool
		}
	}
}
