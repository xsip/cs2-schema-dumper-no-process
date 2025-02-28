#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvFade {
			 uintptr_t m_fadeColor = 0x4e0; // Color
			 uintptr_t m_Duration = 0x4e4; // float32
			 uintptr_t m_HoldDuration = 0x4e8; // float32
			 uintptr_t m_OnBeginFade = 0x4f0; // CEntityIOOutput
		}
	}
}
