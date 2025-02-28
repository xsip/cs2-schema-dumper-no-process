#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CGlowProperty {
			 uintptr_t m_fGlowColor = 0x8; // Vector
			 uintptr_t m_iGlowType = 0x30; // int32
			 uintptr_t m_iGlowTeam = 0x34; // int32
			 uintptr_t m_nGlowRange = 0x38; // int32
			 uintptr_t m_nGlowRangeMin = 0x3c; // int32
			 uintptr_t m_glowColorOverride = 0x40; // Color
			 uintptr_t m_bFlashing = 0x44; // bool
			 uintptr_t m_flGlowTime = 0x48; // float32
			 uintptr_t m_flGlowStartTime = 0x4c; // float32
			 uintptr_t m_bEligibleForScreenHighlight = 0x50; // bool
			 uintptr_t m_bGlowing = 0x51; // bool
		}
	}
}
