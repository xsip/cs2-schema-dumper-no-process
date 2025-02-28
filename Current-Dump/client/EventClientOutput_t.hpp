#include <Windows.h>


namespace xsip {
	namespace client {
		namespace EventClientOutput_t {
			 uintptr_t m_LoopState = 0x0; // EngineLoopState_t
			 uintptr_t m_flRenderTime = 0x28; // float32
			 uintptr_t m_flRealTime = 0x2c; // float32
			 uintptr_t m_flRenderFrameTimeUnbounded = 0x30; // float32
			 uintptr_t m_bRenderOnly = 0x34; // bool
		}
	}
}
