#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ModelDampenMovement {
			 uintptr_t m_nControlPointNumber = 0x1c0; // int32
			 uintptr_t m_bBoundBox = 0x1c4; // bool
			 uintptr_t m_bOutside = 0x1c5; // bool
			 uintptr_t m_bUseBones = 0x1c6; // bool
			 uintptr_t m_HitboxSetName = 0x1c7; // char[128]
			 uintptr_t m_vecPosOffset = 0x248; // CPerParticleVecInput
			 uintptr_t m_fDrag = 0x8c0; // float32
		}
	}
}
