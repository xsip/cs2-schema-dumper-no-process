#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RampScalarSpline {
			 uintptr_t m_RateMin = 0x1c0; // float32
			 uintptr_t m_RateMax = 0x1c4; // float32
			 uintptr_t m_flStartTime_min = 0x1c8; // float32
			 uintptr_t m_flStartTime_max = 0x1cc; // float32
			 uintptr_t m_flEndTime_min = 0x1d0; // float32
			 uintptr_t m_flEndTime_max = 0x1d4; // float32
			 uintptr_t m_flBias = 0x1d8; // float32
			 uintptr_t m_nField = 0x200; // ParticleAttributeIndex_t
			 uintptr_t m_bProportionalOp = 0x204; // bool
			 uintptr_t m_bEaseOut = 0x205; // bool
		}
	}
}
