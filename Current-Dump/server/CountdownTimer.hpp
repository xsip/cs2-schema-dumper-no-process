#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CountdownTimer {
			 uintptr_t m_duration = 0x8; // float32
			 uintptr_t m_timestamp = 0xc; // GameTime_t
			 uintptr_t m_timescale = 0x10; // float32
			 uintptr_t m_nWorldGroupId = 0x14; // WorldGroupId_t
		}
	}
}
