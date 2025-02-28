#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapAverageHitboxSpeedtoCP {
			 uintptr_t m_nInControlPointNumber = 0x1c8; // int32
			 uintptr_t m_nOutControlPointNumber = 0x1cc; // int32
			 uintptr_t m_nField = 0x1d0; // int32
			 uintptr_t m_nHitboxDataType = 0x1d4; // ParticleHitboxDataSelection_t
			 uintptr_t m_flInputMin = 0x1d8; // CParticleCollectionFloatInput
			 uintptr_t m_flInputMax = 0x338; // CParticleCollectionFloatInput
			 uintptr_t m_flOutputMin = 0x498; // CParticleCollectionFloatInput
			 uintptr_t m_flOutputMax = 0x5f8; // CParticleCollectionFloatInput
			 uintptr_t m_nHeightControlPointNumber = 0x758; // int32
			 uintptr_t m_vecComparisonVelocity = 0x760; // CParticleCollectionVecInput
			 uintptr_t m_HitboxSetName = 0xdd8; // char[128]
		}
	}
}
