#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CIronSightController {
			 uintptr_t m_bIronSightAvailable = 0x8; // bool
			 uintptr_t m_flIronSightAmount = 0xc; // float32
			 uintptr_t m_flIronSightAmountGained = 0x10; // float32
			 uintptr_t m_flIronSightAmountBiased = 0x14; // float32
		}
	}
}
