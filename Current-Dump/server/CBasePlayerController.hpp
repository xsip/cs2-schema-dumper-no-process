#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBasePlayerController {
			 uintptr_t m_nInButtonsWhichAreToggles = 0x4e8; // uint64
			 uintptr_t m_nTickBase = 0x4f0; // uint32
			 uintptr_t m_hPawn = 0x520; // CHandle< CBasePlayerPawn >
			 uintptr_t m_bKnownTeamMismatch = 0x524; // bool
			 uintptr_t m_nSplitScreenSlot = 0x528; // CSplitScreenSlot
			 uintptr_t m_hSplitOwner = 0x52c; // CHandle< CBasePlayerController >
			 uintptr_t m_hSplitScreenPlayers = 0x530; // CUtlVector< CHandle< CBasePlayerController > >
			 uintptr_t m_bIsHLTV = 0x548; // bool
			 uintptr_t m_iConnected = 0x54c; // PlayerConnectedState
			 uintptr_t m_iszPlayerName = 0x550; // char[128]
			 uintptr_t m_szNetworkIDString = 0x5d0; // CUtlString
			 uintptr_t m_fLerpTime = 0x5d8; // float32
			 uintptr_t m_bLagCompensation = 0x5dc; // bool
			 uintptr_t m_bPredict = 0x5dd; // bool
			 uintptr_t m_bIsLowViolence = 0x5e4; // bool
			 uintptr_t m_bGamePaused = 0x5e5; // bool
			 uintptr_t m_iIgnoreGlobalChat = 0x720; // ChatIgnoreType_t
			 uintptr_t m_flLastPlayerTalkTime = 0x724; // float32
			 uintptr_t m_flLastEntitySteadyState = 0x728; // float32
			 uintptr_t m_nAvailableEntitySteadyState = 0x72c; // int32
			 uintptr_t m_bHasAnySteadyStateEnts = 0x730; // bool
			 uintptr_t m_steamID = 0x740; // uint64
			 uintptr_t m_iDesiredFOV = 0x748; // uint32
		}
	}
}
