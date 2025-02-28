#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace NmCompressionSettings_t {
			 uintptr_t m_translationRangeX = 0x0; // NmCompressionSettings_t::QuantizationRange_t
			 uintptr_t m_translationRangeY = 0x8; // NmCompressionSettings_t::QuantizationRange_t
			 uintptr_t m_translationRangeZ = 0x10; // NmCompressionSettings_t::QuantizationRange_t
			 uintptr_t m_scaleRange = 0x18; // NmCompressionSettings_t::QuantizationRange_t
			 uintptr_t m_constantRotation = 0x20; // Quaternion
			 uintptr_t m_bIsRotationStatic = 0x30; // bool
			 uintptr_t m_bIsTranslationStatic = 0x31; // bool
			 uintptr_t m_bIsScaleStatic = 0x32; // bool
		}
	}
}
