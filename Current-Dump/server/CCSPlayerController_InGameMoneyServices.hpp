#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayerController_InGameMoneyServices {
			 uintptr_t m_bReceivesMoneyNextRound = 0x40; // bool
			 uintptr_t m_iMoneyEarnedForNextRound = 0x44; // int32
			 uintptr_t m_iAccount = 0x48; // int32
			 uintptr_t m_iStartAccount = 0x4c; // int32
			 uintptr_t m_iTotalCashSpent = 0x50; // int32
			 uintptr_t m_iCashSpentThisRound = 0x54; // int32
		}
	}
}
