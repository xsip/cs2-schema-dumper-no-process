#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixDynamicsCompressorDesc_t {
			 uintptr_t m_fldbOutputGain = 0x0; // float32
			 uintptr_t m_fldbCompressionThreshold = 0x4; // float32
			 uintptr_t m_fldbKneeWidth = 0x8; // float32
			 uintptr_t m_flCompressionRatio = 0xc; // float32
			 uintptr_t m_flAttackTimeMS = 0x10; // float32
			 uintptr_t m_flReleaseTimeMS = 0x14; // float32
			 uintptr_t m_flRMSTimeMS = 0x18; // float32
			 uintptr_t m_flWetMix = 0x1c; // float32
			 uintptr_t m_bPeakMode = 0x20; // bool
		}
	}
}
