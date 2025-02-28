#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CVoteController {
			 uintptr_t m_iActiveIssueIndex = 0x4e0; // int32
			 uintptr_t m_iOnlyTeamToVote = 0x4e4; // int32
			 uintptr_t m_nVoteOptionCount = 0x4e8; // int32[5]
			 uintptr_t m_nPotentialVotes = 0x4fc; // int32
			 uintptr_t m_bIsYesNoVote = 0x500; // bool
			 uintptr_t m_acceptingVotesTimer = 0x508; // CountdownTimer
			 uintptr_t m_executeCommandTimer = 0x520; // CountdownTimer
			 uintptr_t m_resetVoteTimer = 0x538; // CountdownTimer
			 uintptr_t m_nVotesCast = 0x550; // int32[64]
			 uintptr_t m_playerHoldingVote = 0x650; // CPlayerSlot
			 uintptr_t m_playerOverrideForVote = 0x654; // CPlayerSlot
			 uintptr_t m_nHighestCountIndex = 0x658; // int32
			 uintptr_t m_potentialIssues = 0x660; // CUtlVector< CBaseIssue* >
			 uintptr_t m_VoteOptions = 0x678; // CUtlVector< char* >
		}
	}
}
