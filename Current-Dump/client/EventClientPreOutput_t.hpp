#include <Windows.h>


namespace xsip {
	namespace client {
		namespace EventClientPreOutput_t {
			 uintptr_t m_LoopState = 0x0; // EngineLoopState_t
			 uintptr_t m_flRenderTime = 0x28; // float64
			 uintptr_t m_flRenderFrameTime = 0x30; // float64
			 uintptr_t m_flRenderFrameTimeUnbounded = 0x38; // float64
			 uintptr_t m_flRealTime = 0x40; // float32
			 uintptr_t m_bRenderOnly = 0x44; // bool
		}
	}
}
