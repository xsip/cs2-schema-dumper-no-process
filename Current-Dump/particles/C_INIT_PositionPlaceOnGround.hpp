#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_PositionPlaceOnGround {
			 uintptr_t m_flOffset = 0x1c8; // CPerParticleFloatInput
			 uintptr_t m_flMaxTraceLength = 0x328; // CPerParticleFloatInput
			 uintptr_t m_CollisionGroupName = 0x488; // char[128]
			 uintptr_t m_nTraceSet = 0x508; // ParticleTraceSet_t
			 uintptr_t m_nTraceMissBehavior = 0x518; // ParticleTraceMissBehavior_t
			 uintptr_t m_bIncludeWater = 0x51c; // bool
			 uintptr_t m_bSetNormal = 0x51d; // bool
			 uintptr_t m_bSetPXYZOnly = 0x51e; // bool
			 uintptr_t m_bTraceAlongNormal = 0x51f; // bool
			 uintptr_t m_bOffsetonColOnly = 0x520; // bool
			 uintptr_t m_flOffsetByRadiusFactor = 0x524; // float32
			 uintptr_t m_nPreserveOffsetCP = 0x528; // int32
			 uintptr_t m_nIgnoreCP = 0x52c; // int32
		}
	}
}
