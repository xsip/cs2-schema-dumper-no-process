#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CC4 {
			 uintptr_t m_vecLastValidPlayerHeldPosition = 0xfa0;
			 uintptr_t m_vecLastValidDroppedPosition = 0xfac;
			 uintptr_t m_bDoValidDroppedPositionCheck = 0xfb8;
			 uintptr_t m_bStartedArming = 0xfb9;
			 uintptr_t m_fArmedTime = 0xfbc;
			 uintptr_t m_bBombPlacedAnimation = 0xfc0;
			 uintptr_t m_bIsPlantingViaUse = 0xfc1;
			 uintptr_t m_entitySpottedState = 0xfc8;
			 uintptr_t m_nSpotRules = 0xfe0;
			 uintptr_t m_bPlayedArmingBeeps = 0xfe4;
			 uintptr_t m_bBombPlanted = 0xfeb;
		}
	}
}
