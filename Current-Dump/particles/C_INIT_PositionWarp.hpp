#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_PositionWarp {
			 uintptr_t m_vecWarpMin = 0x1c8;
			 uintptr_t m_vecWarpMax = 0x840;
			 uintptr_t m_nScaleControlPointNumber = 0xeb8;
			 uintptr_t m_nControlPointNumber = 0xebc;
			 uintptr_t m_nRadiusComponent = 0xec0;
			 uintptr_t m_flWarpTime = 0xec4;
			 uintptr_t m_flWarpStartTime = 0xec8;
			 uintptr_t m_flPrevPosScale = 0xecc;
			 uintptr_t m_bInvertWarp = 0xed0;
			 uintptr_t m_bUseCount = 0xed1;
		}
	}
}
