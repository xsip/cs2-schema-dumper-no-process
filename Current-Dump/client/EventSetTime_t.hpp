#include <Windows.h>


namespace xsip {
	namespace client {
		namespace EventSetTime_t {
			 uintptr_t m_LoopState = 0x0; // EngineLoopState_t
			 uintptr_t m_nClientOutputFrames = 0x28; // int32
			 uintptr_t m_flRealTime = 0x30; // float64
			 uintptr_t m_flRenderTime = 0x38; // float64
			 uintptr_t m_flRenderFrameTime = 0x40; // float64
			 uintptr_t m_flRenderFrameTimeUnbounded = 0x48; // float64
			 uintptr_t m_flRenderFrameTimeUnscaled = 0x50; // float64
			 uintptr_t m_flTickRemainder = 0x58; // float64
		}
	}
}
