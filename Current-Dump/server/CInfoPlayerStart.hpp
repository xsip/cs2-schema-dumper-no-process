#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CInfoPlayerStart {
			 uintptr_t m_bDisabled = 0x4e0; // bool
			 uintptr_t m_bIsMaster = 0x4e1; // bool
			 uintptr_t m_pPawnSubclass = 0x4e8; // CGlobalSymbol
		}
	}
}
