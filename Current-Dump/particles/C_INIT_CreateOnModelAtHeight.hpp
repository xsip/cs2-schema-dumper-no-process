#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_CreateOnModelAtHeight {
			 uintptr_t m_bUseBones = 0x1c8; // bool
			 uintptr_t m_bForceZ = 0x1c9; // bool
			 uintptr_t m_nControlPointNumber = 0x1cc; // int32
			 uintptr_t m_nHeightCP = 0x1d0; // int32
			 uintptr_t m_bUseWaterHeight = 0x1d4; // bool
			 uintptr_t m_flDesiredHeight = 0x1d8; // CParticleCollectionFloatInput
			 uintptr_t m_vecHitBoxScale = 0x338; // CParticleCollectionVecInput
			 uintptr_t m_vecDirectionBias = 0x9b0; // CParticleCollectionVecInput
			 uintptr_t m_nBiasType = 0x1028; // ParticleHitboxBiasType_t
			 uintptr_t m_bLocalCoords = 0x102c; // bool
			 uintptr_t m_bPreferMovingBoxes = 0x102d; // bool
			 uintptr_t m_HitboxSetName = 0x102e; // char[128]
			 uintptr_t m_flHitboxVelocityScale = 0x10b0; // CParticleCollectionFloatInput
			 uintptr_t m_flMaxBoneVelocity = 0x1210; // CParticleCollectionFloatInput
		}
	}
}
