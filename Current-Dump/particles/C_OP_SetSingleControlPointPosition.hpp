#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetSingleControlPointPosition {
			 uintptr_t m_bSetOnce = 0x1c8; // bool
			 uintptr_t m_nCP1 = 0x1cc; // int32
			 uintptr_t m_vecCP1Pos = 0x1d0; // CParticleCollectionVecInput
			 uintptr_t m_transformInput = 0x848; // CParticleTransformInput
		}
	}
}
