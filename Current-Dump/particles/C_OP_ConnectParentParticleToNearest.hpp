#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ConnectParentParticleToNearest {
			 uintptr_t m_nFirstControlPoint = 0x1c0; // int32
			 uintptr_t m_nSecondControlPoint = 0x1c4; // int32
			 uintptr_t m_bUseRadius = 0x1c8; // bool
			 uintptr_t m_flRadiusScale = 0x1d0; // CParticleCollectionFloatInput
			 uintptr_t m_flParentRadiusScale = 0x330; // CParticleCollectionFloatInput
		}
	}
}
