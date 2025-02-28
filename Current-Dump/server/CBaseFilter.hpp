#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseFilter {
			 uintptr_t m_bNegated = 0x4e0; // bool
			 uintptr_t m_OnPass = 0x4e8; // CEntityIOOutput
			 uintptr_t m_OnFail = 0x510; // CEntityIOOutput
		}
	}
}
