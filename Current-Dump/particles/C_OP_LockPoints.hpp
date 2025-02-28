#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_LockPoints {
			 uintptr_t m_nMinCol = 0x1c0; // int32
			 uintptr_t m_nMaxCol = 0x1c4; // int32
			 uintptr_t m_nMinRow = 0x1c8; // int32
			 uintptr_t m_nMaxRow = 0x1cc; // int32
			 uintptr_t m_nControlPoint = 0x1d0; // int32
			 uintptr_t m_flBlendValue = 0x1d4; // float32
		}
	}
}
