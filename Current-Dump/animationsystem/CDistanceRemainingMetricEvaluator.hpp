#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CDistanceRemainingMetricEvaluator {
			 uintptr_t m_flMaxDistance = 0x50;
			 uintptr_t m_flMinDistance = 0x54;
			 uintptr_t m_flStartGoalFilterDistance = 0x58;
			 uintptr_t m_flMaxGoalOvershootScale = 0x5c;
			 uintptr_t m_bFilterFixedMinDistance = 0x60;
			 uintptr_t m_bFilterGoalDistance = 0x61;
			 uintptr_t m_bFilterGoalOvershoot = 0x62;
		}
	}
}
