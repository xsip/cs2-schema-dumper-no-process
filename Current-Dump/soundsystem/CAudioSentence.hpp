#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CAudioSentence {
			 uintptr_t m_bShouldVoiceDuck = 0x0; // bool
			 uintptr_t m_RunTimePhonemes = 0x8; // CUtlVector< CAudioPhonemeTag >
			 uintptr_t m_EmphasisSamples = 0x20; // CUtlVector< CAudioEmphasisSample >
			 uintptr_t m_morphData = 0x38; // CAudioMorphData
		}
	}
}
