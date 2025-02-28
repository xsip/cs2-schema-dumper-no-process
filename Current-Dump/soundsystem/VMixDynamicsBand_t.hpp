#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixDynamicsBand_t {
			 uintptr_t m_fldbGainInput = 0x0; // float32
			 uintptr_t m_fldbGainOutput = 0x4; // float32
			 uintptr_t m_fldbThresholdBelow = 0x8; // float32
			 uintptr_t m_fldbThresholdAbove = 0xc; // float32
			 uintptr_t m_flRatioBelow = 0x10; // float32
			 uintptr_t m_flRatioAbove = 0x14; // float32
			 uintptr_t m_flAttackTimeMS = 0x18; // float32
			 uintptr_t m_flReleaseTimeMS = 0x1c; // float32
			 uintptr_t m_bEnable = 0x20; // bool
			 uintptr_t m_bSolo = 0x21; // bool
		}
	}
}
