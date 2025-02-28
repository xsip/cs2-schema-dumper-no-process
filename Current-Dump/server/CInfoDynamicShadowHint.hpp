#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CInfoDynamicShadowHint {
			 uintptr_t m_bDisabled = 0x4e0; // bool
			 uintptr_t m_flRange = 0x4e4; // float32
			 uintptr_t m_nImportance = 0x4e8; // int32
			 uintptr_t m_nLightChoice = 0x4ec; // int32
			 uintptr_t m_hLight = 0x4f0; // CHandle< CBaseEntity >
		}
	}
}
