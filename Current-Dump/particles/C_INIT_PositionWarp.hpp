#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_PositionWarp {
			 uintptr_t m_vecWarpMin = 0x1c8; // CParticleCollectionVecInput
			 uintptr_t m_vecWarpMax = 0x840; // CParticleCollectionVecInput
			 uintptr_t m_nScaleControlPointNumber = 0xeb8; // int32
			 uintptr_t m_nControlPointNumber = 0xebc; // int32
			 uintptr_t m_nRadiusComponent = 0xec0; // int32
			 uintptr_t m_flWarpTime = 0xec4; // float32
			 uintptr_t m_flWarpStartTime = 0xec8; // float32
			 uintptr_t m_flPrevPosScale = 0xecc; // float32
			 uintptr_t m_bInvertWarp = 0xed0; // bool
			 uintptr_t m_bUseCount = 0xed1; // bool
		}
	}
}
