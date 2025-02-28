#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimDemoCaptureSettings {
			 uintptr_t m_vecErrorRangeSplineRotation = 0x0; // Vector2D
			 uintptr_t m_vecErrorRangeSplineTranslation = 0x8; // Vector2D
			 uintptr_t m_vecErrorRangeSplineScale = 0x10; // Vector2D
			 uintptr_t m_flIkRotation_MaxSplineError = 0x18; // float32
			 uintptr_t m_flIkTranslation_MaxSplineError = 0x1c; // float32
			 uintptr_t m_vecErrorRangeQuantizationRotation = 0x20; // Vector2D
			 uintptr_t m_vecErrorRangeQuantizationTranslation = 0x28; // Vector2D
			 uintptr_t m_vecErrorRangeQuantizationScale = 0x30; // Vector2D
			 uintptr_t m_flIkRotation_MaxQuantizationError = 0x38; // float32
			 uintptr_t m_flIkTranslation_MaxQuantizationError = 0x3c; // float32
			 uintptr_t m_baseSequence = 0x40; // CUtlString
			 uintptr_t m_nBaseSequenceFrame = 0x48; // int32
			 uintptr_t m_boneSelectionMode = 0x4c; // EDemoBoneSelectionMode
			 uintptr_t m_bones = 0x50; // CUtlVector< BoneDemoCaptureSettings_t >
			 uintptr_t m_ikChains = 0x68; // CUtlVector< IKDemoCaptureSettings_t >
		}
	}
}
