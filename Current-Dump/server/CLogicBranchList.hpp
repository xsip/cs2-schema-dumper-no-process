#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicBranchList {
			 uintptr_t m_nLogicBranchNames = 0x4e0; // CUtlSymbolLarge[16]
			 uintptr_t m_LogicBranchList = 0x560; // CUtlVector< CHandle< CBaseEntity > >
			 uintptr_t m_eLastState = 0x578; // CLogicBranchList::LogicBranchListenerLastState_t
			 uintptr_t m_OnAllTrue = 0x580; // CEntityIOOutput
			 uintptr_t m_OnAllFalse = 0x5a8; // CEntityIOOutput
			 uintptr_t m_OnMixed = 0x5d0; // CEntityIOOutput
		}
	}
}
