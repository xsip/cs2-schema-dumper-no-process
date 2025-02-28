#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EnvVolumetricFogVolume {
			 uintptr_t m_bActive = 0x568; // bool
			 uintptr_t m_vBoxMins = 0x56c; // Vector
			 uintptr_t m_vBoxMaxs = 0x578; // Vector
			 uintptr_t m_bStartDisabled = 0x584; // bool
			 uintptr_t m_flStrength = 0x588; // float32
			 uintptr_t m_nFalloffShape = 0x58c; // int32
			 uintptr_t m_flFalloffExponent = 0x590; // float32
			 uintptr_t m_flHeightFogDepth = 0x594; // float32
			 uintptr_t m_fHeightFogEdgeWidth = 0x598; // float32
			 uintptr_t m_fIndirectLightStrength = 0x59c; // float32
			 uintptr_t m_fSunLightStrength = 0x5a0; // float32
			 uintptr_t m_fNoiseStrength = 0x5a4; // float32
			 uintptr_t m_bOverrideIndirectLightStrength = 0x5a8; // bool
			 uintptr_t m_bOverrideSunLightStrength = 0x5a9; // bool
			 uintptr_t m_bOverrideNoiseStrength = 0x5aa; // bool
			 uintptr_t m_bAllowLPVIndirect = 0x5ab; // bool
		}
	}
}
