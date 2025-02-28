#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace FootLockPoseOpFixedSettings {
			 uintptr_t m_footInfo = 0x0; // CUtlVector< FootFixedData_t >
			 uintptr_t m_hipDampingSettings = 0x18; // CAnimInputDamping
			 uintptr_t m_nHipBoneIndex = 0x28; // int32
			 uintptr_t m_ikSolverType = 0x2c; // IKSolverType
			 uintptr_t m_bApplyTilt = 0x30; // bool
			 uintptr_t m_bApplyHipDrop = 0x31; // bool
			 uintptr_t m_bAlwaysUseFallbackHinge = 0x32; // bool
			 uintptr_t m_bApplyFootRotationLimits = 0x33; // bool
			 uintptr_t m_bApplyLegTwistLimits = 0x34; // bool
			 uintptr_t m_flMaxFootHeight = 0x38; // float32
			 uintptr_t m_flExtensionScale = 0x3c; // float32
			 uintptr_t m_flMaxLegTwist = 0x40; // float32
			 uintptr_t m_bEnableLockBreaking = 0x44; // bool
			 uintptr_t m_flLockBreakTolerance = 0x48; // float32
			 uintptr_t m_flLockBlendTime = 0x4c; // float32
			 uintptr_t m_bEnableStretching = 0x50; // bool
			 uintptr_t m_flMaxStretchAmount = 0x54; // float32
			 uintptr_t m_flStretchExtensionScale = 0x58; // float32
		}
	}
}
