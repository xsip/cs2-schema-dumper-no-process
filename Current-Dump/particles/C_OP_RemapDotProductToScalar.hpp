#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapDotProductToScalar {
			 uintptr_t m_nInputCP1 = 0x1c0; // int32
			 uintptr_t m_nInputCP2 = 0x1c4; // int32
			 uintptr_t m_nFieldOutput = 0x1c8; // ParticleAttributeIndex_t
			 uintptr_t m_flInputMin = 0x1cc; // float32
			 uintptr_t m_flInputMax = 0x1d0; // float32
			 uintptr_t m_flOutputMin = 0x1d4; // float32
			 uintptr_t m_flOutputMax = 0x1d8; // float32
			 uintptr_t m_bUseParticleVelocity = 0x1dc; // bool
			 uintptr_t m_nSetMethod = 0x1e0; // ParticleSetMethod_t
			 uintptr_t m_bActiveRange = 0x1e4; // bool
			 uintptr_t m_bUseParticleNormal = 0x1e5; // bool
		}
	}
}
