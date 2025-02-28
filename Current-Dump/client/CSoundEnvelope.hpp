#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CSoundEnvelope {
			 uintptr_t m_current = 0x0; // float32
			 uintptr_t m_target = 0x4; // float32
			 uintptr_t m_rate = 0x8; // float32
			 uintptr_t m_forceupdate = 0xc; // bool
		}
	}
}
