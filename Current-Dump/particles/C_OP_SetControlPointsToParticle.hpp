#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetControlPointsToParticle {
			 uintptr_t m_nChildGroupID = 0x1c0; // int32
			 uintptr_t m_nFirstControlPoint = 0x1c4; // int32
			 uintptr_t m_nNumControlPoints = 0x1c8; // int32
			 uintptr_t m_nFirstSourcePoint = 0x1cc; // int32
			 uintptr_t m_bSetOrientation = 0x1d0; // bool
			 uintptr_t m_nOrientationMode = 0x1d4; // ParticleOrientationSetMode_t
			 uintptr_t m_nSetParent = 0x1d8; // ParticleParentSetMode_t
		}
	}
}
