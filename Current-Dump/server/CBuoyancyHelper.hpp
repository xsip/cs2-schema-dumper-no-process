#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBuoyancyHelper {
			 uintptr_t m_nFluidType = 0x18; // CUtlStringToken
			 uintptr_t m_flFluidDensity = 0x1c; // float32
			 uintptr_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x20; // CUtlVector< float32 >
			 uintptr_t m_vecWheelFrictionScales = 0x38; // CUtlVector< float32 >
			 uintptr_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x50; // CUtlVector< float32 >
			 uintptr_t m_vecWheelDrag = 0x68; // CUtlVector< float32 >
		}
	}
}
