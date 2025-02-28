#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CC4 {
			 uintptr_t m_vecLastValidPlayerHeldPosition = 0xfa0; // Vector
			 uintptr_t m_vecLastValidDroppedPosition = 0xfac; // Vector
			 uintptr_t m_bDoValidDroppedPositionCheck = 0xfb8; // bool
			 uintptr_t m_bStartedArming = 0xfb9; // bool
			 uintptr_t m_fArmedTime = 0xfbc; // GameTime_t
			 uintptr_t m_bBombPlacedAnimation = 0xfc0; // bool
			 uintptr_t m_bIsPlantingViaUse = 0xfc1; // bool
			 uintptr_t m_entitySpottedState = 0xfc8; // EntitySpottedState_t
			 uintptr_t m_nSpotRules = 0xfe0; // int32
			 uintptr_t m_bPlayedArmingBeeps = 0xfe4; // bool[7]
			 uintptr_t m_bBombPlanted = 0xfeb; // bool
		}
	}
}
