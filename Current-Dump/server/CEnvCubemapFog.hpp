#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvCubemapFog {
			 uintptr_t m_flEndDistance = 0x4e0; // float32
			 uintptr_t m_flStartDistance = 0x4e4; // float32
			 uintptr_t m_flFogFalloffExponent = 0x4e8; // float32
			 uintptr_t m_bHeightFogEnabled = 0x4ec; // bool
			 uintptr_t m_flFogHeightWidth = 0x4f0; // float32
			 uintptr_t m_flFogHeightEnd = 0x4f4; // float32
			 uintptr_t m_flFogHeightStart = 0x4f8; // float32
			 uintptr_t m_flFogHeightExponent = 0x4fc; // float32
			 uintptr_t m_flLODBias = 0x500; // float32
			 uintptr_t m_bActive = 0x504; // bool
			 uintptr_t m_bStartDisabled = 0x505; // bool
			 uintptr_t m_flFogMaxOpacity = 0x508; // float32
			 uintptr_t m_nCubemapSourceType = 0x50c; // int32
			 uintptr_t m_hSkyMaterial = 0x510; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_iszSkyEntity = 0x518; // CUtlSymbolLarge
			 uintptr_t m_hFogCubemapTexture = 0x520; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_bHasHeightFogEnd = 0x528; // bool
			 uintptr_t m_bFirstTime = 0x529; // bool
		}
	}
}
