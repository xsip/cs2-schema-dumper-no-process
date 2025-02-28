#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixConvolutionDesc_t {
			 uintptr_t m_fldbGain = 0x0;
			 uintptr_t m_flPreDelayMS = 0x4;
			 uintptr_t m_flWetMix = 0x8;
			 uintptr_t m_fldbLow = 0xc;
			 uintptr_t m_fldbMid = 0x10;
			 uintptr_t m_fldbHigh = 0x14;
			 uintptr_t m_flLowCutoffFreq = 0x18;
			 uintptr_t m_flHighCutoffFreq = 0x1c;
		}
	}
}
