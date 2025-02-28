#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetRandomControlPointPosition {
			 uintptr_t m_bUseWorldLocation = 0x1c8; // bool
			 uintptr_t m_bOrient = 0x1c9; // bool
			 uintptr_t m_nCP1 = 0x1cc; // int32
			 uintptr_t m_nHeadLocation = 0x1d0; // int32
			 uintptr_t m_flReRandomRate = 0x1d8; // CParticleCollectionFloatInput
			 uintptr_t m_vecCPMinPos = 0x338; // Vector
			 uintptr_t m_vecCPMaxPos = 0x344; // Vector
			 uintptr_t m_flInterpolation = 0x350; // CParticleCollectionFloatInput
		}
	}
}
