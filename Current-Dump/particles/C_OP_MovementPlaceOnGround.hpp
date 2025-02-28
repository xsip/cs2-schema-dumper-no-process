#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_MovementPlaceOnGround {
			 uintptr_t m_flOffset = 0x1c0; // CPerParticleFloatInput
			 uintptr_t m_flMaxTraceLength = 0x320; // float32
			 uintptr_t m_flTolerance = 0x324; // float32
			 uintptr_t m_flTraceOffset = 0x328; // float32
			 uintptr_t m_flLerpRate = 0x32c; // float32
			 uintptr_t m_CollisionGroupName = 0x330; // char[128]
			 uintptr_t m_nTraceSet = 0x3b0; // ParticleTraceSet_t
			 uintptr_t m_nRefCP1 = 0x3b4; // int32
			 uintptr_t m_nRefCP2 = 0x3b8; // int32
			 uintptr_t m_nLerpCP = 0x3bc; // int32
			 uintptr_t m_nTraceMissBehavior = 0x3c8; // ParticleTraceMissBehavior_t
			 uintptr_t m_bIncludeShotHull = 0x3cc; // bool
			 uintptr_t m_bIncludeWater = 0x3cd; // bool
			 uintptr_t m_bSetNormal = 0x3d0; // bool
			 uintptr_t m_bScaleOffset = 0x3d1; // bool
			 uintptr_t m_nPreserveOffsetCP = 0x3d4; // int32
			 uintptr_t m_nIgnoreCP = 0x3d8; // int32
		}
	}
}
