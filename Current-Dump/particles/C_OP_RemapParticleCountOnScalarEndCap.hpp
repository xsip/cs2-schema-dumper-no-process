#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapParticleCountOnScalarEndCap {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_nInputMin = 0x1c4; // int32
			 uintptr_t m_nInputMax = 0x1c8; // int32
			 uintptr_t m_flOutputMin = 0x1cc; // float32
			 uintptr_t m_flOutputMax = 0x1d0; // float32
			 uintptr_t m_bBackwards = 0x1d4; // bool
			 uintptr_t m_nSetMethod = 0x1d8; // ParticleSetMethod_t
		}
	}
}
