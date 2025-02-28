#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSAdditionalMatchStats_t {
			 uintptr_t m_numRoundsSurvived = 0x18;
			 uintptr_t m_maxNumRoundsSurvived = 0x1c;
			 uintptr_t m_numRoundsSurvivedTotal = 0x20;
			 uintptr_t m_iRoundsWonWithoutPurchase = 0x24;
			 uintptr_t m_iRoundsWonWithoutPurchaseTotal = 0x28;
			 uintptr_t m_numFirstKills = 0x2c;
			 uintptr_t m_numClutchKills = 0x30;
			 uintptr_t m_numPistolKills = 0x34;
			 uintptr_t m_numSniperKills = 0x38;
			 uintptr_t m_iNumSuicides = 0x3c;
			 uintptr_t m_iNumTeamKills = 0x40;
			 uintptr_t m_iTeamDamage = 0x44;
		}
	}
}
