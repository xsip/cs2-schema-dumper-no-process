#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetControlPointToCPVelocity {
			 uintptr_t m_nCPInput = 0x1c8; // int32
			 uintptr_t m_nCPOutputVel = 0x1cc; // int32
			 uintptr_t m_bNormalize = 0x1d0; // bool
			 uintptr_t m_nCPOutputMag = 0x1d4; // int32
			 uintptr_t m_nCPField = 0x1d8; // int32
			 uintptr_t m_vecComparisonVelocity = 0x1e0; // CParticleCollectionVecInput
		}
	}
}
