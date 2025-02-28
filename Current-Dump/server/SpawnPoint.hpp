#include <Windows.h>


namespace xsip {
	namespace server {
		namespace SpawnPoint {
			 uintptr_t m_iPriority = 0x4e0; // int32
			 uintptr_t m_bEnabled = 0x4e4; // bool
			 uintptr_t m_nType = 0x4e8; // int32
		}
	}
}
