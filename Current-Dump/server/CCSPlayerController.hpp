#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayerController {
			 uintptr_t m_pInGameMoneyServices = 0x788; // CCSPlayerController_InGameMoneyServices*
			 uintptr_t m_pInventoryServices = 0x790; // CCSPlayerController_InventoryServices*
			 uintptr_t m_pActionTrackingServices = 0x798; // CCSPlayerController_ActionTrackingServices*
			 uintptr_t m_pDamageServices = 0x7a0; // CCSPlayerController_DamageServices*
			 uintptr_t m_iPing = 0x7a8; // uint32
			 uintptr_t m_bHasCommunicationAbuseMute = 0x7ac; // bool
			 uintptr_t m_szCrosshairCodes = 0x7b0; // CUtlSymbolLarge
			 uintptr_t m_iPendingTeamNum = 0x7b8; // uint8
			 uintptr_t m_flForceTeamTime = 0x7bc; // GameTime_t
			 uintptr_t m_iCompTeammateColor = 0x7c0; // int32
			 uintptr_t m_bEverPlayedOnTeam = 0x7c4; // bool
			 uintptr_t m_bAttemptedToGetColor = 0x7c5; // bool
			 uintptr_t m_iTeammatePreferredColor = 0x7c8; // int32
			 uintptr_t m_bTeamChanged = 0x7cc; // bool
			 uintptr_t m_bInSwitchTeam = 0x7cd; // bool
			 uintptr_t m_bHasSeenJoinGame = 0x7ce; // bool
			 uintptr_t m_bJustBecameSpectator = 0x7cf; // bool
			 uintptr_t m_bSwitchTeamsOnNextRoundReset = 0x7d0; // bool
			 uintptr_t m_bRemoveAllItemsOnNextRoundReset = 0x7d1; // bool
			 uintptr_t m_flLastJoinTeamTime = 0x7d4; // GameTime_t
			 uintptr_t m_szClan = 0x7d8; // CUtlSymbolLarge
			 uintptr_t m_szClanName = 0x7e0; // char[32]
			 uintptr_t m_iCoachingTeam = 0x800; // int32
			 uintptr_t m_nPlayerDominated = 0x808; // uint64
			 uintptr_t m_nPlayerDominatingMe = 0x810; // uint64
			 uintptr_t m_iCompetitiveRanking = 0x818; // int32
			 uintptr_t m_iCompetitiveWins = 0x81c; // int32
			 uintptr_t m_iCompetitiveRankType = 0x820; // int8
			 uintptr_t m_iCompetitiveRankingPredicted_Win = 0x824; // int32
			 uintptr_t m_iCompetitiveRankingPredicted_Loss = 0x828; // int32
			 uintptr_t m_iCompetitiveRankingPredicted_Tie = 0x82c; // int32
			 uintptr_t m_nEndMatchNextMapVote = 0x830; // int32
			 uintptr_t m_unActiveQuestId = 0x834; // uint16
			 uintptr_t m_nQuestProgressReason = 0x838; // QuestProgress::Reason
			 uintptr_t m_unPlayerTvControlFlags = 0x83c; // uint32
			 uintptr_t m_iDraftIndex = 0x868; // int32
			 uintptr_t m_msQueuedModeDisconnectionTimestamp = 0x86c; // uint32
			 uintptr_t m_uiAbandonRecordedReason = 0x870; // uint32
			 uintptr_t m_bCannotBeKicked = 0x874; // bool
			 uintptr_t m_bEverFullyConnected = 0x875; // bool
			 uintptr_t m_bAbandonAllowsSurrender = 0x876; // bool
			 uintptr_t m_bAbandonOffersInstantSurrender = 0x877; // bool
			 uintptr_t m_bDisconnection1MinWarningPrinted = 0x878; // bool
			 uintptr_t m_bScoreReported = 0x879; // bool
			 uintptr_t m_nDisconnectionTick = 0x87c; // int32
			 uintptr_t m_bControllingBot = 0x888; // bool
			 uintptr_t m_bHasControlledBotThisRound = 0x889; // bool
			 uintptr_t m_bHasBeenControlledByPlayerThisRound = 0x88a; // bool
			 uintptr_t m_nBotsControlledThisRound = 0x88c; // int32
			 uintptr_t m_bCanControlObservedBot = 0x890; // bool
			 uintptr_t m_hPlayerPawn = 0x894; // CHandle< CCSPlayerPawn >
			 uintptr_t m_hObserverPawn = 0x898; // CHandle< CCSObserverPawn >
			 uintptr_t m_DesiredObserverMode = 0x89c; // int32
			 uintptr_t m_hDesiredObserverTarget = 0x8a0; // CEntityHandle
			 uintptr_t m_bPawnIsAlive = 0x8a4; // bool
			 uintptr_t m_iPawnHealth = 0x8a8; // uint32
			 uintptr_t m_iPawnArmor = 0x8ac; // int32
			 uintptr_t m_bPawnHasDefuser = 0x8b0; // bool
			 uintptr_t m_bPawnHasHelmet = 0x8b1; // bool
			 uintptr_t m_nPawnCharacterDefIndex = 0x8b2; // uint16
			 uintptr_t m_iPawnLifetimeStart = 0x8b4; // int32
			 uintptr_t m_iPawnLifetimeEnd = 0x8b8; // int32
			 uintptr_t m_iPawnBotDifficulty = 0x8bc; // int32
			 uintptr_t m_hOriginalControllerOfCurrentPawn = 0x8c0; // CHandle< CCSPlayerController >
			 uintptr_t m_iScore = 0x8c4; // int32
			 uintptr_t m_iRoundScore = 0x8c8; // int32
			 uintptr_t m_iRoundsWon = 0x8cc; // int32
			 uintptr_t m_recentKillQueue = 0x8d0; // uint8[8]
			 uintptr_t m_nFirstKill = 0x8d8; // uint8
			 uintptr_t m_nKillCount = 0x8d9; // uint8
			 uintptr_t m_bMvpNoMusic = 0x8da; // bool
			 uintptr_t m_eMvpReason = 0x8dc; // int32
			 uintptr_t m_iMusicKitID = 0x8e0; // int32
			 uintptr_t m_iMusicKitMVPs = 0x8e4; // int32
			 uintptr_t m_iMVPs = 0x8e8; // int32
			 uintptr_t m_nUpdateCounter = 0x8ec; // int32
			 uintptr_t m_flSmoothedPing = 0x8f0; // float32
			 uintptr_t m_lastHeldVoteTimer = 0xf998; // IntervalTimer
			 uintptr_t m_bShowHints = 0xf9b0; // bool
			 uintptr_t m_iNextTimeCheck = 0xf9b4; // int32
			 uintptr_t m_bJustDidTeamKill = 0xf9b8; // bool
			 uintptr_t m_bPunishForTeamKill = 0xf9b9; // bool
			 uintptr_t m_bGaveTeamDamageWarning = 0xf9ba; // bool
			 uintptr_t m_bGaveTeamDamageWarningThisRound = 0xf9bb; // bool
			 uintptr_t m_dblLastReceivedPacketPlatFloatTime = 0xf9c0; // float64
			 uintptr_t m_LastTeamDamageWarningTime = 0xf9c8; // GameTime_t
			 uintptr_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xf9cc; // GameTime_t
			 uintptr_t m_nSuspiciousHitCount = 0xf9d0; // uint32
			 uintptr_t m_nNonSuspiciousHitStreak = 0xf9d4; // uint32
			 uintptr_t m_bFireBulletsSeedSynchronized = 0xfa79; // bool
		}
	}
}
