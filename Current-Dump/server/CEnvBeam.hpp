#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvBeam {
			 uintptr_t m_active = 0x830; // int32
			 uintptr_t m_spriteTexture = 0x838; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_iszStartEntity = 0x840; // CUtlSymbolLarge
			 uintptr_t m_iszEndEntity = 0x848; // CUtlSymbolLarge
			 uintptr_t m_life = 0x850; // float32
			 uintptr_t m_boltWidth = 0x854; // float32
			 uintptr_t m_noiseAmplitude = 0x858; // float32
			 uintptr_t m_speed = 0x85c; // int32
			 uintptr_t m_restrike = 0x860; // float32
			 uintptr_t m_iszSpriteName = 0x868; // CUtlSymbolLarge
			 uintptr_t m_frameStart = 0x870; // int32
			 uintptr_t m_vEndPointWorld = 0x874; // Vector
			 uintptr_t m_vEndPointRelative = 0x880; // Vector
			 uintptr_t m_radius = 0x88c; // float32
			 uintptr_t m_TouchType = 0x890; // Touch_t
			 uintptr_t m_iFilterName = 0x898; // CUtlSymbolLarge
			 uintptr_t m_hFilter = 0x8a0; // CHandle< CBaseEntity >
			 uintptr_t m_iszDecal = 0x8a8; // CUtlSymbolLarge
			 uintptr_t m_OnTouchedByEntity = 0x8b0; // CEntityIOOutput
		}
	}
}
