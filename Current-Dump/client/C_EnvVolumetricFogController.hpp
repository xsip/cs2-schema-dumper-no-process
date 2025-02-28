#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EnvVolumetricFogController {
			 uintptr_t m_flScattering = 0x568; // float32
			 uintptr_t m_flAnisotropy = 0x56c; // float32
			 uintptr_t m_flFadeSpeed = 0x570; // float32
			 uintptr_t m_flDrawDistance = 0x574; // float32
			 uintptr_t m_flFadeInStart = 0x578; // float32
			 uintptr_t m_flFadeInEnd = 0x57c; // float32
			 uintptr_t m_flIndirectStrength = 0x580; // float32
			 uintptr_t m_nVolumeDepth = 0x584; // int32
			 uintptr_t m_fFirstVolumeSliceThickness = 0x588; // float32
			 uintptr_t m_nIndirectTextureDimX = 0x58c; // int32
			 uintptr_t m_nIndirectTextureDimY = 0x590; // int32
			 uintptr_t m_nIndirectTextureDimZ = 0x594; // int32
			 uintptr_t m_vBoxMins = 0x598; // Vector
			 uintptr_t m_vBoxMaxs = 0x5a4; // Vector
			 uintptr_t m_bActive = 0x5b0; // bool
			 uintptr_t m_flStartAnisoTime = 0x5b4; // GameTime_t
			 uintptr_t m_flStartScatterTime = 0x5b8; // GameTime_t
			 uintptr_t m_flStartDrawDistanceTime = 0x5bc; // GameTime_t
			 uintptr_t m_flStartAnisotropy = 0x5c0; // float32
			 uintptr_t m_flStartScattering = 0x5c4; // float32
			 uintptr_t m_flStartDrawDistance = 0x5c8; // float32
			 uintptr_t m_flDefaultAnisotropy = 0x5cc; // float32
			 uintptr_t m_flDefaultScattering = 0x5d0; // float32
			 uintptr_t m_flDefaultDrawDistance = 0x5d4; // float32
			 uintptr_t m_bStartDisabled = 0x5d8; // bool
			 uintptr_t m_bEnableIndirect = 0x5d9; // bool
			 uintptr_t m_bIndirectUseLPVs = 0x5da; // bool
			 uintptr_t m_bIsMaster = 0x5db; // bool
			 uintptr_t m_hFogIndirectTexture = 0x5e0; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_nForceRefreshCount = 0x5e8; // int32
			 uintptr_t m_fNoiseSpeed = 0x5ec; // float32
			 uintptr_t m_fNoiseStrength = 0x5f0; // float32
			 uintptr_t m_vNoiseScale = 0x5f4; // Vector
			 uintptr_t m_bFirstTime = 0x600; // bool
		}
	}
}
