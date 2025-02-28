#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CVoteController {
			 uintptr_t m_iActiveIssueIndex = 0x4e0;
			 uintptr_t m_iOnlyTeamToVote = 0x4e4;
			 uintptr_t m_nVoteOptionCount = 0x4e8;
			 uintptr_t m_nPotentialVotes = 0x4fc;
			 uintptr_t m_bIsYesNoVote = 0x500;
			 uintptr_t m_acceptingVotesTimer = 0x508;
			 uintptr_t m_executeCommandTimer = 0x520;
			 uintptr_t m_resetVoteTimer = 0x538;
			 uintptr_t m_nVotesCast = 0x550;
			 uintptr_t m_playerHoldingVote = 0x650;
			 uintptr_t m_playerOverrideForVote = 0x654;
			 uintptr_t m_nHighestCountIndex = 0x658;
			 uintptr_t m_potentialIssues = 0x660;
			 uintptr_t m_VoteOptions = 0x678;
		}
	}
}
