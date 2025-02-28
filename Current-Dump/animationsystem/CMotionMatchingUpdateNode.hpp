#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CMotionMatchingUpdateNode {
			 uintptr_t m_dataSet = 0x58; // CMotionDataSet
			 uintptr_t m_metrics = 0x78; // CUtlVector< CSmartPtr< CMotionMetricEvaluator > >
			 uintptr_t m_weights = 0x90; // CUtlVector< float32 >
			 uintptr_t m_bSearchEveryTick = 0xe0; // bool
			 uintptr_t m_flSearchInterval = 0xe4; // float32
			 uintptr_t m_bSearchWhenClipEnds = 0xe8; // bool
			 uintptr_t m_bSearchWhenGoalChanges = 0xe9; // bool
			 uintptr_t m_blendCurve = 0xec; // CBlendCurve
			 uintptr_t m_flSampleRate = 0xf4; // float32
			 uintptr_t m_flBlendTime = 0xf8; // float32
			 uintptr_t m_bLockClipWhenWaning = 0xfc; // bool
			 uintptr_t m_flSelectionThreshold = 0x100; // float32
			 uintptr_t m_flReselectionTimeWindow = 0x104; // float32
			 uintptr_t m_bEnableRotationCorrection = 0x108; // bool
			 uintptr_t m_bGoalAssist = 0x109; // bool
			 uintptr_t m_flGoalAssistDistance = 0x10c; // float32
			 uintptr_t m_flGoalAssistTolerance = 0x110; // float32
			 uintptr_t m_distanceScale_Damping = 0x118; // CAnimInputDamping
			 uintptr_t m_flDistanceScale_OuterRadius = 0x128; // float32
			 uintptr_t m_flDistanceScale_InnerRadius = 0x12c; // float32
			 uintptr_t m_flDistanceScale_MaxScale = 0x130; // float32
			 uintptr_t m_flDistanceScale_MinScale = 0x134; // float32
			 uintptr_t m_bEnableDistanceScaling = 0x138; // bool
		}
	}
}
