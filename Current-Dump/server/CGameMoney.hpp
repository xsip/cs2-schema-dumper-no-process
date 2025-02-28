#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGameMoney {
			 uintptr_t m_OnMoneySpent = 0x7a0; // CEntityIOOutput
			 uintptr_t m_OnMoneySpentFail = 0x7c8; // CEntityIOOutput
			 uintptr_t m_nMoney = 0x7f0; // int32
			 uintptr_t m_strAwardText = 0x7f8; // CUtlString
		}
	}
}
