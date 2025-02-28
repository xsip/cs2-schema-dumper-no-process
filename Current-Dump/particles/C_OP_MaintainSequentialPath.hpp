#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_MaintainSequentialPath {
			 uintptr_t m_fMaxDistance = 0x1c0; // float32
			 uintptr_t m_flNumToAssign = 0x1c4; // float32
			 uintptr_t m_flCohesionStrength = 0x1c8; // float32
			 uintptr_t m_flTolerance = 0x1cc; // float32
			 uintptr_t m_bLoop = 0x1d0; // bool
			 uintptr_t m_bUseParticleCount = 0x1d1; // bool
			 uintptr_t m_PathParams = 0x1e0; // CPathParameters
		}
	}
}
