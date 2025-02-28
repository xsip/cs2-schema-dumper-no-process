#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseGrenade {
			 uintptr_t m_OnPlayerPickup = 0xa40; // CEntityIOOutput
			 uintptr_t m_OnExplode = 0xa68; // CEntityIOOutput
			 uintptr_t m_bHasWarnedAI = 0xa90; // bool
			 uintptr_t m_bIsSmokeGrenade = 0xa91; // bool
			 uintptr_t m_bIsLive = 0xa92; // bool
			 uintptr_t m_DmgRadius = 0xa94; // float32
			 uintptr_t m_flDetonateTime = 0xa98; // GameTime_t
			 uintptr_t m_flWarnAITime = 0xa9c; // float32
			 uintptr_t m_flDamage = 0xaa0; // float32
			 uintptr_t m_iszBounceSound = 0xaa8; // CUtlSymbolLarge
			 uintptr_t m_ExplosionSound = 0xab0; // CUtlString
			 uintptr_t m_hThrower = 0xabc; // CHandle< CCSPlayerPawn >
			 uintptr_t m_flNextAttack = 0xad4; // GameTime_t
			 uintptr_t m_hOriginalThrower = 0xad8; // CHandle< CCSPlayerPawn >
		}
	}
}
