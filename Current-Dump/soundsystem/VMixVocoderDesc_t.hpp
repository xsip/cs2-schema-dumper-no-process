#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixVocoderDesc_t {
			 uintptr_t m_nBandCount = 0x0;
			 uintptr_t m_flBandwidth = 0x4;
			 uintptr_t m_fldBModGain = 0x8;
			 uintptr_t m_flFreqRangeStart = 0xc;
			 uintptr_t m_flFreqRangeEnd = 0x10;
			 uintptr_t m_fldBUnvoicedGain = 0x14;
			 uintptr_t m_flAttackTimeMS = 0x18;
			 uintptr_t m_flReleaseTimeMS = 0x1c;
			 uintptr_t m_nDebugBand = 0x20;
			 uintptr_t m_bPeakMode = 0x24;
		}
	}
}
