#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_CreateWithinBox {
			 uintptr_t m_vecMin = 0x1c8; // CPerParticleVecInput
			 uintptr_t m_vecMax = 0x840; // CPerParticleVecInput
			 uintptr_t m_nControlPointNumber = 0xeb8; // int32
			 uintptr_t m_bLocalSpace = 0xebc; // bool
			 uintptr_t m_randomnessParameters = 0xec0; // CRandomNumberGeneratorParameters
		}
	}
}
