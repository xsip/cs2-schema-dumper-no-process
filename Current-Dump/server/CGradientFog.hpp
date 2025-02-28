#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGradientFog {
			 uintptr_t m_hGradientFogTexture = 0x4e0; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_flFogStartDistance = 0x4e8; // float32
			 uintptr_t m_flFogEndDistance = 0x4ec; // float32
			 uintptr_t m_bHeightFogEnabled = 0x4f0; // bool
			 uintptr_t m_flFogStartHeight = 0x4f4; // float32
			 uintptr_t m_flFogEndHeight = 0x4f8; // float32
			 uintptr_t m_flFarZ = 0x4fc; // float32
			 uintptr_t m_flFogMaxOpacity = 0x500; // float32
			 uintptr_t m_flFogFalloffExponent = 0x504; // float32
			 uintptr_t m_flFogVerticalExponent = 0x508; // float32
			 uintptr_t m_fogColor = 0x50c; // Color
			 uintptr_t m_flFogStrength = 0x510; // float32
			 uintptr_t m_flFadeTime = 0x514; // float32
			 uintptr_t m_bStartDisabled = 0x518; // bool
			 uintptr_t m_bIsEnabled = 0x519; // bool
			 uintptr_t m_bGradientFogNeedsTextures = 0x51a; // bool
		}
	}
}
