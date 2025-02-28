#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixFilterDesc_t {
			 uintptr_t m_nFilterType = 0x0;
			 uintptr_t m_nFilterSlope = 0x2;
			 uintptr_t m_bEnabled = 0x3;
			 uintptr_t m_fldbGain = 0x4;
			 uintptr_t m_flCutoffFreq = 0x8;
			 uintptr_t m_flQ = 0xc;
		}
	}
}
