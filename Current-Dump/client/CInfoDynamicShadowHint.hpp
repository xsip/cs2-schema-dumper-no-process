#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CInfoDynamicShadowHint {
			 uintptr_t m_bDisabled = 0x568; // bool
			 uintptr_t m_flRange = 0x56c; // float32
			 uintptr_t m_nImportance = 0x570; // int32
			 uintptr_t m_nLightChoice = 0x574; // int32
			 uintptr_t m_hLight = 0x578; // CHandle< C_BaseEntity >
		}
	}
}
