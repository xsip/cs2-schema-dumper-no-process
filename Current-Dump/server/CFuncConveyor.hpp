#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncConveyor {
			 uintptr_t m_szConveyorModels = 0x790; // CUtlSymbolLarge
			 uintptr_t m_flTransitionDurationSeconds = 0x798; // float32
			 uintptr_t m_angMoveEntitySpace = 0x79c; // QAngle
			 uintptr_t m_vecMoveDirEntitySpace = 0x7a8; // Vector
			 uintptr_t m_flTargetSpeed = 0x7b4; // float32
			 uintptr_t m_nTransitionStartTick = 0x7b8; // GameTick_t
			 uintptr_t m_nTransitionDurationTicks = 0x7bc; // int32
			 uintptr_t m_flTransitionStartSpeed = 0x7c0; // float32
			 uintptr_t m_hConveyorModels = 0x7c8; // CNetworkUtlVectorBase< CHandle< CBaseEntity > >
		}
	}
}
