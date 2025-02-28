#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPropDoorRotatingBreakable {
			 uintptr_t m_bBreakable = 0xf80; // bool
			 uintptr_t m_isAbleToCloseAreaPortals = 0xf81; // bool
			 uintptr_t m_currentDamageState = 0xf84; // int32
			 uintptr_t m_damageStates = 0xf88; // CUtlVector< CUtlSymbolLarge >
		}
	}
}
