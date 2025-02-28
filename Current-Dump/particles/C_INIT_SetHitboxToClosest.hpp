#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_SetHitboxToClosest {
			 uintptr_t m_nControlPointNumber = 0x1c8; // int32
			 uintptr_t m_nDesiredHitbox = 0x1cc; // int32
			 uintptr_t m_vecHitBoxScale = 0x1d0; // CParticleCollectionVecInput
			 uintptr_t m_HitboxSetName = 0x848; // char[128]
			 uintptr_t m_bUseBones = 0x8c8; // bool
			 uintptr_t m_bUseClosestPointOnHitbox = 0x8c9; // bool
			 uintptr_t m_nTestType = 0x8cc; // ClosestPointTestType_t
			 uintptr_t m_flHybridRatio = 0x8d0; // CParticleCollectionFloatInput
			 uintptr_t m_bUpdatePosition = 0xa30; // bool
		}
	}
}
