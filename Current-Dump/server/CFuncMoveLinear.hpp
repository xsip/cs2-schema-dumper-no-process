#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncMoveLinear {
			 uintptr_t m_authoredPosition = 0x810; // MoveLinearAuthoredPos_t
			 uintptr_t m_angMoveEntitySpace = 0x814; // QAngle
			 uintptr_t m_vecMoveDirParentSpace = 0x820; // Vector
			 uintptr_t m_soundStart = 0x830; // CUtlSymbolLarge
			 uintptr_t m_soundStop = 0x838; // CUtlSymbolLarge
			 uintptr_t m_currentSound = 0x840; // CUtlSymbolLarge
			 uintptr_t m_flBlockDamage = 0x848; // float32
			 uintptr_t m_flStartPosition = 0x84c; // float32
			 uintptr_t m_OnFullyOpen = 0x858; // CEntityIOOutput
			 uintptr_t m_OnFullyClosed = 0x880; // CEntityIOOutput
			 uintptr_t m_bCreateMovableNavMesh = 0x8a8; // bool
			 uintptr_t m_bCreateNavObstacle = 0x8a9; // bool
		}
	}
}
