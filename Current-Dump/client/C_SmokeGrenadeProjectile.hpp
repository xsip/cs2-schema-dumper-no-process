#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_SmokeGrenadeProjectile {
			 uintptr_t m_nSmokeEffectTickBegin = 0x1210; // int32
			 uintptr_t m_bDidSmokeEffect = 0x1214; // bool
			 uintptr_t m_nRandomSeed = 0x1218; // int32
			 uintptr_t m_vSmokeColor = 0x121c; // Vector
			 uintptr_t m_vSmokeDetonationPos = 0x1228; // Vector
			 uintptr_t m_VoxelFrameData = 0x1238; // C_NetworkUtlVectorBase< uint8 >
			 uintptr_t m_nVoxelFrameDataSize = 0x1250; // int32
			 uintptr_t m_nVoxelUpdate = 0x1254; // int32
			 uintptr_t m_bSmokeVolumeDataReceived = 0x1258; // bool
			 uintptr_t m_bSmokeEffectSpawned = 0x1259; // bool
		}
	}
}
