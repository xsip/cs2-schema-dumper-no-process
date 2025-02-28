#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CFollowPathUpdateNode {
			 uintptr_t m_flBlendOutTime = 0x6c; // float32
			 uintptr_t m_bBlockNonPathMovement = 0x70; // bool
			 uintptr_t m_bStopFeetAtGoal = 0x71; // bool
			 uintptr_t m_bScaleSpeed = 0x72; // bool
			 uintptr_t m_flScale = 0x74; // float32
			 uintptr_t m_flMinAngle = 0x78; // float32
			 uintptr_t m_flMaxAngle = 0x7c; // float32
			 uintptr_t m_flSpeedScaleBlending = 0x80; // float32
			 uintptr_t m_turnDamping = 0x88; // CAnimInputDamping
			 uintptr_t m_facingTarget = 0x98; // AnimValueSource
			 uintptr_t m_hParam = 0x9c; // CAnimParamHandle
			 uintptr_t m_flTurnToFaceOffset = 0xa0; // float32
			 uintptr_t m_bTurnToFace = 0xa4; // bool
		}
	}
}
