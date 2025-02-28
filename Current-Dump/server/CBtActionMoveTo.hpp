#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBtActionMoveTo {
			 uintptr_t m_szDestinationInputKey = 0x60; // CUtlString
			 uintptr_t m_szHidingSpotInputKey = 0x68; // CUtlString
			 uintptr_t m_szThreatInputKey = 0x70; // CUtlString
			 uintptr_t m_vecDestination = 0x78; // Vector
			 uintptr_t m_bAutoLookAdjust = 0x84; // bool
			 uintptr_t m_bComputePath = 0x85; // bool
			 uintptr_t m_flDamagingAreasPenaltyCost = 0x88; // float32
			 uintptr_t m_CheckApproximateCornersTimer = 0x90; // CountdownTimer
			 uintptr_t m_CheckHighPriorityItem = 0xa8; // CountdownTimer
			 uintptr_t m_RepathTimer = 0xc0; // CountdownTimer
			 uintptr_t m_flArrivalEpsilon = 0xd8; // float32
			 uintptr_t m_flAdditionalArrivalEpsilon2D = 0xdc; // float32
			 uintptr_t m_flHidingSpotCheckDistanceThreshold = 0xe0; // float32
			 uintptr_t m_flNearestAreaDistanceThreshold = 0xe4; // float32
		}
	}
}
