#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvSpark {
			 uintptr_t m_flDelay = 0x4e0; // float32
			 uintptr_t m_nMagnitude = 0x4e4; // int32
			 uintptr_t m_nTrailLength = 0x4e8; // int32
			 uintptr_t m_nType = 0x4ec; // int32
			 uintptr_t m_OnSpark = 0x4f0; // CEntityIOOutput
		}
	}
}
