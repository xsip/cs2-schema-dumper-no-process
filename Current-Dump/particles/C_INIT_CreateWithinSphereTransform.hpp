#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_CreateWithinSphereTransform {
			 uintptr_t m_fRadiusMin = 0x1c8; // CPerParticleFloatInput
			 uintptr_t m_fRadiusMax = 0x328; // CPerParticleFloatInput
			 uintptr_t m_vecDistanceBias = 0x488; // CPerParticleVecInput
			 uintptr_t m_vecDistanceBiasAbs = 0xb00; // Vector
			 uintptr_t m_TransformInput = 0xb10; // CParticleTransformInput
			 uintptr_t m_fSpeedMin = 0xb78; // CPerParticleFloatInput
			 uintptr_t m_fSpeedMax = 0xcd8; // CPerParticleFloatInput
			 uintptr_t m_fSpeedRandExp = 0xe38; // float32
			 uintptr_t m_bLocalCoords = 0xe3c; // bool
			 uintptr_t m_flEndCPGrowthTime = 0xe40; // float32
			 uintptr_t m_LocalCoordinateSystemSpeedMin = 0xe48; // CPerParticleVecInput
			 uintptr_t m_LocalCoordinateSystemSpeedMax = 0x14c0; // CPerParticleVecInput
			 uintptr_t m_nFieldOutput = 0x1b38; // ParticleAttributeIndex_t
			 uintptr_t m_nFieldVelocity = 0x1b3c; // ParticleAttributeIndex_t
		}
	}
}
