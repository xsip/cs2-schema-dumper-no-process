#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PlayerVisibility {
			 uintptr_t m_flVisibilityStrength = 0x568; // float32
			 uintptr_t m_flFogDistanceMultiplier = 0x56c; // float32
			 uintptr_t m_flFogMaxDensityMultiplier = 0x570; // float32
			 uintptr_t m_flFadeTime = 0x574; // float32
			 uintptr_t m_bStartDisabled = 0x578; // bool
			 uintptr_t m_bIsEnabled = 0x579; // bool
		}
	}
}
