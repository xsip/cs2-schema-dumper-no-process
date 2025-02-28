#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPlayer_MovementServices {
			 uintptr_t m_nImpulse = 0x40;
			 uintptr_t m_nButtons = 0x48;
			 uintptr_t m_nQueuedButtonDownMask = 0x68;
			 uintptr_t m_nQueuedButtonChangeMask = 0x70;
			 uintptr_t m_nButtonDoublePressed = 0x78;
			 uintptr_t m_pButtonPressedCmdNumber = 0x80;
			 uintptr_t m_nLastCommandNumberProcessed = 0x180;
			 uintptr_t m_nToggleButtonDownMask = 0x188;
			 uintptr_t m_flMaxspeed = 0x198;
			 uintptr_t m_arrForceSubtickMoveWhen = 0x19c;
			 uintptr_t m_flForwardMove = 0x1ac;
			 uintptr_t m_flLeftMove = 0x1b0;
			 uintptr_t m_flUpMove = 0x1b4;
			 uintptr_t m_vecLastMovementImpulses = 0x1b8;
			 uintptr_t m_vecOldViewAngles = 0x1c4;
		}
	}
}
