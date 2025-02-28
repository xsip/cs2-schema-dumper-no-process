#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetControlPointRotation {
			 uintptr_t m_vecRotAxis = 0x1c8; // CParticleCollectionVecInput
			 uintptr_t m_flRotRate = 0x840; // CParticleCollectionFloatInput
			 uintptr_t m_nCP = 0x9a0; // int32
			 uintptr_t m_nLocalCP = 0x9a4; // int32
		}
	}
}
