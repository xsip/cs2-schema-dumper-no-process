#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicActiveAutosave {
			 uintptr_t m_TriggerHitPoints = 0x4f0; // int32
			 uintptr_t m_flTimeToTrigger = 0x4f4; // float32
			 uintptr_t m_flStartTime = 0x4f8; // GameTime_t
			 uintptr_t m_flDangerousTime = 0x4fc; // float32
		}
	}
}
