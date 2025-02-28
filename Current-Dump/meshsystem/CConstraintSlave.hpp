#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CConstraintSlave {
			 uintptr_t m_qBaseOrientation = 0x0; // Quaternion
			 uintptr_t m_vBasePosition = 0x10; // Vector
			 uintptr_t m_nBoneHash = 0x1c; // uint32
			 uintptr_t m_flWeight = 0x20; // float32
			 uintptr_t m_sName = 0x28; // CUtlString
		}
	}
}
