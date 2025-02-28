#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CBoneMaskUpdateNode {
			 uintptr_t m_nWeightListIndex = 0x8c; // int32
			 uintptr_t m_flRootMotionBlend = 0x90; // float32
			 uintptr_t m_blendSpace = 0x94; // BoneMaskBlendSpace
			 uintptr_t m_footMotionTiming = 0x98; // BinaryNodeChildOption
			 uintptr_t m_bUseBlendScale = 0x9c; // bool
			 uintptr_t m_blendValueSource = 0xa0; // AnimValueSource
			 uintptr_t m_hBlendParameter = 0xa4; // CAnimParamHandle
		}
	}
}
