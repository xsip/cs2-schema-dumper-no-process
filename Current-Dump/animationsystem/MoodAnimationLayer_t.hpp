#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace MoodAnimationLayer_t {
			 uintptr_t m_sName = 0x0; // CUtlString
			 uintptr_t m_bActiveListening = 0x8; // bool
			 uintptr_t m_bActiveTalking = 0x9; // bool
			 uintptr_t m_layerAnimations = 0x10; // CUtlVector< MoodAnimation_t >
			 uintptr_t m_flIntensity = 0x28; // CRangeFloat
			 uintptr_t m_flDurationScale = 0x30; // CRangeFloat
			 uintptr_t m_bScaleWithInts = 0x38; // bool
			 uintptr_t m_flNextStart = 0x3c; // CRangeFloat
			 uintptr_t m_flStartOffset = 0x44; // CRangeFloat
			 uintptr_t m_flEndOffset = 0x4c; // CRangeFloat
			 uintptr_t m_flFadeIn = 0x54; // float32
			 uintptr_t m_flFadeOut = 0x58; // float32
		}
	}
}
