#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CBasePlayerController {
			 uintptr_t m_nFinalPredictedTick = 0x570; // int32
			 uintptr_t m_CommandContext = 0x578; // C_CommandContext
			 uintptr_t m_nInButtonsWhichAreToggles = 0x620; // uint64
			 uintptr_t m_nTickBase = 0x628; // uint32
			 uintptr_t m_hPawn = 0x62c; // CHandle< C_BasePlayerPawn >
			 uintptr_t m_bKnownTeamMismatch = 0x630; // bool
			 uintptr_t m_hPredictedPawn = 0x634; // CHandle< C_BasePlayerPawn >
			 uintptr_t m_nSplitScreenSlot = 0x638; // CSplitScreenSlot
			 uintptr_t m_hSplitOwner = 0x63c; // CHandle< CBasePlayerController >
			 uintptr_t m_hSplitScreenPlayers = 0x640; // CUtlVector< CHandle< CBasePlayerController > >
			 uintptr_t m_bIsHLTV = 0x658; // bool
			 uintptr_t m_iConnected = 0x65c; // PlayerConnectedState
			 uintptr_t m_iszPlayerName = 0x660; // char[128]
			 uintptr_t m_steamID = 0x6e8; // uint64
			 uintptr_t m_bIsLocalPlayerController = 0x6f0; // bool
			 uintptr_t m_iDesiredFOV = 0x6f4; // uint32
		}
	}
}
