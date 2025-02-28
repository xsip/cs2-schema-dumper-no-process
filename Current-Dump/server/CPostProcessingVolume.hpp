#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPostProcessingVolume {
			 uintptr_t m_hPostSettings = 0x970; // CStrongHandle< InfoForResourceTypeCPostProcessingResource >
			 uintptr_t m_flFadeDuration = 0x978; // float32
			 uintptr_t m_flMinLogExposure = 0x97c; // float32
			 uintptr_t m_flMaxLogExposure = 0x980; // float32
			 uintptr_t m_flMinExposure = 0x984; // float32
			 uintptr_t m_flMaxExposure = 0x988; // float32
			 uintptr_t m_flExposureCompensation = 0x98c; // float32
			 uintptr_t m_flExposureFadeSpeedUp = 0x990; // float32
			 uintptr_t m_flExposureFadeSpeedDown = 0x994; // float32
			 uintptr_t m_flTonemapEVSmoothingRange = 0x998; // float32
			 uintptr_t m_bMaster = 0x99c; // bool
			 uintptr_t m_bExposureControl = 0x99d; // bool
			 uintptr_t m_flRate = 0x9a0; // float32
			 uintptr_t m_flTonemapPercentTarget = 0x9a4; // float32
			 uintptr_t m_flTonemapPercentBrightPixels = 0x9a8; // float32
			 uintptr_t m_flTonemapMinAvgLum = 0x9ac; // float32
		}
	}
}
