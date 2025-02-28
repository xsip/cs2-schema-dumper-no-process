#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BaseGrenade {
			 uintptr_t m_bHasWarnedAI = 0x1120; // bool
			 uintptr_t m_bIsSmokeGrenade = 0x1121; // bool
			 uintptr_t m_bIsLive = 0x1122; // bool
			 uintptr_t m_DmgRadius = 0x1124; // float32
			 uintptr_t m_flDetonateTime = 0x1128; // GameTime_t
			 uintptr_t m_flWarnAITime = 0x112c; // float32
			 uintptr_t m_flDamage = 0x1130; // float32
			 uintptr_t m_iszBounceSound = 0x1138; // CUtlSymbolLarge
			 uintptr_t m_ExplosionSound = 0x1140; // CUtlString
			 uintptr_t m_hThrower = 0x114c; // CHandle< C_CSPlayerPawn >
			 uintptr_t m_flNextAttack = 0x1164; // GameTime_t
			 uintptr_t m_hOriginalThrower = 0x1168; // CHandle< C_CSPlayerPawn >
		}
	}
}
