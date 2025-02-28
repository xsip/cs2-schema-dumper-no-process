#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_BasicMovement {
			 uintptr_t m_Gravity = 0x1c0; // CParticleCollectionVecInput
			 uintptr_t m_fDrag = 0x838; // CParticleCollectionFloatInput
			 uintptr_t m_massControls = 0x998; // CParticleMassCalculationParameters
			 uintptr_t m_nMaxConstraintPasses = 0xdc0; // int32
			 uintptr_t m_bUseNewCode = 0xdc4; // bool
		}
	}
}
