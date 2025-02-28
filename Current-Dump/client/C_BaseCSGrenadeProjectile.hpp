#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BaseCSGrenadeProjectile {
			 uintptr_t m_vInitialPosition = 0x1170; // Vector
			 uintptr_t m_vInitialVelocity = 0x117c; // Vector
			 uintptr_t m_nBounces = 0x1188; // int32
			 uintptr_t m_nExplodeEffectIndex = 0x1190; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_nExplodeEffectTickBegin = 0x1198; // int32
			 uintptr_t m_vecExplodeEffectOrigin = 0x119c; // Vector
			 uintptr_t m_flSpawnTime = 0x11a8; // GameTime_t
			 uintptr_t vecLastTrailLinePos = 0x11ac; // Vector
			 uintptr_t flNextTrailLineTime = 0x11b8; // GameTime_t
			 uintptr_t m_bExplodeEffectBegan = 0x11bc; // bool
			 uintptr_t m_bCanCreateGrenadeTrail = 0x11bd; // bool
			 uintptr_t m_nSnapshotTrajectoryEffectIndex = 0x11c0; // ParticleIndex_t
			 uintptr_t m_hSnapshotTrajectoryParticleSnapshot = 0x11c8; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
			 uintptr_t m_arrTrajectoryTrailPoints = 0x11d0; // CUtlVector< Vector >
			 uintptr_t m_arrTrajectoryTrailPointCreationTimes = 0x11e8; // CUtlVector< float32 >
			 uintptr_t m_flTrajectoryTrailEffectCreationTime = 0x1200; // float32
		}
	}
}
