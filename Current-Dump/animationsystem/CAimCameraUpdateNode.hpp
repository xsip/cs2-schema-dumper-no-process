#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAimCameraUpdateNode {
			 uintptr_t m_hParameterPosition = 0x68; // CAnimParamHandle
			 uintptr_t m_hParameterOrientation = 0x6a; // CAnimParamHandle
			 uintptr_t m_hParameterSpineRotationWeight = 0x6c; // CAnimParamHandle
			 uintptr_t m_hParameterPelvisOffset = 0x6e; // CAnimParamHandle
			 uintptr_t m_hParameterUseIK = 0x70; // CAnimParamHandle
			 uintptr_t m_hParameterCameraOnly = 0x72; // CAnimParamHandle
			 uintptr_t m_hParameterWeaponDepenetrationDistance = 0x74; // CAnimParamHandle
			 uintptr_t m_hParameterWeaponDepenetrationDelta = 0x76; // CAnimParamHandle
			 uintptr_t m_hParameterCameraClearanceDistance = 0x78; // CAnimParamHandle
			 uintptr_t m_opFixedSettings = 0x80; // AimCameraOpFixedSettings_t
		}
	}
}
