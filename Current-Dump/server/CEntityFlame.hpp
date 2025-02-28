#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEntityFlame {
			 uintptr_t m_hEntAttached = 0x4e0; // CHandle< CBaseEntity >
			 uintptr_t m_bCheapEffect = 0x4e4; // bool
			 uintptr_t m_flSize = 0x4e8; // float32
			 uintptr_t m_bUseHitboxes = 0x4ec; // bool
			 uintptr_t m_iNumHitboxFires = 0x4f0; // int32
			 uintptr_t m_flHitboxFireScale = 0x4f4; // float32
			 uintptr_t m_flLifetime = 0x4f8; // GameTime_t
			 uintptr_t m_hAttacker = 0x4fc; // CHandle< CBaseEntity >
			 uintptr_t m_iDangerSound = 0x500; // int32
			 uintptr_t m_flDirectDamagePerSecond = 0x504; // float32
			 uintptr_t m_iCustomDamageType = 0x508; // int32
		}
	}
}
