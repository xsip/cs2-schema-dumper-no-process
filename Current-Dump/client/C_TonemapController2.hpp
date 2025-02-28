#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_TonemapController2 {
			 uintptr_t m_flAutoExposureMin = 0x568; // float32
			 uintptr_t m_flAutoExposureMax = 0x56c; // float32
			 uintptr_t m_flTonemapPercentTarget = 0x570; // float32
			 uintptr_t m_flTonemapPercentBrightPixels = 0x574; // float32
			 uintptr_t m_flTonemapMinAvgLum = 0x578; // float32
			 uintptr_t m_flExposureAdaptationSpeedUp = 0x57c; // float32
			 uintptr_t m_flExposureAdaptationSpeedDown = 0x580; // float32
			 uintptr_t m_flTonemapEVSmoothingRange = 0x584; // float32
		}
	}
}
