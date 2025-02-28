#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_CSPlayerResource {
			 uintptr_t m_bHostageAlive = 0x568; // bool[12]
			 uintptr_t m_isHostageFollowingSomeone = 0x574; // bool[12]
			 uintptr_t m_iHostageEntityIDs = 0x580; // CEntityIndex[12]
			 uintptr_t m_bombsiteCenterA = 0x5b0; // Vector
			 uintptr_t m_bombsiteCenterB = 0x5bc; // Vector
			 uintptr_t m_hostageRescueX = 0x5c8; // int32[4]
			 uintptr_t m_hostageRescueY = 0x5d8; // int32[4]
			 uintptr_t m_hostageRescueZ = 0x5e8; // int32[4]
			 uintptr_t m_bEndMatchNextMapAllVoted = 0x5f8; // bool
			 uintptr_t m_foundGoalPositions = 0x5f9; // bool
		}
	}
}
