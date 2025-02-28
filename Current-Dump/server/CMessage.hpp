#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMessage {
			 uintptr_t m_iszMessage = 0x4e0; // CUtlSymbolLarge
			 uintptr_t m_MessageVolume = 0x4e8; // float32
			 uintptr_t m_MessageAttenuation = 0x4ec; // int32
			 uintptr_t m_Radius = 0x4f0; // float32
			 uintptr_t m_sNoise = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_OnShowMessage = 0x500; // CEntityIOOutput
		}
	}
}
