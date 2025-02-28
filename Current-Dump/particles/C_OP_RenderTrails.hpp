#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderTrails {
			 uintptr_t m_bEnableFadingAndClamping = 0x2d80;
			 uintptr_t m_flStartFadeDot = 0x2d84;
			 uintptr_t m_flEndFadeDot = 0x2d88;
			 uintptr_t m_nPrevPntSource = 0x2d8c;
			 uintptr_t m_flMaxLength = 0x2d90;
			 uintptr_t m_flMinLength = 0x2d94;
			 uintptr_t m_bIgnoreDT = 0x2d98;
			 uintptr_t m_flConstrainRadiusToLengthRatio = 0x2d9c;
			 uintptr_t m_flLengthScale = 0x2da0;
			 uintptr_t m_flLengthFadeInTime = 0x2da4;
			 uintptr_t m_flRadiusHeadTaper = 0x2da8;
			 uintptr_t m_vecHeadColorScale = 0x2f08;
			 uintptr_t m_flHeadAlphaScale = 0x3580;
			 uintptr_t m_flRadiusTaper = 0x36e0;
			 uintptr_t m_vecTailColorScale = 0x3840;
			 uintptr_t m_flTailAlphaScale = 0x3eb8;
			 uintptr_t m_nHorizCropField = 0x4018;
			 uintptr_t m_nVertCropField = 0x401c;
			 uintptr_t m_flForwardShift = 0x4020;
			 uintptr_t m_bFlipUVBasedOnPitchYaw = 0x4024;
		}
	}
}
