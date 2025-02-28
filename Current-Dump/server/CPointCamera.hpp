#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointCamera {
			 uintptr_t m_FOV = 0x4e0;
			 uintptr_t m_Resolution = 0x4e4;
			 uintptr_t m_bFogEnable = 0x4e8;
			 uintptr_t m_FogColor = 0x4e9;
			 uintptr_t m_flFogStart = 0x4f0;
			 uintptr_t m_flFogEnd = 0x4f4;
			 uintptr_t m_flFogMaxDensity = 0x4f8;
			 uintptr_t m_bActive = 0x4fc;
			 uintptr_t m_bUseScreenAspectRatio = 0x4fd;
			 uintptr_t m_flAspectRatio = 0x500;
			 uintptr_t m_bNoSky = 0x504;
			 uintptr_t m_fBrightness = 0x508;
			 uintptr_t m_flZFar = 0x50c;
			 uintptr_t m_flZNear = 0x510;
			 uintptr_t m_bCanHLTVUse = 0x514;
			 uintptr_t m_bAlignWithParent = 0x515;
			 uintptr_t m_bDofEnabled = 0x516;
			 uintptr_t m_flDofNearBlurry = 0x518;
			 uintptr_t m_flDofNearCrisp = 0x51c;
			 uintptr_t m_flDofFarCrisp = 0x520;
			 uintptr_t m_flDofFarBlurry = 0x524;
			 uintptr_t m_flDofTiltToGround = 0x528;
			 uintptr_t m_TargetFOV = 0x52c;
			 uintptr_t m_DegreesPerSecond = 0x530;
			 uintptr_t m_bIsOn = 0x534;
			 uintptr_t m_pNext = 0x538;
		}
	}
}
