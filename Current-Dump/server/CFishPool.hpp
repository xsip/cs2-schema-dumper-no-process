#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFishPool {
			 uintptr_t m_fishCount = 0x4f0;
			 uintptr_t m_maxRange = 0x4f4;
			 uintptr_t m_swimDepth = 0x4f8;
			 uintptr_t m_waterLevel = 0x4fc;
			 uintptr_t m_isDormant = 0x500;
			 uintptr_t m_fishes = 0x508;
			 uintptr_t m_visTimer = 0x520;
		}
	}
}
