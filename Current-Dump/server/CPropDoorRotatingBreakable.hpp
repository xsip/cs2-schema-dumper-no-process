#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPropDoorRotatingBreakable {
			 uintptr_t m_bBreakable = 0xf80;
			 uintptr_t m_isAbleToCloseAreaPortals = 0xf81;
			 uintptr_t m_currentDamageState = 0xf84;
			 uintptr_t m_damageStates = 0xf88;
		}
	}
}
