#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBot {
			 uintptr_t m_pController = 0x10; // CCSPlayerController*
			 uintptr_t m_pPlayer = 0x18; // CCSPlayerPawn*
			 uintptr_t m_bHasSpawned = 0x20; // bool
			 uintptr_t m_id = 0x24; // uint32
			 uintptr_t m_isRunning = 0xc0; // bool
			 uintptr_t m_isCrouching = 0xc1; // bool
			 uintptr_t m_forwardSpeed = 0xc4; // float32
			 uintptr_t m_leftSpeed = 0xc8; // float32
			 uintptr_t m_verticalSpeed = 0xcc; // float32
			 uintptr_t m_buttonFlags = 0xd0; // uint64
			 uintptr_t m_jumpTimestamp = 0xd8; // float32
			 uintptr_t m_viewForward = 0xdc; // Vector
			 uintptr_t m_postureStackIndex = 0xf8; // int32
		}
	}
}
