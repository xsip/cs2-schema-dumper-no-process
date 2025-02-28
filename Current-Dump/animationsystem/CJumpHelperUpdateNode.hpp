#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CJumpHelperUpdateNode {
			 uintptr_t m_hTargetParam = 0xa8; // CAnimParamHandle
			 uintptr_t m_flOriginalJumpMovement = 0xac; // Vector
			 uintptr_t m_flOriginalJumpDuration = 0xb8; // float32
			 uintptr_t m_flJumpStartCycle = 0xbc; // float32
			 uintptr_t m_flJumpEndCycle = 0xc0; // float32
			 uintptr_t m_eCorrectionMethod = 0xc4; // JumpCorrectionMethod
			 uintptr_t m_bTranslationAxis = 0xc8; // bool[3]
			 uintptr_t m_bScaleSpeed = 0xcb; // bool
		}
	}
}
