#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_FuncLadder {
			 uintptr_t m_vecLadderDir = 0xd28; // Vector
			 uintptr_t m_Dismounts = 0xd38; // CUtlVector< CHandle< C_InfoLadderDismount > >
			 uintptr_t m_vecLocalTop = 0xd50; // Vector
			 uintptr_t m_vecPlayerMountPositionTop = 0xd5c; // Vector
			 uintptr_t m_vecPlayerMountPositionBottom = 0xd68; // Vector
			 uintptr_t m_flAutoRideSpeed = 0xd74; // float32
			 uintptr_t m_bDisabled = 0xd78; // bool
			 uintptr_t m_bFakeLadder = 0xd79; // bool
			 uintptr_t m_bHasSlack = 0xd7a; // bool
		}
	}
}
