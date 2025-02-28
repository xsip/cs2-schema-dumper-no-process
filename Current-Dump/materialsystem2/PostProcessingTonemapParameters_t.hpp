#include <Windows.h>


namespace xsip {
	namespace materialsystem2 {
		namespace PostProcessingTonemapParameters_t {
			 uintptr_t m_flExposureBias = 0x0; // float32
			 uintptr_t m_flShoulderStrength = 0x4; // float32
			 uintptr_t m_flLinearStrength = 0x8; // float32
			 uintptr_t m_flLinearAngle = 0xc; // float32
			 uintptr_t m_flToeStrength = 0x10; // float32
			 uintptr_t m_flToeNum = 0x14; // float32
			 uintptr_t m_flToeDenom = 0x18; // float32
			 uintptr_t m_flWhitePoint = 0x1c; // float32
			 uintptr_t m_flLuminanceSource = 0x20; // float32
			 uintptr_t m_flExposureBiasShadows = 0x24; // float32
			 uintptr_t m_flExposureBiasHighlights = 0x28; // float32
			 uintptr_t m_flMinShadowLum = 0x2c; // float32
			 uintptr_t m_flMaxShadowLum = 0x30; // float32
			 uintptr_t m_flMinHighlightLum = 0x34; // float32
			 uintptr_t m_flMaxHighlightLum = 0x38; // float32
		}
	}
}
