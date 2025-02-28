#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_SetHitboxToModel {
			 uintptr_t m_nControlPointNumber = 0x1c8; // int32
			 uintptr_t m_nForceInModel = 0x1cc; // int32
			 uintptr_t m_bEvenDistribution = 0x1d0; // bool
			 uintptr_t m_nDesiredHitbox = 0x1d4; // int32
			 uintptr_t m_vecHitBoxScale = 0x1d8; // CParticleCollectionVecInput
			 uintptr_t m_vecDirectionBias = 0x850; // Vector
			 uintptr_t m_bMaintainHitbox = 0x85c; // bool
			 uintptr_t m_bUseBones = 0x85d; // bool
			 uintptr_t m_HitboxSetName = 0x85e; // char[128]
			 uintptr_t m_flShellSize = 0x8e0; // CParticleCollectionFloatInput
		}
	}
}
