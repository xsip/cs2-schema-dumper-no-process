#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixDynamics3BandDesc_t {
			 uintptr_t m_fldbGainOutput = 0x0;
			 uintptr_t m_flRMSTimeMS = 0x4;
			 uintptr_t m_fldbKneeWidth = 0x8;
			 uintptr_t m_flDepth = 0xc;
			 uintptr_t m_flWetMix = 0x10;
			 uintptr_t m_flTimeScale = 0x14;
			 uintptr_t m_flLowCutoffFreq = 0x18;
			 uintptr_t m_flHighCutoffFreq = 0x1c;
			 uintptr_t m_bPeakMode = 0x20;
			 uintptr_t m_bandDesc = 0x24;
		}
	}
}
