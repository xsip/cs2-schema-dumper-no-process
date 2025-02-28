#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSmokeGrenadeProjectile {
			 uintptr_t m_nSmokeEffectTickBegin = 0xb68; // int32
			 uintptr_t m_bDidSmokeEffect = 0xb6c; // bool
			 uintptr_t m_nRandomSeed = 0xb70; // int32
			 uintptr_t m_vSmokeColor = 0xb74; // Vector
			 uintptr_t m_vSmokeDetonationPos = 0xb80; // Vector
			 uintptr_t m_VoxelFrameData = 0xb90; // CNetworkUtlVectorBase< uint8 >
			 uintptr_t m_nVoxelFrameDataSize = 0xba8; // int32
			 uintptr_t m_nVoxelUpdate = 0xbac; // int32
			 uintptr_t m_flLastBounce = 0xbb0; // GameTime_t
			 uintptr_t m_fllastSimulationTime = 0xbb4; // GameTime_t
			 uintptr_t m_bExplodeFromInferno = 0x2e38; // bool
		}
	}
}
