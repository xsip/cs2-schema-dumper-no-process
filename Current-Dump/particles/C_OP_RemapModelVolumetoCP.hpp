#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapModelVolumetoCP {
			 uintptr_t m_nBBoxType = 0x1c8; // BBoxVolumeType_t
			 uintptr_t m_nInControlPointNumber = 0x1cc; // int32
			 uintptr_t m_nOutControlPointNumber = 0x1d0; // int32
			 uintptr_t m_nOutControlPointMaxNumber = 0x1d4; // int32
			 uintptr_t m_nField = 0x1d8; // int32
			 uintptr_t m_flInputMin = 0x1dc; // float32
			 uintptr_t m_flInputMax = 0x1e0; // float32
			 uintptr_t m_flOutputMin = 0x1e4; // float32
			 uintptr_t m_flOutputMax = 0x1e8; // float32
			 uintptr_t m_bBBoxOnly = 0x1ec; // bool
			 uintptr_t m_bCubeRoot = 0x1ed; // bool
		}
	}
}
