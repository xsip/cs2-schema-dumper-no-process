#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetControlPointPositions {
			 uintptr_t m_bUseWorldLocation = 0x1c8; // bool
			 uintptr_t m_bOrient = 0x1c9; // bool
			 uintptr_t m_bSetOnce = 0x1ca; // bool
			 uintptr_t m_nCP1 = 0x1cc; // int32
			 uintptr_t m_nCP2 = 0x1d0; // int32
			 uintptr_t m_nCP3 = 0x1d4; // int32
			 uintptr_t m_nCP4 = 0x1d8; // int32
			 uintptr_t m_vecCP1Pos = 0x1dc; // Vector
			 uintptr_t m_vecCP2Pos = 0x1e8; // Vector
			 uintptr_t m_vecCP3Pos = 0x1f4; // Vector
			 uintptr_t m_vecCP4Pos = 0x200; // Vector
			 uintptr_t m_nHeadLocation = 0x20c; // int32
		}
	}
}
