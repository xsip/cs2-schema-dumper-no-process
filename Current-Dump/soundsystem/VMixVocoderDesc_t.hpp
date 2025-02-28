#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixVocoderDesc_t {
			 uintptr_t m_nBandCount = 0x0; // int32
			 uintptr_t m_flBandwidth = 0x4; // float32
			 uintptr_t m_fldBModGain = 0x8; // float32
			 uintptr_t m_flFreqRangeStart = 0xc; // float32
			 uintptr_t m_flFreqRangeEnd = 0x10; // float32
			 uintptr_t m_fldBUnvoicedGain = 0x14; // float32
			 uintptr_t m_flAttackTimeMS = 0x18; // float32
			 uintptr_t m_flReleaseTimeMS = 0x1c; // float32
			 uintptr_t m_nDebugBand = 0x20; // int32
			 uintptr_t m_bPeakMode = 0x24; // bool
		}
	}
}
