#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace TwoBoneIKSettings_t {
			 uintptr_t m_endEffectorType = 0x0; // IkEndEffectorType
			 uintptr_t m_endEffectorAttachment = 0x10; // CAnimAttachment
			 uintptr_t m_targetType = 0x90; // IkTargetType
			 uintptr_t m_targetAttachment = 0xa0; // CAnimAttachment
			 uintptr_t m_targetBoneIndex = 0x120; // int32
			 uintptr_t m_hPositionParam = 0x124; // CAnimParamHandle
			 uintptr_t m_hRotationParam = 0x126; // CAnimParamHandle
			 uintptr_t m_bAlwaysUseFallbackHinge = 0x128; // bool
			 uintptr_t m_vLsFallbackHingeAxis = 0x130; // VectorAligned
			 uintptr_t m_nFixedBoneIndex = 0x140; // int32
			 uintptr_t m_nMiddleBoneIndex = 0x144; // int32
			 uintptr_t m_nEndBoneIndex = 0x148; // int32
			 uintptr_t m_bMatchTargetOrientation = 0x14c; // bool
			 uintptr_t m_bConstrainTwist = 0x14d; // bool
			 uintptr_t m_flMaxTwist = 0x150; // float32
		}
	}
}
