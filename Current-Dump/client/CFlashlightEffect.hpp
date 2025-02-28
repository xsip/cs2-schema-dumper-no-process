#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CFlashlightEffect {
			 uintptr_t m_bIsOn = 0x10;
			 uintptr_t m_bMuzzleFlashEnabled = 0x20;
			 uintptr_t m_flMuzzleFlashBrightness = 0x24;
			 uintptr_t m_quatMuzzleFlashOrientation = 0x30;
			 uintptr_t m_vecMuzzleFlashOrigin = 0x40;
			 uintptr_t m_flFov = 0x4c;
			 uintptr_t m_flFarZ = 0x50;
			 uintptr_t m_flLinearAtten = 0x54;
			 uintptr_t m_bCastsShadows = 0x58;
			 uintptr_t m_flCurrentPullBackDist = 0x5c;
			 uintptr_t m_FlashlightTexture = 0x60;
			 uintptr_t m_MuzzleFlashTexture = 0x68;
			 uintptr_t m_textureName = 0x70;
		}
	}
}
