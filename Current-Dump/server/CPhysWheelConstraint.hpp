#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysWheelConstraint {
			 uintptr_t m_flSuspensionFrequency = 0x558; // float32
			 uintptr_t m_flSuspensionDampingRatio = 0x55c; // float32
			 uintptr_t m_flSuspensionHeightOffset = 0x560; // float32
			 uintptr_t m_bEnableSuspensionLimit = 0x564; // bool
			 uintptr_t m_flMinSuspensionOffset = 0x568; // float32
			 uintptr_t m_flMaxSuspensionOffset = 0x56c; // float32
			 uintptr_t m_bEnableSteeringLimit = 0x570; // bool
			 uintptr_t m_flMinSteeringAngle = 0x574; // float32
			 uintptr_t m_flMaxSteeringAngle = 0x578; // float32
			 uintptr_t m_flSteeringAxisFriction = 0x57c; // float32
			 uintptr_t m_flSpinAxisFriction = 0x580; // float32
		}
	}
}
