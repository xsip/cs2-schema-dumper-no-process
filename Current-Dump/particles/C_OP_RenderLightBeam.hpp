#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderLightBeam {
			 uintptr_t m_vColorBlend = 0x210; // CParticleCollectionVecInput
			 uintptr_t m_nColorBlendType = 0x888; // ParticleColorBlendType_t
			 uintptr_t m_flBrightnessLumensPerMeter = 0x890; // CParticleCollectionFloatInput
			 uintptr_t m_bCastShadows = 0x9f0; // bool
			 uintptr_t m_flSkirt = 0x9f8; // CParticleCollectionFloatInput
			 uintptr_t m_flRange = 0xb58; // CParticleCollectionFloatInput
			 uintptr_t m_flThickness = 0xcb8; // CParticleCollectionFloatInput
		}
	}
}
