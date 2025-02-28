#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_Team {
			 uintptr_t m_aPlayerControllers = 0x568; // C_NetworkUtlVectorBase< CHandle< CBasePlayerController > >
			 uintptr_t m_aPlayers = 0x580; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > >
			 uintptr_t m_iScore = 0x598; // int32
			 uintptr_t m_szTeamname = 0x59c; // char[129]
		}
	}
}
