#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CWeaponShield {
			 uintptr_t m_flBulletDamageAbsorbed = 0xf90; // float32
			 uintptr_t m_flLastBulletHitSoundTime = 0xf94; // GameTime_t
			 uintptr_t m_flDisplayHealth = 0xf98; // float32
		}
	}
}
