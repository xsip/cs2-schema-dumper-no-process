#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_PercentageBetweenTransformLerpCPs {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_flInputMin = 0x1c4; // float32
			 uintptr_t m_flInputMax = 0x1c8; // float32
			 uintptr_t m_TransformStart = 0x1d0; // CParticleTransformInput
			 uintptr_t m_TransformEnd = 0x238; // CParticleTransformInput
			 uintptr_t m_nOutputStartCP = 0x2a0; // int32
			 uintptr_t m_nOutputStartField = 0x2a4; // int32
			 uintptr_t m_nOutputEndCP = 0x2a8; // int32
			 uintptr_t m_nOutputEndField = 0x2ac; // int32
			 uintptr_t m_nSetMethod = 0x2b0; // ParticleSetMethod_t
			 uintptr_t m_bActiveRange = 0x2b4; // bool
			 uintptr_t m_bRadialCheck = 0x2b5; // bool
		}
	}
}
