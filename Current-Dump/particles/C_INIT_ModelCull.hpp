#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_ModelCull {
			 uintptr_t m_nControlPointNumber = 0x1c8; // int32
			 uintptr_t m_bBoundBox = 0x1cc; // bool
			 uintptr_t m_bCullOutside = 0x1cd; // bool
			 uintptr_t m_bUseBones = 0x1ce; // bool
			 uintptr_t m_HitboxSetName = 0x1cf; // char[128]
		}
	}
}
