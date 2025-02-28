#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayerController_ActionTrackingServices {
			 uintptr_t m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t >
			 uintptr_t m_matchStats = 0xb0; // CSMatchStats_t
			 uintptr_t m_iNumRoundKills = 0x170; // int32
			 uintptr_t m_iNumRoundKillsHeadshots = 0x174; // int32
			 uintptr_t m_unTotalRoundDamageDealt = 0x178; // uint32
		}
	}
}
