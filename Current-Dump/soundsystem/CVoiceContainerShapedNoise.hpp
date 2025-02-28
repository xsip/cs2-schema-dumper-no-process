#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerShapedNoise {
			 uintptr_t m_bUseCurveForFrequency = 0xc0; // bool
			 uintptr_t m_flFrequency = 0xc4; // float32
			 uintptr_t m_frequencySweep = 0xc8; // CPiecewiseCurve
			 uintptr_t m_bUseCurveForResonance = 0x108; // bool
			 uintptr_t m_flResonance = 0x10c; // float32
			 uintptr_t m_resonanceSweep = 0x110; // CPiecewiseCurve
			 uintptr_t m_bUseCurveForAmplitude = 0x150; // bool
			 uintptr_t m_flGainInDecibels = 0x154; // float32
			 uintptr_t m_gainSweep = 0x158; // CPiecewiseCurve
		}
	}
}
