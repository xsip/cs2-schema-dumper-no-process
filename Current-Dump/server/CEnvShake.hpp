#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvShake {
			 uintptr_t m_limitToEntity = 0x4e0;
			 uintptr_t m_Amplitude = 0x4e8;
			 uintptr_t m_Frequency = 0x4ec;
			 uintptr_t m_Duration = 0x4f0;
			 uintptr_t m_Radius = 0x4f4;
			 uintptr_t m_stopTime = 0x4f8;
			 uintptr_t m_nextShake = 0x4fc;
			 uintptr_t m_currentAmp = 0x500;
			 uintptr_t m_maxForce = 0x504;
			 uintptr_t m_shakeCallback = 0x518;
		}
	}
}
