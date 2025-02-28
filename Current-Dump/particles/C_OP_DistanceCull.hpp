#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_DistanceCull {
			 uintptr_t m_nControlPoint = 0x1c0; // int32
			 uintptr_t m_vecPointOffset = 0x1c4; // Vector
			 uintptr_t m_flDistance = 0x1d0; // float32
			 uintptr_t m_bCullInside = 0x1d4; // bool
		}
	}
}
