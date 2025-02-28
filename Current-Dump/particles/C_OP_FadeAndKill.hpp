#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_FadeAndKill {
			 uintptr_t m_flStartFadeInTime = 0x1c0;
			 uintptr_t m_flEndFadeInTime = 0x1c4;
			 uintptr_t m_flStartFadeOutTime = 0x1c8;
			 uintptr_t m_flEndFadeOutTime = 0x1cc;
			 uintptr_t m_flStartAlpha = 0x1d0;
			 uintptr_t m_flEndAlpha = 0x1d4;
			 uintptr_t m_bForcePreserveParticleOrder = 0x1d8;
		}
	}
}
