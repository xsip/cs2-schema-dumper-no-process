#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSkyCamera {
			 uintptr_t m_skyboxData = 0x4e0; // sky3dparams_t
			 uintptr_t m_skyboxSlotToken = 0x570; // CUtlStringToken
			 uintptr_t m_bUseAngles = 0x574; // bool
			 uintptr_t m_pNext = 0x578; // CSkyCamera*
		}
	}
}
