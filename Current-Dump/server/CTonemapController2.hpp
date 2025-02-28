#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTonemapController2 {
			 uintptr_t m_flAutoExposureMin = 0x4e0; // float32
			 uintptr_t m_flAutoExposureMax = 0x4e4; // float32
			 uintptr_t m_flTonemapPercentTarget = 0x4e8; // float32
			 uintptr_t m_flTonemapPercentBrightPixels = 0x4ec; // float32
			 uintptr_t m_flTonemapMinAvgLum = 0x4f0; // float32
			 uintptr_t m_flExposureAdaptationSpeedUp = 0x4f4; // float32
			 uintptr_t m_flExposureAdaptationSpeedDown = 0x4f8; // float32
			 uintptr_t m_flTonemapEVSmoothingRange = 0x4fc; // float32
		}
	}
}
