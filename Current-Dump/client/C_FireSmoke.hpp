#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_FireSmoke {
			 uintptr_t m_nFlameModelIndex = 0x578;
			 uintptr_t m_nFlameFromAboveModelIndex = 0x57c;
			 uintptr_t m_flScaleRegister = 0x580;
			 uintptr_t m_flScaleStart = 0x584;
			 uintptr_t m_flScaleEnd = 0x588;
			 uintptr_t m_flScaleTimeStart = 0x58c;
			 uintptr_t m_flScaleTimeEnd = 0x590;
			 uintptr_t m_flChildFlameSpread = 0x594;
			 uintptr_t m_flClipPerc = 0x5a8;
			 uintptr_t m_bClipTested = 0x5ac;
			 uintptr_t m_bFadingOut = 0x5ad;
			 uintptr_t m_tParticleSpawn = 0x5b0;
			 uintptr_t m_pFireOverlay = 0x5b8;
		}
	}
}
