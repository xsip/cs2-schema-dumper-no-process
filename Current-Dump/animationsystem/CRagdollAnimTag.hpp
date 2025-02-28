#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CRagdollAnimTag {
			 uintptr_t m_nPoseControl = 0x58; // AnimPoseControl
			 uintptr_t m_flFrequency = 0x5c; // float32
			 uintptr_t m_flDampingRatio = 0x60; // float32
			 uintptr_t m_flDecayDuration = 0x64; // float32
			 uintptr_t m_flDecayBias = 0x68; // float32
			 uintptr_t m_bDestroy = 0x6c; // bool
		}
	}
}
