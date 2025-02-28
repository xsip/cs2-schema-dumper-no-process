#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGradientFog {
			 uintptr_t m_hGradientFogTexture = 0x4e0;
			 uintptr_t m_flFogStartDistance = 0x4e8;
			 uintptr_t m_flFogEndDistance = 0x4ec;
			 uintptr_t m_bHeightFogEnabled = 0x4f0;
			 uintptr_t m_flFogStartHeight = 0x4f4;
			 uintptr_t m_flFogEndHeight = 0x4f8;
			 uintptr_t m_flFarZ = 0x4fc;
			 uintptr_t m_flFogMaxOpacity = 0x500;
			 uintptr_t m_flFogFalloffExponent = 0x504;
			 uintptr_t m_flFogVerticalExponent = 0x508;
			 uintptr_t m_fogColor = 0x50c;
			 uintptr_t m_flFogStrength = 0x510;
			 uintptr_t m_flFadeTime = 0x514;
			 uintptr_t m_bStartDisabled = 0x518;
			 uintptr_t m_bIsEnabled = 0x519;
			 uintptr_t m_bGradientFogNeedsTextures = 0x51a;
		}
	}
}
