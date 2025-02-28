#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_VectorFieldSnapshot {
			 uintptr_t m_nControlPointNumber = 0x1c0; // int32
			 uintptr_t m_nAttributeToWrite = 0x1c4; // ParticleAttributeIndex_t
			 uintptr_t m_nLocalSpaceCP = 0x1c8; // int32
			 uintptr_t m_flInterpolation = 0x1d0; // CPerParticleFloatInput
			 uintptr_t m_vecScale = 0x330; // CPerParticleVecInput
			 uintptr_t m_flBoundaryDampening = 0x9a8; // float32
			 uintptr_t m_bSetVelocity = 0x9ac; // bool
			 uintptr_t m_bLockToSurface = 0x9ad; // bool
			 uintptr_t m_flGridSpacing = 0x9b0; // float32
		}
	}
}
