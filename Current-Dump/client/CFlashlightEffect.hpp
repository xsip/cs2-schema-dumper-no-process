#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CFlashlightEffect {
			 uintptr_t m_bIsOn = 0x10; // bool
			 uintptr_t m_bMuzzleFlashEnabled = 0x20; // bool
			 uintptr_t m_flMuzzleFlashBrightness = 0x24; // float32
			 uintptr_t m_quatMuzzleFlashOrientation = 0x30; // Quaternion
			 uintptr_t m_vecMuzzleFlashOrigin = 0x40; // Vector
			 uintptr_t m_flFov = 0x4c; // float32
			 uintptr_t m_flFarZ = 0x50; // float32
			 uintptr_t m_flLinearAtten = 0x54; // float32
			 uintptr_t m_bCastsShadows = 0x58; // bool
			 uintptr_t m_flCurrentPullBackDist = 0x5c; // float32
			 uintptr_t m_FlashlightTexture = 0x60; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_MuzzleFlashTexture = 0x68; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_textureName = 0x70; // char[64]
		}
	}
}
