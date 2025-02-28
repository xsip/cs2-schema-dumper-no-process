#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_MapVetoPickController {
			 uintptr_t m_nDraftType = 0x578; // int32
			 uintptr_t m_nTeamWinningCoinToss = 0x57c; // int32
			 uintptr_t m_nTeamWithFirstChoice = 0x580; // int32[64]
			 uintptr_t m_nVoteMapIdsList = 0x680; // int32[7]
			 uintptr_t m_nAccountIDs = 0x69c; // int32[64]
			 uintptr_t m_nMapId0 = 0x79c; // int32[64]
			 uintptr_t m_nMapId1 = 0x89c; // int32[64]
			 uintptr_t m_nMapId2 = 0x99c; // int32[64]
			 uintptr_t m_nMapId3 = 0xa9c; // int32[64]
			 uintptr_t m_nMapId4 = 0xb9c; // int32[64]
			 uintptr_t m_nMapId5 = 0xc9c; // int32[64]
			 uintptr_t m_nStartingSide0 = 0xd9c; // int32[64]
			 uintptr_t m_nCurrentPhase = 0xe9c; // int32
			 uintptr_t m_nPhaseStartTick = 0xea0; // int32
			 uintptr_t m_nPhaseDurationTicks = 0xea4; // int32
			 uintptr_t m_nPostDataUpdateTick = 0xea8; // int32
			 uintptr_t m_bDisabledHud = 0xeac; // bool
		}
	}
}
