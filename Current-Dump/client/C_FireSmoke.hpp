#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_FireSmoke {
			 uintptr_t m_nFlameModelIndex = 0x578; // int32
			 uintptr_t m_nFlameFromAboveModelIndex = 0x57c; // int32
			 uintptr_t m_flScaleRegister = 0x580; // float32
			 uintptr_t m_flScaleStart = 0x584; // float32
			 uintptr_t m_flScaleEnd = 0x588; // float32
			 uintptr_t m_flScaleTimeStart = 0x58c; // GameTime_t
			 uintptr_t m_flScaleTimeEnd = 0x590; // GameTime_t
			 uintptr_t m_flChildFlameSpread = 0x594; // float32
			 uintptr_t m_flClipPerc = 0x5a8; // float32
			 uintptr_t m_bClipTested = 0x5ac; // bool
			 uintptr_t m_bFadingOut = 0x5ad; // bool
			 uintptr_t m_tParticleSpawn = 0x5b0; // TimedEvent
			 uintptr_t m_pFireOverlay = 0x5b8; // CFireOverlay*
		}
	}
}
