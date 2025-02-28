#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFishPool {
			 uintptr_t m_fishCount = 0x4f0; // int32
			 uintptr_t m_maxRange = 0x4f4; // float32
			 uintptr_t m_swimDepth = 0x4f8; // float32
			 uintptr_t m_waterLevel = 0x4fc; // float32
			 uintptr_t m_isDormant = 0x500; // bool
			 uintptr_t m_fishes = 0x508; // CUtlVector< CHandle< CFish > >
			 uintptr_t m_visTimer = 0x520; // CountdownTimer
		}
	}
}
