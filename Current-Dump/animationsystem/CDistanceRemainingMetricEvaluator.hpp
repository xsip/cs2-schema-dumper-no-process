#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CDistanceRemainingMetricEvaluator {
			 uintptr_t m_flMaxDistance = 0x50; // float32
			 uintptr_t m_flMinDistance = 0x54; // float32
			 uintptr_t m_flStartGoalFilterDistance = 0x58; // float32
			 uintptr_t m_flMaxGoalOvershootScale = 0x5c; // float32
			 uintptr_t m_bFilterFixedMinDistance = 0x60; // bool
			 uintptr_t m_bFilterGoalDistance = 0x61; // bool
			 uintptr_t m_bFilterGoalOvershoot = 0x62; // bool
		}
	}
}
