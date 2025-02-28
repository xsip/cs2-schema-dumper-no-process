#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CHitReactUpdateNode {
			 uintptr_t m_opFixedSettings = 0x68; // HitReactFixedSettings_t
			 uintptr_t m_triggerParam = 0xb4; // CAnimParamHandle
			 uintptr_t m_hitBoneParam = 0xb6; // CAnimParamHandle
			 uintptr_t m_hitOffsetParam = 0xb8; // CAnimParamHandle
			 uintptr_t m_hitDirectionParam = 0xba; // CAnimParamHandle
			 uintptr_t m_hitStrengthParam = 0xbc; // CAnimParamHandle
			 uintptr_t m_flMinDelayBetweenHits = 0xc0; // float32
			 uintptr_t m_bResetChild = 0xc4; // bool
		}
	}
}
