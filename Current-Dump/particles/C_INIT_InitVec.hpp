#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_InitVec {
			 uintptr_t m_InputValue = 0x1c8; // CPerParticleVecInput
			 uintptr_t m_nOutputField = 0x840; // ParticleAttributeIndex_t
			 uintptr_t m_nSetMethod = 0x844; // ParticleSetMethod_t
			 uintptr_t m_bNormalizedOutput = 0x848; // bool
			 uintptr_t m_bWritePreviousPosition = 0x849; // bool
		}
	}
}
