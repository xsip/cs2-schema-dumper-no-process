#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvVolumetricFogController {
			 uintptr_t m_flScattering = 0x4e0;
			 uintptr_t m_flAnisotropy = 0x4e4;
			 uintptr_t m_flFadeSpeed = 0x4e8;
			 uintptr_t m_flDrawDistance = 0x4ec;
			 uintptr_t m_flFadeInStart = 0x4f0;
			 uintptr_t m_flFadeInEnd = 0x4f4;
			 uintptr_t m_flIndirectStrength = 0x4f8;
			 uintptr_t m_nVolumeDepth = 0x4fc;
			 uintptr_t m_fFirstVolumeSliceThickness = 0x500;
			 uintptr_t m_nIndirectTextureDimX = 0x504;
			 uintptr_t m_nIndirectTextureDimY = 0x508;
			 uintptr_t m_nIndirectTextureDimZ = 0x50c;
			 uintptr_t m_vBoxMins = 0x510;
			 uintptr_t m_vBoxMaxs = 0x51c;
			 uintptr_t m_bActive = 0x528;
			 uintptr_t m_flStartAnisoTime = 0x52c;
			 uintptr_t m_flStartScatterTime = 0x530;
			 uintptr_t m_flStartDrawDistanceTime = 0x534;
			 uintptr_t m_flStartAnisotropy = 0x538;
			 uintptr_t m_flStartScattering = 0x53c;
			 uintptr_t m_flStartDrawDistance = 0x540;
			 uintptr_t m_flDefaultAnisotropy = 0x544;
			 uintptr_t m_flDefaultScattering = 0x548;
			 uintptr_t m_flDefaultDrawDistance = 0x54c;
			 uintptr_t m_bStartDisabled = 0x550;
			 uintptr_t m_bEnableIndirect = 0x551;
			 uintptr_t m_bIndirectUseLPVs = 0x552;
			 uintptr_t m_bIsMaster = 0x553;
			 uintptr_t m_hFogIndirectTexture = 0x558;
			 uintptr_t m_nForceRefreshCount = 0x560;
			 uintptr_t m_fNoiseSpeed = 0x564;
			 uintptr_t m_fNoiseStrength = 0x568;
			 uintptr_t m_vNoiseScale = 0x56c;
			 uintptr_t m_bFirstTime = 0x578;
		}
	}
}
