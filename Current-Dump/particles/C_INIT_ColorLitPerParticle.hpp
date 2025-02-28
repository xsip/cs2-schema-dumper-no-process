#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_ColorLitPerParticle {
			 uintptr_t m_ColorMin = 0x1e0; // Color
			 uintptr_t m_ColorMax = 0x1e4; // Color
			 uintptr_t m_TintMin = 0x1e8; // Color
			 uintptr_t m_TintMax = 0x1ec; // Color
			 uintptr_t m_flTintPerc = 0x1f0; // float32
			 uintptr_t m_nTintBlendMode = 0x1f4; // ParticleColorBlendMode_t
			 uintptr_t m_flLightAmplification = 0x1f8; // float32
		}
	}
}
