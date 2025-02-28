#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBtNodeConditionInactive {
			 uintptr_t m_flRoundStartThresholdSeconds = 0x78; // float32
			 uintptr_t m_flSensorInactivityThresholdSeconds = 0x7c; // float32
			 uintptr_t m_SensorInactivityTimer = 0x80; // CountdownTimer
		}
	}
}
