#include <Windows.h>


namespace xsip {
	namespace server {
		namespace VelocitySampler {
			 uintptr_t m_prevSample = 0x0; // Vector
			 uintptr_t m_fPrevSampleTime = 0xc; // GameTime_t
			 uintptr_t m_fIdealSampleRate = 0x10; // float32
		}
	}
}
