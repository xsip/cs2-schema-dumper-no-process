#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_CycleScalar {
			 uintptr_t m_nDestField = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_flStartValue = 0x1c4; // float32
			 uintptr_t m_flEndValue = 0x1c8; // float32
			 uintptr_t m_flCycleTime = 0x1cc; // float32
			 uintptr_t m_bDoNotRepeatCycle = 0x1d0; // bool
			 uintptr_t m_bSynchronizeParticles = 0x1d1; // bool
			 uintptr_t m_nCPScale = 0x1d4; // int32
			 uintptr_t m_nCPFieldMin = 0x1d8; // int32
			 uintptr_t m_nCPFieldMax = 0x1dc; // int32
			 uintptr_t m_nSetMethod = 0x1e0; // ParticleSetMethod_t
		}
	}
}
