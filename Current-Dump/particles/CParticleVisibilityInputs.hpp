#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CParticleVisibilityInputs {
			 uintptr_t m_flCameraBias = 0x0; // float32
			 uintptr_t m_nCPin = 0x4; // int32
			 uintptr_t m_flProxyRadius = 0x8; // float32
			 uintptr_t m_flInputMin = 0xc; // float32
			 uintptr_t m_flInputMax = 0x10; // float32
			 uintptr_t m_flInputPixelVisFade = 0x14; // float32
			 uintptr_t m_flNoPixelVisibilityFallback = 0x18; // float32
			 uintptr_t m_flDistanceInputMin = 0x1c; // float32
			 uintptr_t m_flDistanceInputMax = 0x20; // float32
			 uintptr_t m_flDotInputMin = 0x24; // float32
			 uintptr_t m_flDotInputMax = 0x28; // float32
			 uintptr_t m_bDotCPAngles = 0x2c; // bool
			 uintptr_t m_bDotCameraAngles = 0x2d; // bool
			 uintptr_t m_flAlphaScaleMin = 0x30; // float32
			 uintptr_t m_flAlphaScaleMax = 0x34; // float32
			 uintptr_t m_flRadiusScaleMin = 0x38; // float32
			 uintptr_t m_flRadiusScaleMax = 0x3c; // float32
			 uintptr_t m_flRadiusScaleFOVBase = 0x40; // float32
			 uintptr_t m_bRightEye = 0x44; // bool
		}
	}
}
