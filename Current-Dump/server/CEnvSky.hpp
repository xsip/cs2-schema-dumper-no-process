#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvSky {
			 uintptr_t m_hSkyMaterial = 0x790; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_hSkyMaterialLightingOnly = 0x798; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_bStartDisabled = 0x7a0; // bool
			 uintptr_t m_vTintColor = 0x7a1; // Color
			 uintptr_t m_vTintColorLightingOnly = 0x7a5; // Color
			 uintptr_t m_flBrightnessScale = 0x7ac; // float32
			 uintptr_t m_nFogType = 0x7b0; // int32
			 uintptr_t m_flFogMinStart = 0x7b4; // float32
			 uintptr_t m_flFogMinEnd = 0x7b8; // float32
			 uintptr_t m_flFogMaxStart = 0x7bc; // float32
			 uintptr_t m_flFogMaxEnd = 0x7c0; // float32
			 uintptr_t m_bEnabled = 0x7c4; // bool
		}
	}
}
