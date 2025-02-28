#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_GradientFog {
			 uintptr_t m_hGradientFogTexture = 0x568; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_flFogStartDistance = 0x570; // float32
			 uintptr_t m_flFogEndDistance = 0x574; // float32
			 uintptr_t m_bHeightFogEnabled = 0x578; // bool
			 uintptr_t m_flFogStartHeight = 0x57c; // float32
			 uintptr_t m_flFogEndHeight = 0x580; // float32
			 uintptr_t m_flFarZ = 0x584; // float32
			 uintptr_t m_flFogMaxOpacity = 0x588; // float32
			 uintptr_t m_flFogFalloffExponent = 0x58c; // float32
			 uintptr_t m_flFogVerticalExponent = 0x590; // float32
			 uintptr_t m_fogColor = 0x594; // Color
			 uintptr_t m_flFogStrength = 0x598; // float32
			 uintptr_t m_flFadeTime = 0x59c; // float32
			 uintptr_t m_bStartDisabled = 0x5a0; // bool
			 uintptr_t m_bIsEnabled = 0x5a1; // bool
			 uintptr_t m_bGradientFogNeedsTextures = 0x5a2; // bool
		}
	}
}
