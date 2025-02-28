#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixDynamicsBand_t {
			 uintptr_t m_fldbGainInput = 0x0;
			 uintptr_t m_fldbGainOutput = 0x4;
			 uintptr_t m_fldbThresholdBelow = 0x8;
			 uintptr_t m_fldbThresholdAbove = 0xc;
			 uintptr_t m_flRatioBelow = 0x10;
			 uintptr_t m_flRatioAbove = 0x14;
			 uintptr_t m_flAttackTimeMS = 0x18;
			 uintptr_t m_flReleaseTimeMS = 0x1c;
			 uintptr_t m_bEnable = 0x20;
			 uintptr_t m_bSolo = 0x21;
		}
	}
}
