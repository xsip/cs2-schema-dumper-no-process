#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CConstraintTarget {
			 uintptr_t m_qOffset = 0x20; // Quaternion
			 uintptr_t m_vOffset = 0x30; // Vector
			 uintptr_t m_nBoneHash = 0x3c; // uint32
			 uintptr_t m_sName = 0x40; // CUtlString
			 uintptr_t m_flWeight = 0x48; // float32
			 uintptr_t m_bIsAttachment = 0x59; // bool
		}
	}
}
