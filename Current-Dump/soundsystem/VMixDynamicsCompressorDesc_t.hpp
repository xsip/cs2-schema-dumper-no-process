#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixDynamicsCompressorDesc_t {
			 uintptr_t m_fldbOutputGain = 0x0;
			 uintptr_t m_fldbCompressionThreshold = 0x4;
			 uintptr_t m_fldbKneeWidth = 0x8;
			 uintptr_t m_flCompressionRatio = 0xc;
			 uintptr_t m_flAttackTimeMS = 0x10;
			 uintptr_t m_flReleaseTimeMS = 0x14;
			 uintptr_t m_flRMSTimeMS = 0x18;
			 uintptr_t m_flWetMix = 0x1c;
			 uintptr_t m_bPeakMode = 0x20;
		}
	}
}
