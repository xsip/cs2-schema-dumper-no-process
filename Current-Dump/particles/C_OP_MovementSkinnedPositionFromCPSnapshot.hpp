#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_MovementSkinnedPositionFromCPSnapshot {
			 uintptr_t m_nSnapshotControlPointNumber = 0x1c0; // int32
			 uintptr_t m_nControlPointNumber = 0x1c4; // int32
			 uintptr_t m_bRandom = 0x1c8; // bool
			 uintptr_t m_nRandomSeed = 0x1cc; // int32
			 uintptr_t m_bSetNormal = 0x1d0; // bool
			 uintptr_t m_bSetRadius = 0x1d1; // bool
			 uintptr_t m_nIndexType = 0x1d4; // SnapshotIndexType_t
			 uintptr_t m_flReadIndex = 0x1d8; // CPerParticleFloatInput
			 uintptr_t m_flIncrement = 0x338; // CParticleCollectionFloatInput
			 uintptr_t m_nFullLoopIncrement = 0x498; // CParticleCollectionFloatInput
			 uintptr_t m_nSnapShotStartPoint = 0x5f8; // CParticleCollectionFloatInput
			 uintptr_t m_flInterpolation = 0x758; // CPerParticleFloatInput
		}
	}
}
