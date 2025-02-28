#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMapVetoPickController {
			 uintptr_t m_bPlayedIntroVcd = 0x4e0; // bool
			 uintptr_t m_bNeedToPlayFiveSecondsRemaining = 0x4e1; // bool
			 uintptr_t m_dblPreMatchDraftSequenceTime = 0x500; // float64
			 uintptr_t m_bPreMatchDraftStateChanged = 0x508; // bool
			 uintptr_t m_nDraftType = 0x50c; // int32
			 uintptr_t m_nTeamWinningCoinToss = 0x510; // int32
			 uintptr_t m_nTeamWithFirstChoice = 0x514; // int32[64]
			 uintptr_t m_nVoteMapIdsList = 0x614; // int32[7]
			 uintptr_t m_nAccountIDs = 0x630; // int32[64]
			 uintptr_t m_nMapId0 = 0x730; // int32[64]
			 uintptr_t m_nMapId1 = 0x830; // int32[64]
			 uintptr_t m_nMapId2 = 0x930; // int32[64]
			 uintptr_t m_nMapId3 = 0xa30; // int32[64]
			 uintptr_t m_nMapId4 = 0xb30; // int32[64]
			 uintptr_t m_nMapId5 = 0xc30; // int32[64]
			 uintptr_t m_nStartingSide0 = 0xd30; // int32[64]
			 uintptr_t m_nCurrentPhase = 0xe30; // int32
			 uintptr_t m_nPhaseStartTick = 0xe34; // int32
			 uintptr_t m_nPhaseDurationTicks = 0xe38; // int32
			 uintptr_t m_OnMapVetoed = 0xe40; // CEntityOutputTemplate< CUtlSymbolLarge >
			 uintptr_t m_OnMapPicked = 0xe68; // CEntityOutputTemplate< CUtlSymbolLarge >
			 uintptr_t m_OnSidesPicked = 0xe90; // CEntityOutputTemplate< int32 >
			 uintptr_t m_OnNewPhaseStarted = 0xeb8; // CEntityOutputTemplate< int32 >
			 uintptr_t m_OnLevelTransition = 0xee0; // CEntityOutputTemplate< int32 >
		}
	}
}
