#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMultiLightProxy {
			 uintptr_t m_iszLightNameFilter = 0x4e0;
			 uintptr_t m_iszLightClassFilter = 0x4e8;
			 uintptr_t m_flLightRadiusFilter = 0x4f0;
			 uintptr_t m_flBrightnessDelta = 0x4f4;
			 uintptr_t m_bPerformScreenFade = 0x4f8;
			 uintptr_t m_flTargetBrightnessMultiplier = 0x4fc;
			 uintptr_t m_flCurrentBrightnessMultiplier = 0x500;
			 uintptr_t m_vecLights = 0x508;
		}
	}
}
