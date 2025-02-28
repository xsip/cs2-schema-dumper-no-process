#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_FuncConveyor {
			 uintptr_t m_vecMoveDirEntitySpace = 0xd30; // Vector
			 uintptr_t m_flTargetSpeed = 0xd3c; // float32
			 uintptr_t m_nTransitionStartTick = 0xd40; // GameTick_t
			 uintptr_t m_nTransitionDurationTicks = 0xd44; // int32
			 uintptr_t m_flTransitionStartSpeed = 0xd48; // float32
			 uintptr_t m_hConveyorModels = 0xd50; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
			 uintptr_t m_flCurrentConveyorOffset = 0xd68; // float32
			 uintptr_t m_flCurrentConveyorSpeed = 0xd6c; // float32
		}
	}
}
