#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_DifferencePreviousParticle {
			 uintptr_t m_nFieldInput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_nFieldOutput = 0x1c4; // ParticleAttributeIndex_t
			 uintptr_t m_flInputMin = 0x1c8; // float32
			 uintptr_t m_flInputMax = 0x1cc; // float32
			 uintptr_t m_flOutputMin = 0x1d0; // float32
			 uintptr_t m_flOutputMax = 0x1d4; // float32
			 uintptr_t m_nSetMethod = 0x1d8; // ParticleSetMethod_t
			 uintptr_t m_bActiveRange = 0x1dc; // bool
			 uintptr_t m_bSetPreviousParticle = 0x1dd; // bool
		}
	}
}
