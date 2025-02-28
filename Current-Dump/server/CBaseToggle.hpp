#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseToggle {
			 uintptr_t m_toggle_state = 0x790; // TOGGLE_STATE
			 uintptr_t m_flMoveDistance = 0x794; // float32
			 uintptr_t m_flWait = 0x798; // float32
			 uintptr_t m_flLip = 0x79c; // float32
			 uintptr_t m_bAlwaysFireBlockedOutputs = 0x7a0; // bool
			 uintptr_t m_vecPosition1 = 0x7a4; // Vector
			 uintptr_t m_vecPosition2 = 0x7b0; // Vector
			 uintptr_t m_vecMoveAng = 0x7bc; // QAngle
			 uintptr_t m_vecAngle1 = 0x7c8; // QAngle
			 uintptr_t m_vecAngle2 = 0x7d4; // QAngle
			 uintptr_t m_flHeight = 0x7e0; // float32
			 uintptr_t m_hActivator = 0x7e4; // CHandle< CBaseEntity >
			 uintptr_t m_vecFinalDest = 0x7e8; // Vector
			 uintptr_t m_vecFinalAngle = 0x7f4; // QAngle
			 uintptr_t m_movementType = 0x800; // int32
			 uintptr_t m_sMaster = 0x808; // CUtlSymbolLarge
		}
	}
}
