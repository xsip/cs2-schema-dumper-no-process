#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ExternalWindForce {
			 uintptr_t m_vecSamplePosition = 0x1d0; // CPerParticleVecInput
			 uintptr_t m_vecScale = 0x848; // CPerParticleVecInput
			 uintptr_t m_bSampleWind = 0xec0; // bool
			 uintptr_t m_bSampleWater = 0xec1; // bool
			 uintptr_t m_bDampenNearWaterPlane = 0xec2; // bool
			 uintptr_t m_bSampleGravity = 0xec3; // bool
			 uintptr_t m_vecGravityForce = 0xec8; // CPerParticleVecInput
			 uintptr_t m_bUseBasicMovementGravity = 0x1540; // bool
			 uintptr_t m_flLocalGravityScale = 0x1548; // CPerParticleFloatInput
			 uintptr_t m_flLocalBuoyancyScale = 0x16a8; // CPerParticleFloatInput
			 uintptr_t m_vecBuoyancyForce = 0x1808; // CPerParticleVecInput
		}
	}
}
