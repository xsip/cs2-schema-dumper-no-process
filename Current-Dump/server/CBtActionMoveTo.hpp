#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBtActionMoveTo {
			 uintptr_t m_szDestinationInputKey = 0x60;
			 uintptr_t m_szHidingSpotInputKey = 0x68;
			 uintptr_t m_szThreatInputKey = 0x70;
			 uintptr_t m_vecDestination = 0x78;
			 uintptr_t m_bAutoLookAdjust = 0x84;
			 uintptr_t m_bComputePath = 0x85;
			 uintptr_t m_flDamagingAreasPenaltyCost = 0x88;
			 uintptr_t m_CheckApproximateCornersTimer = 0x90;
			 uintptr_t m_CheckHighPriorityItem = 0xa8;
			 uintptr_t m_RepathTimer = 0xc0;
			 uintptr_t m_flArrivalEpsilon = 0xd8;
			 uintptr_t m_flAdditionalArrivalEpsilon2D = 0xdc;
			 uintptr_t m_flHidingSpotCheckDistanceThreshold = 0xe0;
			 uintptr_t m_flNearestAreaDistanceThreshold = 0xe4;
		}
	}
}
