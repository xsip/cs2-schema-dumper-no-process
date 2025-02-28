#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPlayerVisibility {
			 uintptr_t m_flVisibilityStrength = 0x4e0; // float32
			 uintptr_t m_flFogDistanceMultiplier = 0x4e4; // float32
			 uintptr_t m_flFogMaxDensityMultiplier = 0x4e8; // float32
			 uintptr_t m_flFadeTime = 0x4ec; // float32
			 uintptr_t m_bStartDisabled = 0x4f0; // bool
			 uintptr_t m_bIsEnabled = 0x4f1; // bool
		}
	}
}
