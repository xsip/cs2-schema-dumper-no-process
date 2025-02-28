#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysicsPropRespawnable {
			 uintptr_t m_vOriginalSpawnOrigin = 0xd00; // Vector
			 uintptr_t m_vOriginalSpawnAngles = 0xd0c; // QAngle
			 uintptr_t m_vOriginalMins = 0xd18; // Vector
			 uintptr_t m_vOriginalMaxs = 0xd24; // Vector
			 uintptr_t m_flRespawnDuration = 0xd30; // float32
		}
	}
}
