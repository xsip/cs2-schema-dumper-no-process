#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerHurt {
			 uintptr_t m_flOriginalDamage = 0x960; // float32
			 uintptr_t m_flDamage = 0x964; // float32
			 uintptr_t m_flDamageCap = 0x968; // float32
			 uintptr_t m_flLastDmgTime = 0x96c; // GameTime_t
			 uintptr_t m_flForgivenessDelay = 0x970; // float32
			 uintptr_t m_bitsDamageInflict = 0x974; // DamageTypes_t
			 uintptr_t m_damageModel = 0x978; // int32
			 uintptr_t m_bNoDmgForce = 0x97c; // bool
			 uintptr_t m_vDamageForce = 0x980; // Vector
			 uintptr_t m_thinkAlways = 0x98c; // bool
			 uintptr_t m_hurtThinkPeriod = 0x990; // float32
			 uintptr_t m_OnHurt = 0x998; // CEntityIOOutput
			 uintptr_t m_OnHurtPlayer = 0x9c0; // CEntityIOOutput
			 uintptr_t m_hurtEntities = 0x9e8; // CUtlVector< CHandle< CBaseEntity > >
		}
	}
}
