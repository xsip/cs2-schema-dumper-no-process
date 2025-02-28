#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetControlPointOrientation {
			 uintptr_t m_bUseWorldLocation = 0x1c8; // bool
			 uintptr_t m_bRandomize = 0x1ca; // bool
			 uintptr_t m_bSetOnce = 0x1cb; // bool
			 uintptr_t m_nCP = 0x1cc; // int32
			 uintptr_t m_nHeadLocation = 0x1d0; // int32
			 uintptr_t m_vecRotation = 0x1d4; // QAngle
			 uintptr_t m_vecRotationB = 0x1e0; // QAngle
			 uintptr_t m_flInterpolation = 0x1f0; // CParticleCollectionFloatInput
		}
	}
}
