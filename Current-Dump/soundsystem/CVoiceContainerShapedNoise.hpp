#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerShapedNoise {
			 uintptr_t m_bUseCurveForFrequency = 0xc0;
			 uintptr_t m_flFrequency = 0xc4;
			 uintptr_t m_frequencySweep = 0xc8;
			 uintptr_t m_bUseCurveForResonance = 0x108;
			 uintptr_t m_flResonance = 0x10c;
			 uintptr_t m_resonanceSweep = 0x110;
			 uintptr_t m_bUseCurveForAmplitude = 0x150;
			 uintptr_t m_flGainInDecibels = 0x154;
			 uintptr_t m_gainSweep = 0x158;
		}
	}
}
