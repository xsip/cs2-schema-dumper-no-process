#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_FadeOut {
			 uintptr_t m_flFadeOutTimeMin = 0x1c0; // float32
			 uintptr_t m_flFadeOutTimeMax = 0x1c4; // float32
			 uintptr_t m_flFadeOutTimeExp = 0x1c8; // float32
			 uintptr_t m_flFadeBias = 0x1cc; // float32
			 uintptr_t m_bProportional = 0x200; // bool
			 uintptr_t m_bEaseInAndOut = 0x201; // bool
		}
	}
}
