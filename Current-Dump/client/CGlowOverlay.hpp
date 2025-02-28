#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CGlowOverlay {
			 uintptr_t m_vPos = 0x8;
			 uintptr_t m_bDirectional = 0x14;
			 uintptr_t m_vDirection = 0x18;
			 uintptr_t m_bInSky = 0x24;
			 uintptr_t m_skyObstructionScale = 0x28;
			 uintptr_t m_Sprites = 0x30;
			 uintptr_t m_nSprites = 0xb0;
			 uintptr_t m_flProxyRadius = 0xb4;
			 uintptr_t m_flHDRColorScale = 0xb8;
			 uintptr_t m_flGlowObstructionScale = 0xbc;
			 uintptr_t m_bCacheGlowObstruction = 0xc0;
			 uintptr_t m_bCacheSkyObstruction = 0xc1;
			 uintptr_t m_bActivated = 0xc2;
			 uintptr_t m_ListIndex = 0xc4;
			 uintptr_t m_queryHandle = 0xc8;
		}
	}
}
