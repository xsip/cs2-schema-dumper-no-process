#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CEntityComponentHelper {
			 uintptr_t m_flags = 0x8; // uint32
			 uintptr_t m_pInfo = 0x10; // EntComponentInfo_t*
			 uintptr_t m_nPriority = 0x18; // int32
			 uintptr_t m_pNext = 0x20; // CEntityComponentHelper*
		}
	}
}
