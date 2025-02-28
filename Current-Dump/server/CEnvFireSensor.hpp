#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvFireSensor {
			 uintptr_t m_bEnabled = 0x4e0; // bool
			 uintptr_t m_bHeatAtLevel = 0x4e1; // bool
			 uintptr_t m_radius = 0x4e4; // float32
			 uintptr_t m_targetLevel = 0x4e8; // float32
			 uintptr_t m_targetTime = 0x4ec; // float32
			 uintptr_t m_levelTime = 0x4f0; // float32
			 uintptr_t m_OnHeatLevelStart = 0x4f8; // CEntityIOOutput
			 uintptr_t m_OnHeatLevelEnd = 0x520; // CEntityIOOutput
		}
	}
}
