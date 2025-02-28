#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CDSPMixgroupModifier {
			 uintptr_t m_mixgroup = 0x0; // CUtlString
			 uintptr_t m_flModifier = 0x8; // float32
			 uintptr_t m_flModifierMin = 0xc; // float32
			 uintptr_t m_flSourceModifier = 0x10; // float32
			 uintptr_t m_flSourceModifierMin = 0x14; // float32
			 uintptr_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float32
		}
	}
}
