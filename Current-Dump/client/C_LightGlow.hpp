#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_LightGlow {
			 uintptr_t m_nHorizontalSize = 0xd28; // uint32
			 uintptr_t m_nVerticalSize = 0xd2c; // uint32
			 uintptr_t m_nMinDist = 0xd30; // uint32
			 uintptr_t m_nMaxDist = 0xd34; // uint32
			 uintptr_t m_nOuterMaxDist = 0xd38; // uint32
			 uintptr_t m_flGlowProxySize = 0xd3c; // float32
			 uintptr_t m_flHDRColorScale = 0xd40; // float32
			 uintptr_t m_GlowOverlay = 0xd48; // C_LightGlowOverlay
		}
	}
}
