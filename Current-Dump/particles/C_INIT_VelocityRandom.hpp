#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_VelocityRandom {
			 uintptr_t m_nControlPointNumber = 0x1c8; // int32
			 uintptr_t m_fSpeedMin = 0x1d0; // CPerParticleFloatInput
			 uintptr_t m_fSpeedMax = 0x330; // CPerParticleFloatInput
			 uintptr_t m_LocalCoordinateSystemSpeedMin = 0x490; // CPerParticleVecInput
			 uintptr_t m_LocalCoordinateSystemSpeedMax = 0xb08; // CPerParticleVecInput
			 uintptr_t m_bIgnoreDT = 0x1180; // bool
			 uintptr_t m_randomnessParameters = 0x1184; // CRandomNumberGeneratorParameters
		}
	}
}
