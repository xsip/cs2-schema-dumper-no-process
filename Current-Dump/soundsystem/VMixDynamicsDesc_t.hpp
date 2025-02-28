#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixDynamicsDesc_t {
			 uintptr_t m_fldbGain = 0x0; // float32
			 uintptr_t m_fldbNoiseGateThreshold = 0x4; // float32
			 uintptr_t m_fldbCompressionThreshold = 0x8; // float32
			 uintptr_t m_fldbLimiterThreshold = 0xc; // float32
			 uintptr_t m_fldbKneeWidth = 0x10; // float32
			 uintptr_t m_flRatio = 0x14; // float32
			 uintptr_t m_flLimiterRatio = 0x18; // float32
			 uintptr_t m_flAttackTimeMS = 0x1c; // float32
			 uintptr_t m_flReleaseTimeMS = 0x20; // float32
			 uintptr_t m_flRMSTimeMS = 0x24; // float32
			 uintptr_t m_flWetMix = 0x28; // float32
			 uintptr_t m_bPeakMode = 0x2c; // bool
		}
	}
}
