#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CGlowProperty {
			 uintptr_t m_fGlowColor = 0x8;
			 uintptr_t m_iGlowType = 0x30;
			 uintptr_t m_iGlowTeam = 0x34;
			 uintptr_t m_nGlowRange = 0x38;
			 uintptr_t m_nGlowRangeMin = 0x3c;
			 uintptr_t m_glowColorOverride = 0x40;
			 uintptr_t m_bFlashing = 0x44;
			 uintptr_t m_flGlowTime = 0x48;
			 uintptr_t m_flGlowStartTime = 0x4c;
			 uintptr_t m_bEligibleForScreenHighlight = 0x50;
			 uintptr_t m_bGlowing = 0x51;
		}
	}
}
