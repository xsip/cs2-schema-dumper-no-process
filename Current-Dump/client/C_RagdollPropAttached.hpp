#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_RagdollPropAttached {
			 uintptr_t m_boneIndexAttached = 0x1000; // uint32
			 uintptr_t m_ragdollAttachedObjectIndex = 0x1004; // uint32
			 uintptr_t m_attachmentPointBoneSpace = 0x1008; // Vector
			 uintptr_t m_attachmentPointRagdollSpace = 0x1014; // Vector
			 uintptr_t m_vecOffset = 0x1020; // Vector
			 uintptr_t m_parentTime = 0x102c; // float32
			 uintptr_t m_bHasParent = 0x1030; // bool
		}
	}
}
