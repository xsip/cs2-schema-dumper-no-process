#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_FuncConveyor {
			 uintptr_t m_vecMoveDirEntitySpace = 0xd30;
			 uintptr_t m_flTargetSpeed = 0xd3c;
			 uintptr_t m_nTransitionStartTick = 0xd40;
			 uintptr_t m_nTransitionDurationTicks = 0xd44;
			 uintptr_t m_flTransitionStartSpeed = 0xd48;
			 uintptr_t m_hConveyorModels = 0xd50;
			 uintptr_t m_flCurrentConveyorOffset = 0xd68;
			 uintptr_t m_flCurrentConveyorSpeed = 0xd6c;
		}
	}
}
