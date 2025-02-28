#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvVolumetricFogController {
			 uintptr_t m_flScattering = 0x4e0; // float32
			 uintptr_t m_flAnisotropy = 0x4e4; // float32
			 uintptr_t m_flFadeSpeed = 0x4e8; // float32
			 uintptr_t m_flDrawDistance = 0x4ec; // float32
			 uintptr_t m_flFadeInStart = 0x4f0; // float32
			 uintptr_t m_flFadeInEnd = 0x4f4; // float32
			 uintptr_t m_flIndirectStrength = 0x4f8; // float32
			 uintptr_t m_nVolumeDepth = 0x4fc; // int32
			 uintptr_t m_fFirstVolumeSliceThickness = 0x500; // float32
			 uintptr_t m_nIndirectTextureDimX = 0x504; // int32
			 uintptr_t m_nIndirectTextureDimY = 0x508; // int32
			 uintptr_t m_nIndirectTextureDimZ = 0x50c; // int32
			 uintptr_t m_vBoxMins = 0x510; // Vector
			 uintptr_t m_vBoxMaxs = 0x51c; // Vector
			 uintptr_t m_bActive = 0x528; // bool
			 uintptr_t m_flStartAnisoTime = 0x52c; // GameTime_t
			 uintptr_t m_flStartScatterTime = 0x530; // GameTime_t
			 uintptr_t m_flStartDrawDistanceTime = 0x534; // GameTime_t
			 uintptr_t m_flStartAnisotropy = 0x538; // float32
			 uintptr_t m_flStartScattering = 0x53c; // float32
			 uintptr_t m_flStartDrawDistance = 0x540; // float32
			 uintptr_t m_flDefaultAnisotropy = 0x544; // float32
			 uintptr_t m_flDefaultScattering = 0x548; // float32
			 uintptr_t m_flDefaultDrawDistance = 0x54c; // float32
			 uintptr_t m_bStartDisabled = 0x550; // bool
			 uintptr_t m_bEnableIndirect = 0x551; // bool
			 uintptr_t m_bIndirectUseLPVs = 0x552; // bool
			 uintptr_t m_bIsMaster = 0x553; // bool
			 uintptr_t m_hFogIndirectTexture = 0x558; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_nForceRefreshCount = 0x560; // int32
			 uintptr_t m_fNoiseSpeed = 0x564; // float32
			 uintptr_t m_fNoiseStrength = 0x568; // float32
			 uintptr_t m_vNoiseScale = 0x56c; // Vector
			 uintptr_t m_bFirstTime = 0x578; // bool
		}
	}
}
