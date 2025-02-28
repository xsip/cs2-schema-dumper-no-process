#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PlayerPing {
			 uintptr_t m_hPlayer = 0x598; // CHandle< C_CSPlayerPawn >
			 uintptr_t m_hPingedEntity = 0x59c; // CHandle< C_BaseEntity >
			 uintptr_t m_iType = 0x5a0; // int32
			 uintptr_t m_bUrgent = 0x5a4; // bool
			 uintptr_t m_szPlaceName = 0x5a5; // char[18]
		}
	}
}
