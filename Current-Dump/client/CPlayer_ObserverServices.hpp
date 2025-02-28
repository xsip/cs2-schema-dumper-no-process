#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPlayer_ObserverServices {
			 uintptr_t m_iObserverMode = 0x40; // uint8
			 uintptr_t m_hObserverTarget = 0x44; // CHandle< C_BaseEntity >
			 uintptr_t m_iObserverLastMode = 0x48; // ObserverMode_t
			 uintptr_t m_bForcedObserverMode = 0x4c; // bool
			 uintptr_t m_flObserverChaseDistance = 0x50; // float32
			 uintptr_t m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
		}
	}
}
