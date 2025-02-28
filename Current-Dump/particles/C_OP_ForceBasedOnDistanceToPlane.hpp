#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ForceBasedOnDistanceToPlane {
			 uintptr_t m_flMinDist = 0x1d0;
			 uintptr_t m_vecForceAtMinDist = 0x1d4;
			 uintptr_t m_flMaxDist = 0x1e0;
			 uintptr_t m_vecForceAtMaxDist = 0x1e4;
			 uintptr_t m_vecPlaneNormal = 0x1f0;
			 uintptr_t m_nControlPointNumber = 0x1fc;
			 uintptr_t m_flExponent = 0x200;
		}
	}
}
