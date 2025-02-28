#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixDynamicsDesc_t {
			 uintptr_t m_fldbGain = 0x0;
			 uintptr_t m_fldbNoiseGateThreshold = 0x4;
			 uintptr_t m_fldbCompressionThreshold = 0x8;
			 uintptr_t m_fldbLimiterThreshold = 0xc;
			 uintptr_t m_fldbKneeWidth = 0x10;
			 uintptr_t m_flRatio = 0x14;
			 uintptr_t m_flLimiterRatio = 0x18;
			 uintptr_t m_flAttackTimeMS = 0x1c;
			 uintptr_t m_flReleaseTimeMS = 0x20;
			 uintptr_t m_flRMSTimeMS = 0x24;
			 uintptr_t m_flWetMix = 0x28;
			 uintptr_t m_bPeakMode = 0x2c;
		}
	}
}
