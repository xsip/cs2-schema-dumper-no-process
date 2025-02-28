#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_OscillateScalar {
			 uintptr_t m_RateMin = 0x1c0; // float32
			 uintptr_t m_RateMax = 0x1c4; // float32
			 uintptr_t m_FrequencyMin = 0x1c8; // float32
			 uintptr_t m_FrequencyMax = 0x1cc; // float32
			 uintptr_t m_nField = 0x1d0; // ParticleAttributeIndex_t
			 uintptr_t m_bProportional = 0x1d4; // bool
			 uintptr_t m_bProportionalOp = 0x1d5; // bool
			 uintptr_t m_flStartTime_min = 0x1d8; // float32
			 uintptr_t m_flStartTime_max = 0x1dc; // float32
			 uintptr_t m_flEndTime_min = 0x1e0; // float32
			 uintptr_t m_flEndTime_max = 0x1e4; // float32
			 uintptr_t m_flOscMult = 0x1e8; // float32
			 uintptr_t m_flOscAdd = 0x1ec; // float32
		}
	}
}
