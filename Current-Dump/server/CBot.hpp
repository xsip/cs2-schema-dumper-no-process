#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBot {
			 uintptr_t m_pController = 0x10;
			 uintptr_t m_pPlayer = 0x18;
			 uintptr_t m_bHasSpawned = 0x20;
			 uintptr_t m_id = 0x24;
			 uintptr_t m_isRunning = 0xc0;
			 uintptr_t m_isCrouching = 0xc1;
			 uintptr_t m_forwardSpeed = 0xc4;
			 uintptr_t m_leftSpeed = 0xc8;
			 uintptr_t m_verticalSpeed = 0xcc;
			 uintptr_t m_buttonFlags = 0xd0;
			 uintptr_t m_jumpTimestamp = 0xd8;
			 uintptr_t m_viewForward = 0xdc;
			 uintptr_t m_postureStackIndex = 0xf8;
		}
	}
}
