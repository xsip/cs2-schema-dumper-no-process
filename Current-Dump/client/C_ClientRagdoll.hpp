#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_ClientRagdoll {
			 uintptr_t m_bFadeOut = 0xf88; // bool
			 uintptr_t m_bImportant = 0xf89; // bool
			 uintptr_t m_flEffectTime = 0xf8c; // GameTime_t
			 uintptr_t m_gibDespawnTime = 0xf90; // GameTime_t
			 uintptr_t m_iCurrentFriction = 0xf94; // int32
			 uintptr_t m_iMinFriction = 0xf98; // int32
			 uintptr_t m_iMaxFriction = 0xf9c; // int32
			 uintptr_t m_iFrictionAnimState = 0xfa0; // int32
			 uintptr_t m_bReleaseRagdoll = 0xfa4; // bool
			 uintptr_t m_iEyeAttachment = 0xfa5; // AttachmentHandle_t
			 uintptr_t m_bFadingOut = 0xfa6; // bool
			 uintptr_t m_flScaleEnd = 0xfa8; // float32[10]
			 uintptr_t m_flScaleTimeStart = 0xfd0; // GameTime_t[10]
			 uintptr_t m_flScaleTimeEnd = 0xff8; // GameTime_t[10]
		}
	}
}
