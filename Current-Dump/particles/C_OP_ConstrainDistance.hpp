#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ConstrainDistance {
			 uintptr_t m_fMinDistance = 0x1c0; // CParticleCollectionFloatInput
			 uintptr_t m_fMaxDistance = 0x320; // CParticleCollectionFloatInput
			 uintptr_t m_nControlPointNumber = 0x480; // int32
			 uintptr_t m_CenterOffset = 0x484; // Vector
			 uintptr_t m_bGlobalCenter = 0x490; // bool
		}
	}
}
