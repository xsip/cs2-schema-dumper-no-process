#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_AgeNoise {
			 uintptr_t m_bAbsVal = 0x1c8; // bool
			 uintptr_t m_bAbsValInv = 0x1c9; // bool
			 uintptr_t m_flOffset = 0x1cc; // float32
			 uintptr_t m_flAgeMin = 0x1d0; // float32
			 uintptr_t m_flAgeMax = 0x1d4; // float32
			 uintptr_t m_flNoiseScale = 0x1d8; // float32
			 uintptr_t m_flNoiseScaleLoc = 0x1dc; // float32
			 uintptr_t m_vecOffsetLoc = 0x1e0; // Vector
		}
	}
}
