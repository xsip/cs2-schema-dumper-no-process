#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CClientAlphaProperty {
			 uintptr_t m_nRenderFX = 0x10; // uint8
			 uintptr_t m_nRenderMode = 0x11; // uint8
			 uintptr_t m_bAlphaOverride = 0x0; // bitfield:1
			 uintptr_t m_bShadowAlphaOverride = 0x0; // bitfield:1
			 uintptr_t m_nReserved = 0x0; // bitfield:6
			 uintptr_t m_nAlpha = 0x13; // uint8
			 uintptr_t m_nDesyncOffset = 0x14; // uint16
			 uintptr_t m_nReserved2 = 0x16; // uint16
			 uintptr_t m_nDistFadeStart = 0x18; // uint16
			 uintptr_t m_nDistFadeEnd = 0x1a; // uint16
			 uintptr_t m_flFadeScale = 0x1c; // float32
			 uintptr_t m_flRenderFxStartTime = 0x20; // GameTime_t
			 uintptr_t m_flRenderFxDuration = 0x24; // float32
		}
	}
}
