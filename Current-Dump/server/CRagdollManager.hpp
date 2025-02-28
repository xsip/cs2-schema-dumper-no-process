#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CRagdollManager {
			 uintptr_t m_iCurrentMaxRagdollCount = 0x4e0; // int8
			 uintptr_t m_iMaxRagdollCount = 0x4e4; // int32
			 uintptr_t m_bSaveImportant = 0x4e8; // bool
			 uintptr_t m_bCanTakeDamage = 0x4e9; // bool
		}
	}
}
