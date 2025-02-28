#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BaseFlex {
			 uintptr_t m_flexWeight = 0xf98; // C_NetworkUtlVectorBase< float32 >
			 uintptr_t m_vLookTargetPosition = 0xfb0; // Vector
			 uintptr_t m_blinktoggle = 0xfc8; // bool
			 uintptr_t m_nLastFlexUpdateFrameCount = 0x1028; // int32
			 uintptr_t m_CachedViewTarget = 0x102c; // Vector
			 uintptr_t m_nNextSceneEventId = 0x1038; // SceneEventId_t
			 uintptr_t m_iBlink = 0x103c; // int32
			 uintptr_t m_blinktime = 0x1040; // float32
			 uintptr_t m_prevblinktoggle = 0x1044; // bool
			 uintptr_t m_iJawOpen = 0x1048; // int32
			 uintptr_t m_flJawOpenAmount = 0x104c; // float32
			 uintptr_t m_flBlinkAmount = 0x1050; // float32
			 uintptr_t m_iMouthAttachment = 0x1054; // AttachmentHandle_t
			 uintptr_t m_iEyeAttachment = 0x1055; // AttachmentHandle_t
			 uintptr_t m_bResetFlexWeightsOnModelChange = 0x1056; // bool
			 uintptr_t m_nEyeOcclusionRendererBone = 0x1070; // int32
			 uintptr_t m_mEyeOcclusionRendererCameraToBoneTransform = 0x1074; // matrix3x4_t
			 uintptr_t m_vEyeOcclusionRendererHalfExtent = 0x10a4; // Vector
			 uintptr_t m_PhonemeClasses = 0x10c0; // C_BaseFlex::Emphasized_Phoneme[3]
		}
	}
}
