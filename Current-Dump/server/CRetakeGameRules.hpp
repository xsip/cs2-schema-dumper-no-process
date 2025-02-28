#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CRetakeGameRules {
			 uintptr_t m_nMatchSeed = 0xf8; // int32
			 uintptr_t m_bBlockersPresent = 0xfc; // bool
			 uintptr_t m_bRoundInProgress = 0xfd; // bool
			 uintptr_t m_iFirstSecondHalfRound = 0x100; // int32
			 uintptr_t m_iBombSite = 0x104; // int32
		}
	}
}
