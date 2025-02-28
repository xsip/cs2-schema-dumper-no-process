#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EnvCubemapFog {
			 uintptr_t m_flEndDistance = 0x568; // float32
			 uintptr_t m_flStartDistance = 0x56c; // float32
			 uintptr_t m_flFogFalloffExponent = 0x570; // float32
			 uintptr_t m_bHeightFogEnabled = 0x574; // bool
			 uintptr_t m_flFogHeightWidth = 0x578; // float32
			 uintptr_t m_flFogHeightEnd = 0x57c; // float32
			 uintptr_t m_flFogHeightStart = 0x580; // float32
			 uintptr_t m_flFogHeightExponent = 0x584; // float32
			 uintptr_t m_flLODBias = 0x588; // float32
			 uintptr_t m_bActive = 0x58c; // bool
			 uintptr_t m_bStartDisabled = 0x58d; // bool
			 uintptr_t m_flFogMaxOpacity = 0x590; // float32
			 uintptr_t m_nCubemapSourceType = 0x594; // int32
			 uintptr_t m_hSkyMaterial = 0x598; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_iszSkyEntity = 0x5a0; // CUtlSymbolLarge
			 uintptr_t m_hFogCubemapTexture = 0x5a8; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_bHasHeightFogEnd = 0x5b0; // bool
			 uintptr_t m_bFirstTime = 0x5b1; // bool
		}
	}
}
