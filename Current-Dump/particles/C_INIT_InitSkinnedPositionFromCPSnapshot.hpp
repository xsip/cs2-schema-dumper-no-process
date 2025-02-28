#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_InitSkinnedPositionFromCPSnapshot {
			 uintptr_t m_nSnapshotControlPointNumber = 0x1c8; // int32
			 uintptr_t m_nControlPointNumber = 0x1cc; // int32
			 uintptr_t m_bRandom = 0x1d0; // bool
			 uintptr_t m_nRandomSeed = 0x1d4; // int32
			 uintptr_t m_bRigid = 0x1d8; // bool
			 uintptr_t m_bSetNormal = 0x1d9; // bool
			 uintptr_t m_bIgnoreDt = 0x1da; // bool
			 uintptr_t m_flMinNormalVelocity = 0x1dc; // float32
			 uintptr_t m_flMaxNormalVelocity = 0x1e0; // float32
			 uintptr_t m_nIndexType = 0x1e4; // SnapshotIndexType_t
			 uintptr_t m_flReadIndex = 0x1e8; // CPerParticleFloatInput
			 uintptr_t m_flIncrement = 0x348; // float32
			 uintptr_t m_nFullLoopIncrement = 0x34c; // int32
			 uintptr_t m_nSnapShotStartPoint = 0x350; // int32
			 uintptr_t m_flBoneVelocity = 0x354; // float32
			 uintptr_t m_flBoneVelocityMax = 0x358; // float32
			 uintptr_t m_bCopyColor = 0x35c; // bool
			 uintptr_t m_bCopyAlpha = 0x35d; // bool
			 uintptr_t m_bSetRadius = 0x35e; // bool
		}
	}
}
