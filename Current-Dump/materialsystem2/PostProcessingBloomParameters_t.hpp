#include <Windows.h>


namespace xsip {
	namespace materialsystem2 {
		namespace PostProcessingBloomParameters_t {
			 uintptr_t m_blendMode = 0x0; // BloomBlendMode_t
			 uintptr_t m_flBloomStrength = 0x4; // float32
			 uintptr_t m_flScreenBloomStrength = 0x8; // float32
			 uintptr_t m_flBlurBloomStrength = 0xc; // float32
			 uintptr_t m_flBloomThreshold = 0x10; // float32
			 uintptr_t m_flBloomThresholdWidth = 0x14; // float32
			 uintptr_t m_flSkyboxBloomStrength = 0x18; // float32
			 uintptr_t m_flBloomStartValue = 0x1c; // float32
			 uintptr_t m_flBlurWeight = 0x20; // float32[5]
			 uintptr_t m_vBlurTint = 0x34; // Vector[5]
		}
	}
}
