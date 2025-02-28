#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixFilterDesc_t {
			 uintptr_t m_nFilterType = 0x0; // VMixFilterType_t
			 uintptr_t m_nFilterSlope = 0x2; // VMixFilterSlope_t
			 uintptr_t m_bEnabled = 0x3; // bool
			 uintptr_t m_fldbGain = 0x4; // float32
			 uintptr_t m_flCutoffFreq = 0x8; // float32
			 uintptr_t m_flQ = 0xc; // float32
		}
	}
}
