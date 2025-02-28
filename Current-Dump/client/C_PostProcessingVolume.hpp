#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PostProcessingVolume {
			 uintptr_t m_hPostSettings = 0xd40;
			 uintptr_t m_flFadeDuration = 0xd48;
			 uintptr_t m_flMinLogExposure = 0xd4c;
			 uintptr_t m_flMaxLogExposure = 0xd50;
			 uintptr_t m_flMinExposure = 0xd54;
			 uintptr_t m_flMaxExposure = 0xd58;
			 uintptr_t m_flExposureCompensation = 0xd5c;
			 uintptr_t m_flExposureFadeSpeedUp = 0xd60;
			 uintptr_t m_flExposureFadeSpeedDown = 0xd64;
			 uintptr_t m_flTonemapEVSmoothingRange = 0xd68;
			 uintptr_t m_bMaster = 0xd6c;
			 uintptr_t m_bExposureControl = 0xd6d;
			 uintptr_t m_flRate = 0xd70;
			 uintptr_t m_flTonemapPercentTarget = 0xd74;
			 uintptr_t m_flTonemapPercentBrightPixels = 0xd78;
			 uintptr_t m_flTonemapMinAvgLum = 0xd7c;
		}
	}
}
