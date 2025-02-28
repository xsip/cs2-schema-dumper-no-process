#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CRagdollPropAttached {
			 uintptr_t m_boneIndexAttached = 0xb48; // uint32
			 uintptr_t m_ragdollAttachedObjectIndex = 0xb4c; // uint32
			 uintptr_t m_attachmentPointBoneSpace = 0xb50; // Vector
			 uintptr_t m_attachmentPointRagdollSpace = 0xb5c; // Vector
			 uintptr_t m_bShouldDetach = 0xb68; // bool
			 uintptr_t m_bShouldDeleteAttachedActivationRecord = 0xb78; // bool
		}
	}
}
