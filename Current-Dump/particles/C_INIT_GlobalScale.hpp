#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_GlobalScale {
			 uintptr_t m_flScale = 0x1c8; // float32
			 uintptr_t m_nScaleControlPointNumber = 0x1cc; // int32
			 uintptr_t m_nControlPointNumber = 0x1d0; // int32
			 uintptr_t m_bScaleRadius = 0x1d4; // bool
			 uintptr_t m_bScalePosition = 0x1d5; // bool
			 uintptr_t m_bScaleVelocity = 0x1d6; // bool
		}
	}
}
