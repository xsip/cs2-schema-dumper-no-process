#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBasePlayerController {
			 uintptr_t m_nInButtonsWhichAreToggles = 0x4e8;
			 uintptr_t m_nTickBase = 0x4f0;
			 uintptr_t m_hPawn = 0x520;
			 uintptr_t m_bKnownTeamMismatch = 0x524;
			 uintptr_t m_nSplitScreenSlot = 0x528;
			 uintptr_t m_hSplitOwner = 0x52c;
			 uintptr_t m_hSplitScreenPlayers = 0x530;
			 uintptr_t m_bIsHLTV = 0x548;
			 uintptr_t m_iConnected = 0x54c;
			 uintptr_t m_iszPlayerName = 0x550;
			 uintptr_t m_szNetworkIDString = 0x5d0;
			 uintptr_t m_fLerpTime = 0x5d8;
			 uintptr_t m_bLagCompensation = 0x5dc;
			 uintptr_t m_bPredict = 0x5dd;
			 uintptr_t m_bIsLowViolence = 0x5e4;
			 uintptr_t m_bGamePaused = 0x5e5;
			 uintptr_t m_iIgnoreGlobalChat = 0x720;
			 uintptr_t m_flLastPlayerTalkTime = 0x724;
			 uintptr_t m_flLastEntitySteadyState = 0x728;
			 uintptr_t m_nAvailableEntitySteadyState = 0x72c;
			 uintptr_t m_bHasAnySteadyStateEnts = 0x730;
			 uintptr_t m_steamID = 0x740;
			 uintptr_t m_iDesiredFOV = 0x748;
		}
	}
}
