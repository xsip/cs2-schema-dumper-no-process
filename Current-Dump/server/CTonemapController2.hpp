#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTonemapController2 {
			 uintptr_t m_flAutoExposureMin = 0x4e0;
			 uintptr_t m_flAutoExposureMax = 0x4e4;
			 uintptr_t m_flTonemapPercentTarget = 0x4e8;
			 uintptr_t m_flTonemapPercentBrightPixels = 0x4ec;
			 uintptr_t m_flTonemapMinAvgLum = 0x4f0;
			 uintptr_t m_flExposureAdaptationSpeedUp = 0x4f4;
			 uintptr_t m_flExposureAdaptationSpeedDown = 0x4f8;
			 uintptr_t m_flTonemapEVSmoothingRange = 0x4fc;
		}
	}
}
