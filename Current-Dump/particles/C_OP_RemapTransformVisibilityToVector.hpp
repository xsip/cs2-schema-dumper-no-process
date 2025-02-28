#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapTransformVisibilityToVector {
			 uintptr_t m_nSetMethod = 0x1c0; // ParticleSetMethod_t
			 uintptr_t m_TransformInput = 0x1c8; // CParticleTransformInput
			 uintptr_t m_nFieldOutput = 0x230; // ParticleAttributeIndex_t
			 uintptr_t m_flInputMin = 0x234; // float32
			 uintptr_t m_flInputMax = 0x238; // float32
			 uintptr_t m_vecOutputMin = 0x23c; // Vector
			 uintptr_t m_vecOutputMax = 0x248; // Vector
			 uintptr_t m_flRadius = 0x254; // float32
		}
	}
}
