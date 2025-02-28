#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CGlobalLightBase {
			 uintptr_t m_bSpotLight = 0x10; // bool
			 uintptr_t m_SpotLightOrigin = 0x14; // Vector
			 uintptr_t m_SpotLightAngles = 0x20; // QAngle
			 uintptr_t m_ShadowDirection = 0x2c; // Vector
			 uintptr_t m_AmbientDirection = 0x38; // Vector
			 uintptr_t m_SpecularDirection = 0x44; // Vector
			 uintptr_t m_InspectorSpecularDirection = 0x50; // Vector
			 uintptr_t m_flSpecularPower = 0x5c; // float32
			 uintptr_t m_flSpecularIndependence = 0x60; // float32
			 uintptr_t m_SpecularColor = 0x64; // Color
			 uintptr_t m_bStartDisabled = 0x68; // bool
			 uintptr_t m_bEnabled = 0x69; // bool
			 uintptr_t m_LightColor = 0x6a; // Color
			 uintptr_t m_AmbientColor1 = 0x6e; // Color
			 uintptr_t m_AmbientColor2 = 0x72; // Color
			 uintptr_t m_AmbientColor3 = 0x76; // Color
			 uintptr_t m_flSunDistance = 0x7c; // float32
			 uintptr_t m_flFOV = 0x80; // float32
			 uintptr_t m_flNearZ = 0x84; // float32
			 uintptr_t m_flFarZ = 0x88; // float32
			 uintptr_t m_bEnableShadows = 0x8c; // bool
			 uintptr_t m_bOldEnableShadows = 0x8d; // bool
			 uintptr_t m_bBackgroundClearNotRequired = 0x8e; // bool
			 uintptr_t m_flCloudScale = 0x90; // float32
			 uintptr_t m_flCloud1Speed = 0x94; // float32
			 uintptr_t m_flCloud1Direction = 0x98; // float32
			 uintptr_t m_flCloud2Speed = 0x9c; // float32
			 uintptr_t m_flCloud2Direction = 0xa0; // float32
			 uintptr_t m_flAmbientScale1 = 0xb0; // float32
			 uintptr_t m_flAmbientScale2 = 0xb4; // float32
			 uintptr_t m_flGroundScale = 0xb8; // float32
			 uintptr_t m_flLightScale = 0xbc; // float32
			 uintptr_t m_flFoWDarkness = 0xc0; // float32
			 uintptr_t m_bEnableSeparateSkyboxFog = 0xc4; // bool
			 uintptr_t m_vFowColor = 0xc8; // Vector
			 uintptr_t m_ViewOrigin = 0xd4; // Vector
			 uintptr_t m_ViewAngles = 0xe0; // QAngle
			 uintptr_t m_flViewFoV = 0xec; // float32
			 uintptr_t m_WorldPoints = 0xf0; // Vector[8]
			 uintptr_t m_vFogOffsetLayer0 = 0x4a8; // Vector2D
			 uintptr_t m_vFogOffsetLayer1 = 0x4b0; // Vector2D
			 uintptr_t m_hEnvWind = 0x4b8; // CHandle< C_BaseEntity >
			 uintptr_t m_hEnvSky = 0x4bc; // CHandle< C_BaseEntity >
		}
	}
}
