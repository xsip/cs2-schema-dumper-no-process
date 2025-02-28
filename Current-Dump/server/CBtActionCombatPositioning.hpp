#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBtActionCombatPositioning {
			 uintptr_t m_szSensorInputKey = 0x68; // CUtlString
			 uintptr_t m_szIsAttackingKey = 0x80; // CUtlString
			 uintptr_t m_ActionTimer = 0x88; // CountdownTimer
			 uintptr_t m_bCrouching = 0xa0; // bool
		}
	}
}
