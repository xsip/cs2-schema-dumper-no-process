#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CCSPlayerController {
			 uintptr_t m_pInGameMoneyServices = 0x720; // CCSPlayerController_InGameMoneyServices*
			 uintptr_t m_pInventoryServices = 0x728; // CCSPlayerController_InventoryServices*
			 uintptr_t m_pActionTrackingServices = 0x730; // CCSPlayerController_ActionTrackingServices*
			 uintptr_t m_pDamageServices = 0x738; // CCSPlayerController_DamageServices*
			 uintptr_t m_iPing = 0x740; // uint32
			 uintptr_t m_bHasCommunicationAbuseMute = 0x744; // bool
			 uintptr_t m_szCrosshairCodes = 0x748; // CUtlSymbolLarge
			 uintptr_t m_iPendingTeamNum = 0x750; // uint8
			 uintptr_t m_flForceTeamTime = 0x754; // GameTime_t
			 uintptr_t m_iCompTeammateColor = 0x758; // int32
			 uintptr_t m_bEverPlayedOnTeam = 0x75c; // bool
			 uintptr_t m_flPreviousForceJoinTeamTime = 0x760; // GameTime_t
			 uintptr_t m_szClan = 0x768; // CUtlSymbolLarge
			 uintptr_t m_sSanitizedPlayerName = 0x770; // CUtlString
			 uintptr_t m_iCoachingTeam = 0x778; // int32
			 uintptr_t m_nPlayerDominated = 0x780; // uint64
			 uintptr_t m_nPlayerDominatingMe = 0x788; // uint64
			 uintptr_t m_iCompetitiveRanking = 0x790; // int32
			 uintptr_t m_iCompetitiveWins = 0x794; // int32
			 uintptr_t m_iCompetitiveRankType = 0x798; // int8
			 uintptr_t m_iCompetitiveRankingPredicted_Win = 0x79c; // int32
			 uintptr_t m_iCompetitiveRankingPredicted_Loss = 0x7a0; // int32
			 uintptr_t m_iCompetitiveRankingPredicted_Tie = 0x7a4; // int32
			 uintptr_t m_nEndMatchNextMapVote = 0x7a8; // int32
			 uintptr_t m_unActiveQuestId = 0x7ac; // uint16
			 uintptr_t m_nQuestProgressReason = 0x7b0; // QuestProgress::Reason
			 uintptr_t m_unPlayerTvControlFlags = 0x7b4; // uint32
			 uintptr_t m_iDraftIndex = 0x7e0; // int32
			 uintptr_t m_msQueuedModeDisconnectionTimestamp = 0x7e4; // uint32
			 uintptr_t m_uiAbandonRecordedReason = 0x7e8; // uint32
			 uintptr_t m_bCannotBeKicked = 0x7ec; // bool
			 uintptr_t m_bEverFullyConnected = 0x7ed; // bool
			 uintptr_t m_bAbandonAllowsSurrender = 0x7ee; // bool
			 uintptr_t m_bAbandonOffersInstantSurrender = 0x7ef; // bool
			 uintptr_t m_bDisconnection1MinWarningPrinted = 0x7f0; // bool
			 uintptr_t m_bScoreReported = 0x7f1; // bool
			 uintptr_t m_nDisconnectionTick = 0x7f4; // int32
			 uintptr_t m_bControllingBot = 0x800; // bool
			 uintptr_t m_bHasControlledBotThisRound = 0x801; // bool
			 uintptr_t m_bHasBeenControlledByPlayerThisRound = 0x802; // bool
			 uintptr_t m_nBotsControlledThisRound = 0x804; // int32
			 uintptr_t m_bCanControlObservedBot = 0x808; // bool
			 uintptr_t m_hPlayerPawn = 0x80c; // CHandle< C_CSPlayerPawn >
			 uintptr_t m_hObserverPawn = 0x810; // CHandle< C_CSObserverPawn >
			 uintptr_t m_bPawnIsAlive = 0x814; // bool
			 uintptr_t m_iPawnHealth = 0x818; // uint32
			 uintptr_t m_iPawnArmor = 0x81c; // int32
			 uintptr_t m_bPawnHasDefuser = 0x820; // bool
			 uintptr_t m_bPawnHasHelmet = 0x821; // bool
			 uintptr_t m_nPawnCharacterDefIndex = 0x822; // uint16
			 uintptr_t m_iPawnLifetimeStart = 0x824; // int32
			 uintptr_t m_iPawnLifetimeEnd = 0x828; // int32
			 uintptr_t m_iPawnBotDifficulty = 0x82c; // int32
			 uintptr_t m_hOriginalControllerOfCurrentPawn = 0x830; // CHandle< CCSPlayerController >
			 uintptr_t m_iScore = 0x834; // int32
			 uintptr_t m_recentKillQueue = 0x838; // uint8[8]
			 uintptr_t m_nFirstKill = 0x840; // uint8
			 uintptr_t m_nKillCount = 0x841; // uint8
			 uintptr_t m_bMvpNoMusic = 0x842; // bool
			 uintptr_t m_eMvpReason = 0x844; // int32
			 uintptr_t m_iMusicKitID = 0x848; // int32
			 uintptr_t m_iMusicKitMVPs = 0x84c; // int32
			 uintptr_t m_iMVPs = 0x850; // int32
			 uintptr_t m_bIsPlayerNameDirty = 0x854; // bool
			 uintptr_t m_bFireBulletsSeedSynchronized = 0x855; // bool
		}
	}
}
