#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_VoteController {
			 uintptr_t m_iActiveIssueIndex = 0x578;
			 uintptr_t m_iOnlyTeamToVote = 0x57c;
			 uintptr_t m_nVoteOptionCount = 0x580;
			 uintptr_t m_nPotentialVotes = 0x594;
			 uintptr_t m_bVotesDirty = 0x598;
			 uintptr_t m_bTypeDirty = 0x599;
			 uintptr_t m_bIsYesNoVote = 0x59a;
		}
	}
}
