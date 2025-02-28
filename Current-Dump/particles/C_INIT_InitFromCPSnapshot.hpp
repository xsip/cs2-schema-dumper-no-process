#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_InitFromCPSnapshot {
			 uintptr_t m_nControlPointNumber = 0x1c8; // int32
			 uintptr_t m_nAttributeToRead = 0x1cc; // ParticleAttributeIndex_t
			 uintptr_t m_nAttributeToWrite = 0x1d0; // ParticleAttributeIndex_t
			 uintptr_t m_nLocalSpaceCP = 0x1d4; // int32
			 uintptr_t m_bRandom = 0x1d8; // bool
			 uintptr_t m_bReverse = 0x1d9; // bool
			 uintptr_t m_nSnapShotIncrement = 0x1e0; // CParticleCollectionFloatInput
			 uintptr_t m_nManualSnapshotIndex = 0x340; // CPerParticleFloatInput
			 uintptr_t m_nRandomSeed = 0x4a0; // int32
			 uintptr_t m_bLocalSpaceAngles = 0x4a4; // bool
		}
	}
}
