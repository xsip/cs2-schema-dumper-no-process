#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysExplosion {
			 uintptr_t m_bExplodeOnSpawn = 0x4e0; // bool
			 uintptr_t m_flMagnitude = 0x4e4; // float32
			 uintptr_t m_flDamage = 0x4e8; // float32
			 uintptr_t m_radius = 0x4ec; // float32
			 uintptr_t m_targetEntityName = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_flInnerRadius = 0x4f8; // float32
			 uintptr_t m_flPushScale = 0x4fc; // float32
			 uintptr_t m_bConvertToDebrisWhenPossible = 0x500; // bool
			 uintptr_t m_OnPushedPlayer = 0x508; // CEntityIOOutput
		}
	}
}
