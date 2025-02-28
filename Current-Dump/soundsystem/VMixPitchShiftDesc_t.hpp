#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixPitchShiftDesc_t {
			 uintptr_t m_nGrainSampleCount = 0x0; // int32
			 uintptr_t m_flPitchShift = 0x4; // float32
			 uintptr_t m_nQuality = 0x8; // int32
			 uintptr_t m_nProcType = 0xc; // int32
		}
	}
}
