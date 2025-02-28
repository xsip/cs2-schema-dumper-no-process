#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ExternalWindForce {
			 uintptr_t m_vecSamplePosition = 0x1d0;
			 uintptr_t m_vecScale = 0x848;
			 uintptr_t m_bSampleWind = 0xec0;
			 uintptr_t m_bSampleWater = 0xec1;
			 uintptr_t m_bDampenNearWaterPlane = 0xec2;
			 uintptr_t m_bSampleGravity = 0xec3;
			 uintptr_t m_vecGravityForce = 0xec8;
			 uintptr_t m_bUseBasicMovementGravity = 0x1540;
			 uintptr_t m_flLocalGravityScale = 0x1548;
			 uintptr_t m_flLocalBuoyancyScale = 0x16a8;
			 uintptr_t m_vecBuoyancyForce = 0x1808;
		}
	}
}
