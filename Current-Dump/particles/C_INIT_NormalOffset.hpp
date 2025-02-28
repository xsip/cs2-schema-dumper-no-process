#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_NormalOffset {
			 uintptr_t m_OffsetMin = 0x1c8; // Vector
			 uintptr_t m_OffsetMax = 0x1d4; // Vector
			 uintptr_t m_nControlPointNumber = 0x1e0; // int32
			 uintptr_t m_bLocalCoords = 0x1e4; // bool
			 uintptr_t m_bNormalize = 0x1e5; // bool
		}
	}
}
