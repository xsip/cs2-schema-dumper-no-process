#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvEntityMaker {
			 uintptr_t m_vecEntityMins = 0x4e0; // Vector
			 uintptr_t m_vecEntityMaxs = 0x4ec; // Vector
			 uintptr_t m_hCurrentInstance = 0x4f8; // CHandle< CBaseEntity >
			 uintptr_t m_hCurrentBlocker = 0x4fc; // CHandle< CBaseEntity >
			 uintptr_t m_vecBlockerOrigin = 0x500; // Vector
			 uintptr_t m_angPostSpawnDirection = 0x50c; // QAngle
			 uintptr_t m_flPostSpawnDirectionVariance = 0x518; // float32
			 uintptr_t m_flPostSpawnSpeed = 0x51c; // float32
			 uintptr_t m_bPostSpawnUseAngles = 0x520; // bool
			 uintptr_t m_iszTemplate = 0x528; // CUtlSymbolLarge
			 uintptr_t m_pOutputOnSpawned = 0x530; // CEntityIOOutput
			 uintptr_t m_pOutputOnFailedSpawn = 0x558; // CEntityIOOutput
		}
	}
}
