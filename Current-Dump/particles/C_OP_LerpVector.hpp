#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_LerpVector {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_vecOutput = 0x1c4; // Vector
			 uintptr_t m_flStartTime = 0x1d0; // float32
			 uintptr_t m_flEndTime = 0x1d4; // float32
			 uintptr_t m_nSetMethod = 0x1d8; // ParticleSetMethod_t
		}
	}
}
