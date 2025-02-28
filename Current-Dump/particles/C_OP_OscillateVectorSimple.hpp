#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_OscillateVectorSimple {
			 uintptr_t m_Rate = 0x1c0; // Vector
			 uintptr_t m_Frequency = 0x1cc; // Vector
			 uintptr_t m_nField = 0x1d8; // ParticleAttributeIndex_t
			 uintptr_t m_flOscMult = 0x1dc; // float32
			 uintptr_t m_flOscAdd = 0x1e0; // float32
			 uintptr_t m_bOffset = 0x1e4; // bool
		}
	}
}
