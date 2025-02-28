#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysWheelConstraint {
			 uintptr_t m_flSuspensionFrequency = 0x558;
			 uintptr_t m_flSuspensionDampingRatio = 0x55c;
			 uintptr_t m_flSuspensionHeightOffset = 0x560;
			 uintptr_t m_bEnableSuspensionLimit = 0x564;
			 uintptr_t m_flMinSuspensionOffset = 0x568;
			 uintptr_t m_flMaxSuspensionOffset = 0x56c;
			 uintptr_t m_bEnableSteeringLimit = 0x570;
			 uintptr_t m_flMinSteeringAngle = 0x574;
			 uintptr_t m_flMaxSteeringAngle = 0x578;
			 uintptr_t m_flSteeringAxisFriction = 0x57c;
			 uintptr_t m_flSpinAxisFriction = 0x580;
		}
	}
}
