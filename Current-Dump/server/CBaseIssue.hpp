#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseIssue {
			 uintptr_t m_szTypeString = 0x20; // char[64]
			 uintptr_t m_szDetailsString = 0x60; // char[260]
			 uintptr_t m_iNumYesVotes = 0x164; // int32
			 uintptr_t m_iNumNoVotes = 0x168; // int32
			 uintptr_t m_iNumPotentialVotes = 0x16c; // int32
			 uintptr_t m_pVoteController = 0x170; // CVoteController*
		}
	}
}
