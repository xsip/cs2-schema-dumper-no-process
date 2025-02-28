#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CGlobalLightBase {
			 uintptr_t m_bSpotLight = 0x10;
			 uintptr_t m_SpotLightOrigin = 0x14;
			 uintptr_t m_SpotLightAngles = 0x20;
			 uintptr_t m_ShadowDirection = 0x2c;
			 uintptr_t m_AmbientDirection = 0x38;
			 uintptr_t m_SpecularDirection = 0x44;
			 uintptr_t m_InspectorSpecularDirection = 0x50;
			 uintptr_t m_flSpecularPower = 0x5c;
			 uintptr_t m_flSpecularIndependence = 0x60;
			 uintptr_t m_SpecularColor = 0x64;
			 uintptr_t m_bStartDisabled = 0x68;
			 uintptr_t m_bEnabled = 0x69;
			 uintptr_t m_LightColor = 0x6a;
			 uintptr_t m_AmbientColor1 = 0x6e;
			 uintptr_t m_AmbientColor2 = 0x72;
			 uintptr_t m_AmbientColor3 = 0x76;
			 uintptr_t m_flSunDistance = 0x7c;
			 uintptr_t m_flFOV = 0x80;
			 uintptr_t m_flNearZ = 0x84;
			 uintptr_t m_flFarZ = 0x88;
			 uintptr_t m_bEnableShadows = 0x8c;
			 uintptr_t m_bOldEnableShadows = 0x8d;
			 uintptr_t m_bBackgroundClearNotRequired = 0x8e;
			 uintptr_t m_flCloudScale = 0x90;
			 uintptr_t m_flCloud1Speed = 0x94;
			 uintptr_t m_flCloud1Direction = 0x98;
			 uintptr_t m_flCloud2Speed = 0x9c;
			 uintptr_t m_flCloud2Direction = 0xa0;
			 uintptr_t m_flAmbientScale1 = 0xb0;
			 uintptr_t m_flAmbientScale2 = 0xb4;
			 uintptr_t m_flGroundScale = 0xb8;
			 uintptr_t m_flLightScale = 0xbc;
			 uintptr_t m_flFoWDarkness = 0xc0;
			 uintptr_t m_bEnableSeparateSkyboxFog = 0xc4;
			 uintptr_t m_vFowColor = 0xc8;
			 uintptr_t m_ViewOrigin = 0xd4;
			 uintptr_t m_ViewAngles = 0xe0;
			 uintptr_t m_flViewFoV = 0xec;
			 uintptr_t m_WorldPoints = 0xf0;
			 uintptr_t m_vFogOffsetLayer0 = 0x4a8;
			 uintptr_t m_vFogOffsetLayer1 = 0x4b0;
			 uintptr_t m_hEnvWind = 0x4b8;
			 uintptr_t m_hEnvSky = 0x4bc;
		}
	}
}
