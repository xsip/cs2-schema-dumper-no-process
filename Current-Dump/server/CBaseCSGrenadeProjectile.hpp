#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseCSGrenadeProjectile {
			 uintptr_t m_vInitialPosition = 0xae0; // Vector
			 uintptr_t m_vInitialVelocity = 0xaec; // Vector
			 uintptr_t m_nBounces = 0xaf8; // int32
			 uintptr_t m_nExplodeEffectIndex = 0xb00; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_nExplodeEffectTickBegin = 0xb08; // int32
			 uintptr_t m_vecExplodeEffectOrigin = 0xb0c; // Vector
			 uintptr_t m_flSpawnTime = 0xb18; // GameTime_t
			 uintptr_t m_unOGSExtraFlags = 0xb1c; // uint8
			 uintptr_t m_bDetonationRecorded = 0xb1d; // bool
			 uintptr_t m_nItemIndex = 0xb1e; // uint16
			 uintptr_t m_vecOriginalSpawnLocation = 0xb20; // Vector
			 uintptr_t m_flLastBounceSoundTime = 0xb2c; // GameTime_t
			 uintptr_t m_vecGrenadeSpin = 0xb30; // RotationVector
			 uintptr_t m_vecLastHitSurfaceNormal = 0xb3c; // Vector
			 uintptr_t m_nTicksAtZeroVelocity = 0xb48; // int32
			 uintptr_t m_bHasEverHitEnemy = 0xb4c; // bool
		}
	}
}
