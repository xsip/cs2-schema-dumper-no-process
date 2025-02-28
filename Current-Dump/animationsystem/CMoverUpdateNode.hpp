#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CMoverUpdateNode {
			 uintptr_t m_damping = 0x70; // CAnimInputDamping
			 uintptr_t m_facingTarget = 0x80; // AnimValueSource
			 uintptr_t m_hMoveVecParam = 0x84; // CAnimParamHandle
			 uintptr_t m_hMoveHeadingParam = 0x86; // CAnimParamHandle
			 uintptr_t m_hTurnToFaceParam = 0x88; // CAnimParamHandle
			 uintptr_t m_flTurnToFaceOffset = 0x8c; // float32
			 uintptr_t m_flTurnToFaceLimit = 0x90; // float32
			 uintptr_t m_bAdditive = 0x94; // bool
			 uintptr_t m_bApplyMovement = 0x95; // bool
			 uintptr_t m_bOrientMovement = 0x96; // bool
			 uintptr_t m_bApplyRotation = 0x97; // bool
			 uintptr_t m_bLimitOnly = 0x98; // bool
		}
	}
}
