#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimDemoCaptureSettings {
			 uintptr_t m_vecErrorRangeSplineRotation = 0x0;
			 uintptr_t m_vecErrorRangeSplineTranslation = 0x8;
			 uintptr_t m_vecErrorRangeSplineScale = 0x10;
			 uintptr_t m_flIkRotation_MaxSplineError = 0x18;
			 uintptr_t m_flIkTranslation_MaxSplineError = 0x1c;
			 uintptr_t m_vecErrorRangeQuantizationRotation = 0x20;
			 uintptr_t m_vecErrorRangeQuantizationTranslation = 0x28;
			 uintptr_t m_vecErrorRangeQuantizationScale = 0x30;
			 uintptr_t m_flIkRotation_MaxQuantizationError = 0x38;
			 uintptr_t m_flIkTranslation_MaxQuantizationError = 0x3c;
			 uintptr_t m_baseSequence = 0x40;
			 uintptr_t m_nBaseSequenceFrame = 0x48;
			 uintptr_t m_boneSelectionMode = 0x4c;
			 uintptr_t m_bones = 0x50;
			 uintptr_t m_ikChains = 0x68;
		}
	}
}
