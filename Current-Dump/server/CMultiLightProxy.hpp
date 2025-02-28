#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMultiLightProxy {
			 uintptr_t m_iszLightNameFilter = 0x4e0; // CUtlSymbolLarge
			 uintptr_t m_iszLightClassFilter = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_flLightRadiusFilter = 0x4f0; // float32
			 uintptr_t m_flBrightnessDelta = 0x4f4; // float32
			 uintptr_t m_bPerformScreenFade = 0x4f8; // bool
			 uintptr_t m_flTargetBrightnessMultiplier = 0x4fc; // float32
			 uintptr_t m_flCurrentBrightnessMultiplier = 0x500; // float32
			 uintptr_t m_vecLights = 0x508; // CUtlVector< CHandle< CLightEntity > >
		}
	}
}
