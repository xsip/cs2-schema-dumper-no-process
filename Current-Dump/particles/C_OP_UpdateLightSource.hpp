#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_UpdateLightSource {
			 uintptr_t m_vColorTint = 0x1c0; // Color
			 uintptr_t m_flBrightnessScale = 0x1c4; // float32
			 uintptr_t m_flRadiusScale = 0x1c8; // float32
			 uintptr_t m_flMinimumLightingRadius = 0x1cc; // float32
			 uintptr_t m_flMaximumLightingRadius = 0x1d0; // float32
			 uintptr_t m_flPositionDampingConstant = 0x1d4; // float32
		}
	}
}
