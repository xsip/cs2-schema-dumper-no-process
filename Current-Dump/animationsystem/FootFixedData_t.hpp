#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace FootFixedData_t {
			 uintptr_t m_vToeOffset = 0x0; // VectorAligned
			 uintptr_t m_vHeelOffset = 0x10; // VectorAligned
			 uintptr_t m_nTargetBoneIndex = 0x20; // int32
			 uintptr_t m_nAnkleBoneIndex = 0x24; // int32
			 uintptr_t m_nIKAnchorBoneIndex = 0x28; // int32
			 uintptr_t m_ikChainIndex = 0x2c; // int32
			 uintptr_t m_flMaxIKLength = 0x30; // float32
			 uintptr_t m_nFootIndex = 0x34; // int32
			 uintptr_t m_nTagIndex = 0x38; // int32
			 uintptr_t m_flMaxRotationLeft = 0x3c; // float32
			 uintptr_t m_flMaxRotationRight = 0x40; // float32
		}
	}
}
