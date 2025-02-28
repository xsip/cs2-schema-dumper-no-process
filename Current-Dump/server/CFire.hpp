#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFire {
			 uintptr_t m_hEffect = 0x790; // CHandle< CBaseFire >
			 uintptr_t m_hOwner = 0x794; // CHandle< CBaseEntity >
			 uintptr_t m_nFireType = 0x798; // int32
			 uintptr_t m_flFuel = 0x79c; // float32
			 uintptr_t m_flDamageTime = 0x7a0; // GameTime_t
			 uintptr_t m_lastDamage = 0x7a4; // GameTime_t
			 uintptr_t m_flFireSize = 0x7a8; // float32
			 uintptr_t m_flLastNavUpdateTime = 0x7ac; // GameTime_t
			 uintptr_t m_flHeatLevel = 0x7b0; // float32
			 uintptr_t m_flHeatAbsorb = 0x7b4; // float32
			 uintptr_t m_flDamageScale = 0x7b8; // float32
			 uintptr_t m_flMaxHeat = 0x7bc; // float32
			 uintptr_t m_flLastHeatLevel = 0x7c0; // float32
			 uintptr_t m_flAttackTime = 0x7c4; // float32
			 uintptr_t m_bEnabled = 0x7c8; // bool
			 uintptr_t m_bStartDisabled = 0x7c9; // bool
			 uintptr_t m_bDidActivate = 0x7ca; // bool
			 uintptr_t m_OnIgnited = 0x7d0; // CEntityIOOutput
			 uintptr_t m_OnExtinguished = 0x7f8; // CEntityIOOutput
		}
	}
}
