#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMapVetoPickController {
			 uintptr_t m_bPlayedIntroVcd = 0x4e0;
			 uintptr_t m_bNeedToPlayFiveSecondsRemaining = 0x4e1;
			 uintptr_t m_dblPreMatchDraftSequenceTime = 0x500;
			 uintptr_t m_bPreMatchDraftStateChanged = 0x508;
			 uintptr_t m_nDraftType = 0x50c;
			 uintptr_t m_nTeamWinningCoinToss = 0x510;
			 uintptr_t m_nTeamWithFirstChoice = 0x514;
			 uintptr_t m_nVoteMapIdsList = 0x614;
			 uintptr_t m_nAccountIDs = 0x630;
			 uintptr_t m_nMapId0 = 0x730;
			 uintptr_t m_nMapId1 = 0x830;
			 uintptr_t m_nMapId2 = 0x930;
			 uintptr_t m_nMapId3 = 0xa30;
			 uintptr_t m_nMapId4 = 0xb30;
			 uintptr_t m_nMapId5 = 0xc30;
			 uintptr_t m_nStartingSide0 = 0xd30;
			 uintptr_t m_nCurrentPhase = 0xe30;
			 uintptr_t m_nPhaseStartTick = 0xe34;
			 uintptr_t m_nPhaseDurationTicks = 0xe38;
			 uintptr_t m_OnMapVetoed = 0xe40;
			 uintptr_t m_OnMapPicked = 0xe68;
			 uintptr_t m_OnSidesPicked = 0xe90;
			 uintptr_t m_OnNewPhaseStarted = 0xeb8;
			 uintptr_t m_OnLevelTransition = 0xee0;
		}
	}
}
