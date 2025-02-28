#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvShake {
			 uintptr_t m_limitToEntity = 0x4e0; // CUtlSymbolLarge
			 uintptr_t m_Amplitude = 0x4e8; // float32
			 uintptr_t m_Frequency = 0x4ec; // float32
			 uintptr_t m_Duration = 0x4f0; // float32
			 uintptr_t m_Radius = 0x4f4; // float32
			 uintptr_t m_stopTime = 0x4f8; // GameTime_t
			 uintptr_t m_nextShake = 0x4fc; // GameTime_t
			 uintptr_t m_currentAmp = 0x500; // float32
			 uintptr_t m_maxForce = 0x504; // Vector
			 uintptr_t m_shakeCallback = 0x518; // CPhysicsShake
		}
	}
}
