#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace AimMatrixOpFixedSettings_t {
			 uintptr_t m_attachment = 0x0; // CAnimAttachment
			 uintptr_t m_damping = 0x80; // CAnimInputDamping
			 uintptr_t m_poseCacheHandles = 0x90; // CPoseHandle[10]
			 uintptr_t m_eBlendMode = 0xb8; // AimMatrixBlendMode
			 uintptr_t m_flMaxYawAngle = 0xbc; // float32
			 uintptr_t m_flMaxPitchAngle = 0xc0; // float32
			 uintptr_t m_nSequenceMaxFrame = 0xc4; // int32
			 uintptr_t m_nBoneMaskIndex = 0xc8; // int32
			 uintptr_t m_bTargetIsPosition = 0xcc; // bool
			 uintptr_t m_bUseBiasAndClamp = 0xcd; // bool
			 uintptr_t m_flBiasAndClampYawOffset = 0xd0; // float32
			 uintptr_t m_flBiasAndClampPitchOffset = 0xd4; // float32
			 uintptr_t m_biasAndClampBlendCurve = 0xd8; // CBlendCurve
		}
	}
}
