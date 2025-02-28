#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvEntityMaker {
			 uintptr_t m_vecEntityMins = 0x4e0;
			 uintptr_t m_vecEntityMaxs = 0x4ec;
			 uintptr_t m_hCurrentInstance = 0x4f8;
			 uintptr_t m_hCurrentBlocker = 0x4fc;
			 uintptr_t m_vecBlockerOrigin = 0x500;
			 uintptr_t m_angPostSpawnDirection = 0x50c;
			 uintptr_t m_flPostSpawnDirectionVariance = 0x518;
			 uintptr_t m_flPostSpawnSpeed = 0x51c;
			 uintptr_t m_bPostSpawnUseAngles = 0x520;
			 uintptr_t m_iszTemplate = 0x528;
			 uintptr_t m_pOutputOnSpawned = 0x530;
			 uintptr_t m_pOutputOnFailedSpawn = 0x558;
		}
	}
}
