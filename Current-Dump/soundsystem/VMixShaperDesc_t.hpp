#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixShaperDesc_t {
			 uintptr_t m_nShape = 0x0; // int32
			 uintptr_t m_fldbDrive = 0x4; // float32
			 uintptr_t m_fldbOutputGain = 0x8; // float32
			 uintptr_t m_flWetMix = 0xc; // float32
			 uintptr_t m_nOversampleFactor = 0x10; // int32
		}
	}
}
