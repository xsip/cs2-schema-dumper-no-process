#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseToggle {
			 uintptr_t m_toggle_state = 0x790;
			 uintptr_t m_flMoveDistance = 0x794;
			 uintptr_t m_flWait = 0x798;
			 uintptr_t m_flLip = 0x79c;
			 uintptr_t m_bAlwaysFireBlockedOutputs = 0x7a0;
			 uintptr_t m_vecPosition1 = 0x7a4;
			 uintptr_t m_vecPosition2 = 0x7b0;
			 uintptr_t m_vecMoveAng = 0x7bc;
			 uintptr_t m_vecAngle1 = 0x7c8;
			 uintptr_t m_vecAngle2 = 0x7d4;
			 uintptr_t m_flHeight = 0x7e0;
			 uintptr_t m_hActivator = 0x7e4;
			 uintptr_t m_vecFinalDest = 0x7e8;
			 uintptr_t m_vecFinalAngle = 0x7f4;
			 uintptr_t m_movementType = 0x800;
			 uintptr_t m_sMaster = 0x808;
		}
	}
}
