#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CSosGroupActionSoundeventMinMaxValuesSchema {
			 uintptr_t m_strQueryPublicFieldName = 0x18; // CUtlString
			 uintptr_t m_strDelayPublicFieldName = 0x20; // CUtlString
			 uintptr_t m_bExcludeStoppedSounds = 0x28; // bool
			 uintptr_t m_bExcludeDelayedSounds = 0x29; // bool
			 uintptr_t m_bExcludeSoundsBelowThreshold = 0x2a; // bool
			 uintptr_t m_flExcludeSoundsMinThresholdValue = 0x2c; // float32
			 uintptr_t m_bExcludSoundsAboveThreshold = 0x30; // bool
			 uintptr_t m_flExcludeSoundsMaxThresholdValue = 0x34; // float32
			 uintptr_t m_strMinValueName = 0x38; // CUtlString
			 uintptr_t m_strMaxValueName = 0x40; // CUtlString
		}
	}
}
