#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPlayer_ObserverServices {
			 uintptr_t m_iObserverMode = 0x40;
			 uintptr_t m_hObserverTarget = 0x44;
			 uintptr_t m_iObserverLastMode = 0x48;
			 uintptr_t m_bForcedObserverMode = 0x4c;
		}
	}
}
