#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_OscillateScalarSimple {
			 uintptr_t m_Rate = 0x1c0; // float32
			 uintptr_t m_Frequency = 0x1c4; // float32
			 uintptr_t m_nField = 0x1c8; // ParticleAttributeIndex_t
			 uintptr_t m_flOscMult = 0x1cc; // float32
			 uintptr_t m_flOscAdd = 0x1d0; // float32
		}
	}
}
