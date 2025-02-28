#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CCSPlayerController_ActionTrackingServices {
			 uintptr_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t >
			 uintptr_t m_matchStats = 0x90; // CSMatchStats_t
			 uintptr_t m_iNumRoundKills = 0x110; // int32
			 uintptr_t m_iNumRoundKillsHeadshots = 0x114; // int32
			 uintptr_t m_unTotalRoundDamageDealt = 0x118; // uint32
		}
	}
}
