#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ForceBasedOnDistanceToPlane {
			 uintptr_t m_flMinDist = 0x1d0; // float32
			 uintptr_t m_vecForceAtMinDist = 0x1d4; // Vector
			 uintptr_t m_flMaxDist = 0x1e0; // float32
			 uintptr_t m_vecForceAtMaxDist = 0x1e4; // Vector
			 uintptr_t m_vecPlaneNormal = 0x1f0; // Vector
			 uintptr_t m_nControlPointNumber = 0x1fc; // int32
			 uintptr_t m_flExponent = 0x200; // float32
		}
	}
}
