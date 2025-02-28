#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPlayer_MovementServices {
			 uintptr_t m_nImpulse = 0x40; // int32
			 uintptr_t m_nButtons = 0x48; // CInButtonState
			 uintptr_t m_nQueuedButtonDownMask = 0x68; // uint64
			 uintptr_t m_nQueuedButtonChangeMask = 0x70; // uint64
			 uintptr_t m_nButtonDoublePressed = 0x78; // uint64
			 uintptr_t m_pButtonPressedCmdNumber = 0x80; // uint32[64]
			 uintptr_t m_nLastCommandNumberProcessed = 0x180; // uint32
			 uintptr_t m_nToggleButtonDownMask = 0x188; // uint64
			 uintptr_t m_flMaxspeed = 0x198; // float32
			 uintptr_t m_arrForceSubtickMoveWhen = 0x19c; // float32[4]
			 uintptr_t m_flForwardMove = 0x1ac; // float32
			 uintptr_t m_flLeftMove = 0x1b0; // float32
			 uintptr_t m_flUpMove = 0x1b4; // float32
			 uintptr_t m_vecLastMovementImpulses = 0x1b8; // Vector
			 uintptr_t m_vecOldViewAngles = 0x1c4; // QAngle
		}
	}
}
