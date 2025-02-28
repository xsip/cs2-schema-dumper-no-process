#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace LookAtOpFixedSettings_t {
			 uintptr_t m_attachment = 0x0; // CAnimAttachment
			 uintptr_t m_damping = 0x80; // CAnimInputDamping
			 uintptr_t m_bones = 0x90; // CUtlVector< LookAtBone_t >
			 uintptr_t m_flYawLimit = 0xa8; // float32
			 uintptr_t m_flPitchLimit = 0xac; // float32
			 uintptr_t m_flHysteresisInnerAngle = 0xb0; // float32
			 uintptr_t m_flHysteresisOuterAngle = 0xb4; // float32
			 uintptr_t m_bRotateYawForward = 0xb8; // bool
			 uintptr_t m_bMaintainUpDirection = 0xb9; // bool
			 uintptr_t m_bTargetIsPosition = 0xba; // bool
			 uintptr_t m_bUseHysteresis = 0xbb; // bool
		}
	}
}
