#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CGlowOverlay {
			 uintptr_t m_vPos = 0x8; // Vector
			 uintptr_t m_bDirectional = 0x14; // bool
			 uintptr_t m_vDirection = 0x18; // Vector
			 uintptr_t m_bInSky = 0x24; // bool
			 uintptr_t m_skyObstructionScale = 0x28; // float32
			 uintptr_t m_Sprites = 0x30; // CGlowSprite[4]
			 uintptr_t m_nSprites = 0xb0; // int32
			 uintptr_t m_flProxyRadius = 0xb4; // float32
			 uintptr_t m_flHDRColorScale = 0xb8; // float32
			 uintptr_t m_flGlowObstructionScale = 0xbc; // float32
			 uintptr_t m_bCacheGlowObstruction = 0xc0; // bool
			 uintptr_t m_bCacheSkyObstruction = 0xc1; // bool
			 uintptr_t m_bActivated = 0xc2; // int16
			 uintptr_t m_ListIndex = 0xc4; // uint16
			 uintptr_t m_queryHandle = 0xc8; // int32
		}
	}
}
