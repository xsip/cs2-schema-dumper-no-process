#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvFireSensor {
			 uintptr_t m_bEnabled = 0x4e0;
			 uintptr_t m_bHeatAtLevel = 0x4e1;
			 uintptr_t m_radius = 0x4e4;
			 uintptr_t m_targetLevel = 0x4e8;
			 uintptr_t m_targetTime = 0x4ec;
			 uintptr_t m_levelTime = 0x4f0;
			 uintptr_t m_OnHeatLevelStart = 0x4f8;
			 uintptr_t m_OnHeatLevelEnd = 0x520;
		}
	}
}
