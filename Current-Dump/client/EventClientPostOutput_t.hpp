#include <Windows.h>


namespace xsip {
	namespace client {
		namespace EventClientPostOutput_t {
			 uintptr_t m_LoopState = 0x0; // EngineLoopState_t
			 uintptr_t m_flRenderTime = 0x28; // float64
			 uintptr_t m_flRenderFrameTime = 0x30; // float32
			 uintptr_t m_flRenderFrameTimeUnbounded = 0x34; // float32
			 uintptr_t m_bRenderOnly = 0x38; // bool
		}
	}
}
