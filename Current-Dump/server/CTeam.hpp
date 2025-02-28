#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTeam {
			 uintptr_t m_aPlayerControllers = 0x4e0; // CNetworkUtlVectorBase< CHandle< CBasePlayerController > >
			 uintptr_t m_aPlayers = 0x4f8; // CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > >
			 uintptr_t m_iScore = 0x510; // int32
			 uintptr_t m_szTeamname = 0x514; // char[129]
		}
	}
}
