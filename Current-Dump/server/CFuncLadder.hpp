#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncLadder {
			 uintptr_t m_vecLadderDir = 0x790; // Vector
			 uintptr_t m_Dismounts = 0x7a0; // CUtlVector< CHandle< CInfoLadderDismount > >
			 uintptr_t m_vecLocalTop = 0x7b8; // Vector
			 uintptr_t m_vecPlayerMountPositionTop = 0x7c4; // Vector
			 uintptr_t m_vecPlayerMountPositionBottom = 0x7d0; // Vector
			 uintptr_t m_flAutoRideSpeed = 0x7dc; // float32
			 uintptr_t m_bDisabled = 0x7e0; // bool
			 uintptr_t m_bFakeLadder = 0x7e1; // bool
			 uintptr_t m_bHasSlack = 0x7e2; // bool
			 uintptr_t m_surfacePropName = 0x7e8; // CUtlSymbolLarge
			 uintptr_t m_OnPlayerGotOnLadder = 0x7f0; // CEntityIOOutput
			 uintptr_t m_OnPlayerGotOffLadder = 0x818; // CEntityIOOutput
		}
	}
}
