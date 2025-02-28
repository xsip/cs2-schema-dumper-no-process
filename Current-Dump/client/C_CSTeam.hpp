#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_CSTeam {
			 uintptr_t m_szTeamMatchStat = 0x620; // char[512]
			 uintptr_t m_numMapVictories = 0x820; // int32
			 uintptr_t m_bSurrendered = 0x824; // bool
			 uintptr_t m_scoreFirstHalf = 0x828; // int32
			 uintptr_t m_scoreSecondHalf = 0x82c; // int32
			 uintptr_t m_scoreOvertime = 0x830; // int32
			 uintptr_t m_szClanTeamname = 0x834; // char[129]
			 uintptr_t m_iClanID = 0x8b8; // uint32
			 uintptr_t m_szTeamFlagImage = 0x8bc; // char[8]
			 uintptr_t m_szTeamLogoImage = 0x8c4; // char[8]
		}
	}
}
