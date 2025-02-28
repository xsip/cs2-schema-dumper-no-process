#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace CastSphereSATParams_t {
			 uintptr_t m_vRayStart = 0x0; // Vector
			 uintptr_t m_vRayDelta = 0xc; // Vector
			 uintptr_t m_flRadius = 0x18; // float32
			 uintptr_t m_flMaxFraction = 0x1c; // float32
			 uintptr_t m_flScale = 0x20; // float32
			 uintptr_t m_pHull = 0x28; // RnHull_t*
		}
	}
}
