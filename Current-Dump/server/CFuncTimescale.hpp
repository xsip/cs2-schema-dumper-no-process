#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncTimescale {
			 uintptr_t m_flDesiredTimescale = 0x4e0; // float32
			 uintptr_t m_flAcceleration = 0x4e4; // float32
			 uintptr_t m_flMinBlendRate = 0x4e8; // float32
			 uintptr_t m_flBlendDeltaMultiplier = 0x4ec; // float32
			 uintptr_t m_isStarted = 0x4f0; // bool
		}
	}
}
