#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPlayerPing {
			 uintptr_t m_hPlayer = 0x4e8; // CHandle< CCSPlayerPawn >
			 uintptr_t m_hPingedEntity = 0x4ec; // CHandle< CBaseEntity >
			 uintptr_t m_iType = 0x4f0; // int32
			 uintptr_t m_bUrgent = 0x4f4; // bool
			 uintptr_t m_szPlaceName = 0x4f5; // char[18]
		}
	}
}
