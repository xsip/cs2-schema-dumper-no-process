#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CFootLockUpdateNode {
			 uintptr_t m_opFixedSettings = 0x68; // FootLockPoseOpFixedSettings
			 uintptr_t m_footSettings = 0xd0; // CUtlVector< FootFixedSettings >
			 uintptr_t m_hipShiftDamping = 0xe8; // CAnimInputDamping
			 uintptr_t m_rootHeightDamping = 0xf8; // CAnimInputDamping
			 uintptr_t m_flStrideCurveScale = 0x108; // float32
			 uintptr_t m_flStrideCurveLimitScale = 0x10c; // float32
			 uintptr_t m_flStepHeightIncreaseScale = 0x110; // float32
			 uintptr_t m_flStepHeightDecreaseScale = 0x114; // float32
			 uintptr_t m_flHipShiftScale = 0x118; // float32
			 uintptr_t m_flBlendTime = 0x11c; // float32
			 uintptr_t m_flMaxRootHeightOffset = 0x120; // float32
			 uintptr_t m_flMinRootHeightOffset = 0x124; // float32
			 uintptr_t m_flTiltPlanePitchSpringStrength = 0x128; // float32
			 uintptr_t m_flTiltPlaneRollSpringStrength = 0x12c; // float32
			 uintptr_t m_bApplyFootRotationLimits = 0x130; // bool
			 uintptr_t m_bApplyHipShift = 0x131; // bool
			 uintptr_t m_bModulateStepHeight = 0x132; // bool
			 uintptr_t m_bResetChild = 0x133; // bool
			 uintptr_t m_bEnableVerticalCurvedPaths = 0x134; // bool
			 uintptr_t m_bEnableRootHeightDamping = 0x135; // bool
		}
	}
}
