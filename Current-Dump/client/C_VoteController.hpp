#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_VoteController {
			 uintptr_t m_iActiveIssueIndex = 0x578; // int32
			 uintptr_t m_iOnlyTeamToVote = 0x57c; // int32
			 uintptr_t m_nVoteOptionCount = 0x580; // int32[5]
			 uintptr_t m_nPotentialVotes = 0x594; // int32
			 uintptr_t m_bVotesDirty = 0x598; // bool
			 uintptr_t m_bTypeDirty = 0x599; // bool
			 uintptr_t m_bIsYesNoVote = 0x59a; // bool
		}
	}
}
