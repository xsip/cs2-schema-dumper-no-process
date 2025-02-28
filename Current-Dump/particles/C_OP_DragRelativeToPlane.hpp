#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_DragRelativeToPlane {
			 uintptr_t m_flDragAtPlane = 0x1c0; // CParticleCollectionFloatInput
			 uintptr_t m_flFalloff = 0x320; // CParticleCollectionFloatInput
			 uintptr_t m_bDirectional = 0x480; // bool
			 uintptr_t m_vecPlaneNormal = 0x488; // CParticleCollectionVecInput
			 uintptr_t m_nControlPointNumber = 0xb00; // int32
		}
	}
}
