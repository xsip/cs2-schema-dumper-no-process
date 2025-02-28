#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetFromCPSnapshot {
			 uintptr_t m_nControlPointNumber = 0x1c0; // int32
			 uintptr_t m_nAttributeToRead = 0x1c4; // ParticleAttributeIndex_t
			 uintptr_t m_nAttributeToWrite = 0x1c8; // ParticleAttributeIndex_t
			 uintptr_t m_nLocalSpaceCP = 0x1cc; // int32
			 uintptr_t m_bRandom = 0x1d0; // bool
			 uintptr_t m_bReverse = 0x1d1; // bool
			 uintptr_t m_nRandomSeed = 0x1d4; // int32
			 uintptr_t m_nSnapShotStartPoint = 0x1d8; // CParticleCollectionFloatInput
			 uintptr_t m_nSnapShotIncrement = 0x338; // CParticleCollectionFloatInput
			 uintptr_t m_flInterpolation = 0x498; // CPerParticleFloatInput
			 uintptr_t m_bSubSample = 0x5f8; // bool
			 uintptr_t m_bPrev = 0x5f9; // bool
		}
	}
}
