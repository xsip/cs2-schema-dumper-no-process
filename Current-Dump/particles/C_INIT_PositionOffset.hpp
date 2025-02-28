#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_PositionOffset {
			 uintptr_t m_OffsetMin = 0x1c8; // CPerParticleVecInput
			 uintptr_t m_OffsetMax = 0x840; // CPerParticleVecInput
			 uintptr_t m_TransformInput = 0xeb8; // CParticleTransformInput
			 uintptr_t m_bLocalCoords = 0xf20; // bool
			 uintptr_t m_bProportional = 0xf21; // bool
			 uintptr_t m_randomnessParameters = 0xf24; // CRandomNumberGeneratorParameters
		}
	}
}
