#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_TimeVaryingForce {
			 uintptr_t m_flStartLerpTime = 0x1d0; // float32
			 uintptr_t m_StartingForce = 0x1d4; // Vector
			 uintptr_t m_flEndLerpTime = 0x1e0; // float32
			 uintptr_t m_EndingForce = 0x1e4; // Vector
		}
	}
}
