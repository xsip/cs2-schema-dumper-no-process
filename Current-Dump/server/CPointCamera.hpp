#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointCamera {
			 uintptr_t m_FOV = 0x4e0; // float32
			 uintptr_t m_Resolution = 0x4e4; // float32
			 uintptr_t m_bFogEnable = 0x4e8; // bool
			 uintptr_t m_FogColor = 0x4e9; // Color
			 uintptr_t m_flFogStart = 0x4f0; // float32
			 uintptr_t m_flFogEnd = 0x4f4; // float32
			 uintptr_t m_flFogMaxDensity = 0x4f8; // float32
			 uintptr_t m_bActive = 0x4fc; // bool
			 uintptr_t m_bUseScreenAspectRatio = 0x4fd; // bool
			 uintptr_t m_flAspectRatio = 0x500; // float32
			 uintptr_t m_bNoSky = 0x504; // bool
			 uintptr_t m_fBrightness = 0x508; // float32
			 uintptr_t m_flZFar = 0x50c; // float32
			 uintptr_t m_flZNear = 0x510; // float32
			 uintptr_t m_bCanHLTVUse = 0x514; // bool
			 uintptr_t m_bAlignWithParent = 0x515; // bool
			 uintptr_t m_bDofEnabled = 0x516; // bool
			 uintptr_t m_flDofNearBlurry = 0x518; // float32
			 uintptr_t m_flDofNearCrisp = 0x51c; // float32
			 uintptr_t m_flDofFarCrisp = 0x520; // float32
			 uintptr_t m_flDofFarBlurry = 0x524; // float32
			 uintptr_t m_flDofTiltToGround = 0x528; // float32
			 uintptr_t m_TargetFOV = 0x52c; // float32
			 uintptr_t m_DegreesPerSecond = 0x530; // float32
			 uintptr_t m_bIsOn = 0x534; // bool
			 uintptr_t m_pNext = 0x538; // CPointCamera*
		}
	}
}
