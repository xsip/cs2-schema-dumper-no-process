#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PointCamera {
			 uintptr_t m_FOV = 0x568; // float32
			 uintptr_t m_Resolution = 0x56c; // float32
			 uintptr_t m_bFogEnable = 0x570; // bool
			 uintptr_t m_FogColor = 0x571; // Color
			 uintptr_t m_flFogStart = 0x578; // float32
			 uintptr_t m_flFogEnd = 0x57c; // float32
			 uintptr_t m_flFogMaxDensity = 0x580; // float32
			 uintptr_t m_bActive = 0x584; // bool
			 uintptr_t m_bUseScreenAspectRatio = 0x585; // bool
			 uintptr_t m_flAspectRatio = 0x588; // float32
			 uintptr_t m_bNoSky = 0x58c; // bool
			 uintptr_t m_fBrightness = 0x590; // float32
			 uintptr_t m_flZFar = 0x594; // float32
			 uintptr_t m_flZNear = 0x598; // float32
			 uintptr_t m_bCanHLTVUse = 0x59c; // bool
			 uintptr_t m_bAlignWithParent = 0x59d; // bool
			 uintptr_t m_bDofEnabled = 0x59e; // bool
			 uintptr_t m_flDofNearBlurry = 0x5a0; // float32
			 uintptr_t m_flDofNearCrisp = 0x5a4; // float32
			 uintptr_t m_flDofFarCrisp = 0x5a8; // float32
			 uintptr_t m_flDofFarBlurry = 0x5ac; // float32
			 uintptr_t m_flDofTiltToGround = 0x5b0; // float32
			 uintptr_t m_TargetFOV = 0x5b4; // float32
			 uintptr_t m_DegreesPerSecond = 0x5b8; // float32
			 uintptr_t m_bIsOn = 0x5bc; // bool
			 uintptr_t m_pNext = 0x5c0; // C_PointCamera*
		}
	}
}
