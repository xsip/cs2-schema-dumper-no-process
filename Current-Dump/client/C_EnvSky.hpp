#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EnvSky {
			 uintptr_t m_hSkyMaterial = 0xd28;
			 uintptr_t m_hSkyMaterialLightingOnly = 0xd30;
			 uintptr_t m_bStartDisabled = 0xd38;
			 uintptr_t m_vTintColor = 0xd39;
			 uintptr_t m_vTintColorLightingOnly = 0xd3d;
			 uintptr_t m_flBrightnessScale = 0xd44;
			 uintptr_t m_nFogType = 0xd48;
			 uintptr_t m_flFogMinStart = 0xd4c;
			 uintptr_t m_flFogMinEnd = 0xd50;
			 uintptr_t m_flFogMaxStart = 0xd54;
			 uintptr_t m_flFogMaxEnd = 0xd58;
			 uintptr_t m_bEnabled = 0xd5c;
		}
	}
}
