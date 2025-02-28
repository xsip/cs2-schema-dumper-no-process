#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSGameModeRules_Deathmatch {
			 uintptr_t m_flDMBonusStartTime = 0x30; // GameTime_t
			 uintptr_t m_flDMBonusTimeLength = 0x34; // float32
			 uintptr_t m_sDMBonusWeapon = 0x38; // CUtlString
		}
	}
}
