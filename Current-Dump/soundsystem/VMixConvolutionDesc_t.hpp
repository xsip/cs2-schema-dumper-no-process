#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixConvolutionDesc_t {
			 uintptr_t m_fldbGain = 0x0; // float32
			 uintptr_t m_flPreDelayMS = 0x4; // float32
			 uintptr_t m_flWetMix = 0x8; // float32
			 uintptr_t m_fldbLow = 0xc; // float32
			 uintptr_t m_fldbMid = 0x10; // float32
			 uintptr_t m_fldbHigh = 0x14; // float32
			 uintptr_t m_flLowCutoffFreq = 0x18; // float32
			 uintptr_t m_flHighCutoffFreq = 0x1c; // float32
		}
	}
}
