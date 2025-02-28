#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_FadeAndKillForTracers {
			 uintptr_t m_flStartFadeInTime = 0x1c0; // float32
			 uintptr_t m_flEndFadeInTime = 0x1c4; // float32
			 uintptr_t m_flStartFadeOutTime = 0x1c8; // float32
			 uintptr_t m_flEndFadeOutTime = 0x1cc; // float32
			 uintptr_t m_flStartAlpha = 0x1d0; // float32
			 uintptr_t m_flEndAlpha = 0x1d4; // float32
		}
	}
}
