#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerHurt {
			 uintptr_t m_flOriginalDamage = 0x960;
			 uintptr_t m_flDamage = 0x964;
			 uintptr_t m_flDamageCap = 0x968;
			 uintptr_t m_flLastDmgTime = 0x96c;
			 uintptr_t m_flForgivenessDelay = 0x970;
			 uintptr_t m_bitsDamageInflict = 0x974;
			 uintptr_t m_damageModel = 0x978;
			 uintptr_t m_bNoDmgForce = 0x97c;
			 uintptr_t m_vDamageForce = 0x980;
			 uintptr_t m_thinkAlways = 0x98c;
			 uintptr_t m_hurtThinkPeriod = 0x990;
			 uintptr_t m_OnHurt = 0x998;
			 uintptr_t m_OnHurtPlayer = 0x9c0;
			 uintptr_t m_hurtEntities = 0x9e8;
		}
	}
}
