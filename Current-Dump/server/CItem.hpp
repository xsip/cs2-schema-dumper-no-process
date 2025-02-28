#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CItem {
			 uintptr_t m_OnPlayerTouch = 0x9b0; // CEntityIOOutput
			 uintptr_t m_OnPlayerPickup = 0x9d8; // CEntityIOOutput
			 uintptr_t m_bActivateWhenAtRest = 0xa00; // bool
			 uintptr_t m_OnCacheInteraction = 0xa08; // CEntityIOOutput
			 uintptr_t m_OnGlovePulled = 0xa30; // CEntityIOOutput
			 uintptr_t m_vOriginalSpawnOrigin = 0xa58; // Vector
			 uintptr_t m_vOriginalSpawnAngles = 0xa64; // QAngle
			 uintptr_t m_bPhysStartAsleep = 0xa70; // bool
		}
	}
}
