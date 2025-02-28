#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PostProcessingVolume {
			 uintptr_t m_hPostSettings = 0xd40; // CStrongHandle< InfoForResourceTypeCPostProcessingResource >
			 uintptr_t m_flFadeDuration = 0xd48; // float32
			 uintptr_t m_flMinLogExposure = 0xd4c; // float32
			 uintptr_t m_flMaxLogExposure = 0xd50; // float32
			 uintptr_t m_flMinExposure = 0xd54; // float32
			 uintptr_t m_flMaxExposure = 0xd58; // float32
			 uintptr_t m_flExposureCompensation = 0xd5c; // float32
			 uintptr_t m_flExposureFadeSpeedUp = 0xd60; // float32
			 uintptr_t m_flExposureFadeSpeedDown = 0xd64; // float32
			 uintptr_t m_flTonemapEVSmoothingRange = 0xd68; // float32
			 uintptr_t m_bMaster = 0xd6c; // bool
			 uintptr_t m_bExposureControl = 0xd6d; // bool
			 uintptr_t m_flRate = 0xd70; // float32
			 uintptr_t m_flTonemapPercentTarget = 0xd74; // float32
			 uintptr_t m_flTonemapPercentBrightPixels = 0xd78; // float32
			 uintptr_t m_flTonemapMinAvgLum = 0xd7c; // float32
		}
	}
}
