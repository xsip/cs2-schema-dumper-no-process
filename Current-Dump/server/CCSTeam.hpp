#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSTeam {
			 uintptr_t m_nLastRecievedShorthandedRoundBonus = 0x598; // int32
			 uintptr_t m_nShorthandedRoundBonusStartRound = 0x59c; // int32
			 uintptr_t m_bSurrendered = 0x5a0; // bool
			 uintptr_t m_szTeamMatchStat = 0x5a1; // char[512]
			 uintptr_t m_numMapVictories = 0x7a4; // int32
			 uintptr_t m_scoreFirstHalf = 0x7a8; // int32
			 uintptr_t m_scoreSecondHalf = 0x7ac; // int32
			 uintptr_t m_scoreOvertime = 0x7b0; // int32
			 uintptr_t m_szClanTeamname = 0x7b4; // char[129]
			 uintptr_t m_iClanID = 0x838; // uint32
			 uintptr_t m_szTeamFlagImage = 0x83c; // char[8]
			 uintptr_t m_szTeamLogoImage = 0x844; // char[8]
			 uintptr_t m_flNextResourceTime = 0x84c; // float32
			 uintptr_t m_iLastUpdateSentAt = 0x850; // int32
		}
	}
}
