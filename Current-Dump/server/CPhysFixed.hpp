#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysFixed {
			 uintptr_t m_flLinearFrequency = 0x558; // float32
			 uintptr_t m_flLinearDampingRatio = 0x55c; // float32
			 uintptr_t m_flAngularFrequency = 0x560; // float32
			 uintptr_t m_flAngularDampingRatio = 0x564; // float32
			 uintptr_t m_bEnableLinearConstraint = 0x568; // bool
			 uintptr_t m_bEnableAngularConstraint = 0x569; // bool
		}
	}
}
