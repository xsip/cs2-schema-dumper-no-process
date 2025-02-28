#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPlayer_ObserverServices {
			 uintptr_t m_iObserverMode = 0x40;
			 uintptr_t m_hObserverTarget = 0x44;
			 uintptr_t m_iObserverLastMode = 0x48;
			 uintptr_t m_bForcedObserverMode = 0x4c;
			 uintptr_t m_flObserverChaseDistance = 0x50;
			 uintptr_t m_flObserverChaseDistanceCalcTime = 0x54;
		}
	}
}
