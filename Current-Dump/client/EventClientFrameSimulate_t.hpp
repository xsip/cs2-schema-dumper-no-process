#include <Windows.h>


namespace xsip {
	namespace client {
		namespace EventClientFrameSimulate_t {
			 uintptr_t m_LoopState = 0x0; // EngineLoopState_t
			 uintptr_t m_flRealTime = 0x28; // float32
			 uintptr_t m_flFrameTime = 0x2c; // float32
			 uintptr_t m_bScheduleSendTickPacket = 0x30; // bool
		}
	}
}
