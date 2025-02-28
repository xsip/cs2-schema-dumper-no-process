#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysBallSocket {
			 uintptr_t m_flJointFriction = 0x558; // float32
			 uintptr_t m_bEnableSwingLimit = 0x55c; // bool
			 uintptr_t m_flSwingLimit = 0x560; // float32
			 uintptr_t m_bEnableTwistLimit = 0x564; // bool
			 uintptr_t m_flMinTwistAngle = 0x568; // float32
			 uintptr_t m_flMaxTwistAngle = 0x56c; // float32
		}
	}
}
