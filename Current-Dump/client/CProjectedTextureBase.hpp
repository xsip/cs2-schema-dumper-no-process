#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CProjectedTextureBase {
			 uintptr_t m_hTargetEntity = 0xc; // CHandle< C_BaseEntity >
			 uintptr_t m_bState = 0x10; // bool
			 uintptr_t m_bAlwaysUpdate = 0x11; // bool
			 uintptr_t m_flLightFOV = 0x14; // float32
			 uintptr_t m_bEnableShadows = 0x18; // bool
			 uintptr_t m_bSimpleProjection = 0x19; // bool
			 uintptr_t m_bLightOnlyTarget = 0x1a; // bool
			 uintptr_t m_bLightWorld = 0x1b; // bool
			 uintptr_t m_bCameraSpace = 0x1c; // bool
			 uintptr_t m_flBrightnessScale = 0x20; // float32
			 uintptr_t m_LightColor = 0x24; // Color
			 uintptr_t m_flIntensity = 0x28; // float32
			 uintptr_t m_flLinearAttenuation = 0x2c; // float32
			 uintptr_t m_flQuadraticAttenuation = 0x30; // float32
			 uintptr_t m_bVolumetric = 0x34; // bool
			 uintptr_t m_flVolumetricIntensity = 0x38; // float32
			 uintptr_t m_flNoiseStrength = 0x3c; // float32
			 uintptr_t m_flFlashlightTime = 0x40; // float32
			 uintptr_t m_nNumPlanes = 0x44; // uint32
			 uintptr_t m_flPlaneOffset = 0x48; // float32
			 uintptr_t m_flColorTransitionTime = 0x4c; // float32
			 uintptr_t m_flAmbient = 0x50; // float32
			 uintptr_t m_SpotlightTextureName = 0x54; // char[512]
			 uintptr_t m_nSpotlightTextureFrame = 0x254; // int32
			 uintptr_t m_nShadowQuality = 0x258; // uint32
			 uintptr_t m_flNearZ = 0x25c; // float32
			 uintptr_t m_flFarZ = 0x260; // float32
			 uintptr_t m_flProjectionSize = 0x264; // float32
			 uintptr_t m_flRotation = 0x268; // float32
			 uintptr_t m_bFlipHorizontal = 0x26c; // bool
		}
	}
}
