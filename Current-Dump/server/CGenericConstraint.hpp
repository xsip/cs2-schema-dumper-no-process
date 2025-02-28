#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGenericConstraint {
			 uintptr_t m_nLinearMotionX = 0x560; // JointMotion_t
			 uintptr_t m_nLinearMotionY = 0x564; // JointMotion_t
			 uintptr_t m_nLinearMotionZ = 0x568; // JointMotion_t
			 uintptr_t m_flLinearFrequencyX = 0x56c; // float32
			 uintptr_t m_flLinearFrequencyY = 0x570; // float32
			 uintptr_t m_flLinearFrequencyZ = 0x574; // float32
			 uintptr_t m_flLinearDampingRatioX = 0x578; // float32
			 uintptr_t m_flLinearDampingRatioY = 0x57c; // float32
			 uintptr_t m_flLinearDampingRatioZ = 0x580; // float32
			 uintptr_t m_flMaxLinearImpulseX = 0x584; // float32
			 uintptr_t m_flMaxLinearImpulseY = 0x588; // float32
			 uintptr_t m_flMaxLinearImpulseZ = 0x58c; // float32
			 uintptr_t m_flBreakAfterTimeX = 0x590; // float32
			 uintptr_t m_flBreakAfterTimeY = 0x594; // float32
			 uintptr_t m_flBreakAfterTimeZ = 0x598; // float32
			 uintptr_t m_flBreakAfterTimeStartTimeX = 0x59c; // GameTime_t
			 uintptr_t m_flBreakAfterTimeStartTimeY = 0x5a0; // GameTime_t
			 uintptr_t m_flBreakAfterTimeStartTimeZ = 0x5a4; // GameTime_t
			 uintptr_t m_flBreakAfterTimeThresholdX = 0x5a8; // float32
			 uintptr_t m_flBreakAfterTimeThresholdY = 0x5ac; // float32
			 uintptr_t m_flBreakAfterTimeThresholdZ = 0x5b0; // float32
			 uintptr_t m_flNotifyForceX = 0x5b4; // float32
			 uintptr_t m_flNotifyForceY = 0x5b8; // float32
			 uintptr_t m_flNotifyForceZ = 0x5bc; // float32
			 uintptr_t m_flNotifyForceMinTimeX = 0x5c0; // float32
			 uintptr_t m_flNotifyForceMinTimeY = 0x5c4; // float32
			 uintptr_t m_flNotifyForceMinTimeZ = 0x5c8; // float32
			 uintptr_t m_flNotifyForceLastTimeX = 0x5cc; // GameTime_t
			 uintptr_t m_flNotifyForceLastTimeY = 0x5d0; // GameTime_t
			 uintptr_t m_flNotifyForceLastTimeZ = 0x5d4; // GameTime_t
			 uintptr_t m_bAxisNotifiedX = 0x5d8; // bool
			 uintptr_t m_bAxisNotifiedY = 0x5d9; // bool
			 uintptr_t m_bAxisNotifiedZ = 0x5da; // bool
			 uintptr_t m_nAngularMotionX = 0x5dc; // JointMotion_t
			 uintptr_t m_nAngularMotionY = 0x5e0; // JointMotion_t
			 uintptr_t m_nAngularMotionZ = 0x5e4; // JointMotion_t
			 uintptr_t m_flAngularFrequencyX = 0x5e8; // float32
			 uintptr_t m_flAngularFrequencyY = 0x5ec; // float32
			 uintptr_t m_flAngularFrequencyZ = 0x5f0; // float32
			 uintptr_t m_flAngularDampingRatioX = 0x5f4; // float32
			 uintptr_t m_flAngularDampingRatioY = 0x5f8; // float32
			 uintptr_t m_flAngularDampingRatioZ = 0x5fc; // float32
			 uintptr_t m_flMaxAngularImpulseX = 0x600; // float32
			 uintptr_t m_flMaxAngularImpulseY = 0x604; // float32
			 uintptr_t m_flMaxAngularImpulseZ = 0x608; // float32
			 uintptr_t m_NotifyForceReachedX = 0x610; // CEntityIOOutput
			 uintptr_t m_NotifyForceReachedY = 0x638; // CEntityIOOutput
			 uintptr_t m_NotifyForceReachedZ = 0x660; // CEntityIOOutput
		}
	}
}
