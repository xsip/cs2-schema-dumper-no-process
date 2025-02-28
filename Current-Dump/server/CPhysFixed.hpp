#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysFixed {
			 uintptr_t m_flLinearFrequency = 0x558;
			 uintptr_t m_flLinearDampingRatio = 0x55c;
			 uintptr_t m_flAngularFrequency = 0x560;
			 uintptr_t m_flAngularDampingRatio = 0x564;
			 uintptr_t m_bEnableLinearConstraint = 0x568;
			 uintptr_t m_bEnableAngularConstraint = 0x569;
		}
	}
}
