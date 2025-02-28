#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayerResource {
			 uintptr_t m_bHostageAlive = 0x4e0; // bool[12]
			 uintptr_t m_isHostageFollowingSomeone = 0x4ec; // bool[12]
			 uintptr_t m_iHostageEntityIDs = 0x4f8; // CEntityIndex[12]
			 uintptr_t m_bombsiteCenterA = 0x528; // Vector
			 uintptr_t m_bombsiteCenterB = 0x534; // Vector
			 uintptr_t m_hostageRescueX = 0x540; // int32[4]
			 uintptr_t m_hostageRescueY = 0x550; // int32[4]
			 uintptr_t m_hostageRescueZ = 0x560; // int32[4]
			 uintptr_t m_bEndMatchNextMapAllVoted = 0x570; // bool
			 uintptr_t m_foundGoalPositions = 0x571; // bool
		}
	}
}
