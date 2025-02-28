#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvVolumetricFogVolume {
			 uintptr_t m_bActive = 0x4e0;
			 uintptr_t m_vBoxMins = 0x4e4;
			 uintptr_t m_vBoxMaxs = 0x4f0;
			 uintptr_t m_bStartDisabled = 0x4fc;
			 uintptr_t m_flStrength = 0x500;
			 uintptr_t m_nFalloffShape = 0x504;
			 uintptr_t m_flFalloffExponent = 0x508;
			 uintptr_t m_flHeightFogDepth = 0x50c;
			 uintptr_t m_fHeightFogEdgeWidth = 0x510;
			 uintptr_t m_fIndirectLightStrength = 0x514;
			 uintptr_t m_fSunLightStrength = 0x518;
			 uintptr_t m_fNoiseStrength = 0x51c;
			 uintptr_t m_bOverrideIndirectLightStrength = 0x520;
			 uintptr_t m_bOverrideSunLightStrength = 0x521;
			 uintptr_t m_bOverrideNoiseStrength = 0x522;
			 uintptr_t m_bAllowLPVIndirect = 0x523;
		}
	}
}
