#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_PlanarConstraint {
			 uintptr_t m_PointOnPlane = 0x1c0; // Vector
			 uintptr_t m_PlaneNormal = 0x1cc; // Vector
			 uintptr_t m_nControlPointNumber = 0x1d8; // int32
			 uintptr_t m_bGlobalOrigin = 0x1dc; // bool
			 uintptr_t m_bGlobalNormal = 0x1dd; // bool
			 uintptr_t m_flRadiusScale = 0x1e0; // CPerParticleFloatInput
			 uintptr_t m_flMaximumDistanceToCP = 0x340; // CParticleCollectionFloatInput
			 uintptr_t m_bUseOldCode = 0x4a0; // bool
		}
	}
}
