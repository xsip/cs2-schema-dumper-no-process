#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayerController_InGameMoneyServices {
			 uintptr_t m_bReceivesMoneyNextRound = 0x40;
			 uintptr_t m_iMoneyEarnedForNextRound = 0x44;
			 uintptr_t m_iAccount = 0x48;
			 uintptr_t m_iStartAccount = 0x4c;
			 uintptr_t m_iTotalCashSpent = 0x50;
			 uintptr_t m_iCashSpentThisRound = 0x54;
		}
	}
}
