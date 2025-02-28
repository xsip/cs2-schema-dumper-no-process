#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysExplosion {
			 uintptr_t m_bExplodeOnSpawn = 0x4e0;
			 uintptr_t m_flMagnitude = 0x4e4;
			 uintptr_t m_flDamage = 0x4e8;
			 uintptr_t m_radius = 0x4ec;
			 uintptr_t m_targetEntityName = 0x4f0;
			 uintptr_t m_flInnerRadius = 0x4f8;
			 uintptr_t m_flPushScale = 0x4fc;
			 uintptr_t m_bConvertToDebrisWhenPossible = 0x500;
			 uintptr_t m_OnPushedPlayer = 0x508;
		}
	}
}
