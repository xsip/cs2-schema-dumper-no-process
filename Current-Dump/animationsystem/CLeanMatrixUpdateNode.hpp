#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CLeanMatrixUpdateNode {
			 uintptr_t m_frameCorners = 0x5c; // int32[3][3]
			 uintptr_t m_poses = 0x80; // CPoseHandle[9]
			 uintptr_t m_damping = 0xa8; // CAnimInputDamping
			 uintptr_t m_blendSource = 0xb8; // AnimVectorSource
			 uintptr_t m_paramIndex = 0xbc; // CAnimParamHandle
			 uintptr_t m_verticalAxis = 0xc0; // Vector
			 uintptr_t m_horizontalAxis = 0xcc; // Vector
			 uintptr_t m_hSequence = 0xd8; // HSequence
			 uintptr_t m_flMaxValue = 0xdc; // float32
			 uintptr_t m_nSequenceMaxFrame = 0xe0; // int32
		}
	}
}
