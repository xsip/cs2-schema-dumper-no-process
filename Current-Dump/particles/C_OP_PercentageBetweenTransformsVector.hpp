#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_PercentageBetweenTransformsVector {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_flInputMin = 0x1c4; // float32
			 uintptr_t m_flInputMax = 0x1c8; // float32
			 uintptr_t m_vecOutputMin = 0x1cc; // Vector
			 uintptr_t m_vecOutputMax = 0x1d8; // Vector
			 uintptr_t m_TransformStart = 0x1e8; // CParticleTransformInput
			 uintptr_t m_TransformEnd = 0x250; // CParticleTransformInput
			 uintptr_t m_nSetMethod = 0x2b8; // ParticleSetMethod_t
			 uintptr_t m_bActiveRange = 0x2bc; // bool
			 uintptr_t m_bRadialCheck = 0x2bd; // bool
		}
	}
}
