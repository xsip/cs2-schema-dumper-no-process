#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CHintMessageQueue {
			 uintptr_t m_tmMessageEnd = 0x0; // float32
			 uintptr_t m_messages = 0x8; // CUtlVector< CHintMessage* >
			 uintptr_t m_pPlayerController = 0x20; // CBasePlayerController*
		}
	}
}
