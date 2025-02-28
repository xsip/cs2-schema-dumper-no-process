#include <Windows.h>


namespace xsip {
	namespace client {
		namespace EventClientProcessInput_t {
			 uintptr_t m_LoopState = 0x0; // EngineLoopState_t
			 uintptr_t m_flRealTime = 0x28; // float32
			 uintptr_t m_flTickInterval = 0x2c; // float32
			 uintptr_t m_flTickStartTime = 0x30; // float64
		}
	}
}
