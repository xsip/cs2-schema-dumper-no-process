#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CMoverUpdateNode {
			 uintptr_t m_damping = 0x70;
			 uintptr_t m_facingTarget = 0x80;
			 uintptr_t m_hMoveVecParam = 0x84;
			 uintptr_t m_hMoveHeadingParam = 0x86;
			 uintptr_t m_hTurnToFaceParam = 0x88;
			 uintptr_t m_flTurnToFaceOffset = 0x8c;
			 uintptr_t m_flTurnToFaceLimit = 0x90;
			 uintptr_t m_bAdditive = 0x94;
			 uintptr_t m_bApplyMovement = 0x95;
			 uintptr_t m_bOrientMovement = 0x96;
			 uintptr_t m_bApplyRotation = 0x97;
			 uintptr_t m_bLimitOnly = 0x98;
		}
	}
}
