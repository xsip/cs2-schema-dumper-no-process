#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetControlPointToImpactPoint {
			 uintptr_t m_nCPOut = 0x1c8; // int32
			 uintptr_t m_nCPIn = 0x1cc; // int32
			 uintptr_t m_flUpdateRate = 0x1d0; // float32
			 uintptr_t m_flTraceLength = 0x1d8; // CParticleCollectionFloatInput
			 uintptr_t m_flStartOffset = 0x338; // float32
			 uintptr_t m_flOffset = 0x33c; // float32
			 uintptr_t m_vecTraceDir = 0x340; // Vector
			 uintptr_t m_CollisionGroupName = 0x34c; // char[128]
			 uintptr_t m_nTraceSet = 0x3cc; // ParticleTraceSet_t
			 uintptr_t m_bSetToEndpoint = 0x3d0; // bool
			 uintptr_t m_bTraceToClosestSurface = 0x3d1; // bool
			 uintptr_t m_bIncludeWater = 0x3d2; // bool
		}
	}
}
