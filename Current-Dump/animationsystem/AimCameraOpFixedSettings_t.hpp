#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace AimCameraOpFixedSettings_t {
			 uintptr_t m_nChainIndex = 0x0; // int32
			 uintptr_t m_nCameraJointIndex = 0x4; // int32
			 uintptr_t m_nPelvisJointIndex = 0x8; // int32
			 uintptr_t m_nClavicleLeftJointIndex = 0xc; // int32
			 uintptr_t m_nClavicleRightJointIndex = 0x10; // int32
			 uintptr_t m_nDepenetrationJointIndex = 0x14; // int32
			 uintptr_t m_propJoints = 0x18; // CUtlVector< int32 >
		}
	}
}
