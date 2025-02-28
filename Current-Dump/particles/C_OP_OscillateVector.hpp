#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_OscillateVector {
			 uintptr_t m_RateMin = 0x1c0;
			 uintptr_t m_RateMax = 0x1cc;
			 uintptr_t m_FrequencyMin = 0x1d8;
			 uintptr_t m_FrequencyMax = 0x1e4;
			 uintptr_t m_nField = 0x1f0;
			 uintptr_t m_bProportional = 0x1f4;
			 uintptr_t m_bProportionalOp = 0x1f5;
			 uintptr_t m_bOffset = 0x1f6;
			 uintptr_t m_flStartTime_min = 0x1f8;
			 uintptr_t m_flStartTime_max = 0x1fc;
			 uintptr_t m_flEndTime_min = 0x200;
			 uintptr_t m_flEndTime_max = 0x204;
			 uintptr_t m_flOscMult = 0x208;
			 uintptr_t m_flOscAdd = 0x368;
			 uintptr_t m_flRateScale = 0x4c8;
		}
	}
}
