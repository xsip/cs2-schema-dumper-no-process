#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixUtilityDesc_t {
			 uintptr_t m_nOp = 0x0; // VMixChannelOperation_t
			 uintptr_t m_flInputPan = 0x4; // float32
			 uintptr_t m_flOutputBalance = 0x8; // float32
			 uintptr_t m_fldbOutputGain = 0xc; // float32
			 uintptr_t m_bBassMono = 0x10; // bool
			 uintptr_t m_flBassFreq = 0x14; // float32
		}
	}
}
