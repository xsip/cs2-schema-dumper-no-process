#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerLerpObject {
			 uintptr_t m_iszLerpTarget = 0x960; // CUtlSymbolLarge
			 uintptr_t m_hLerpTarget = 0x968; // CHandle< CBaseEntity >
			 uintptr_t m_iszLerpTargetAttachment = 0x970; // CUtlSymbolLarge
			 uintptr_t m_hLerpTargetAttachment = 0x978; // AttachmentHandle_t
			 uintptr_t m_flLerpDuration = 0x97c; // float32
			 uintptr_t m_bLerpRestoreMoveType = 0x980; // bool
			 uintptr_t m_bSingleLerpObject = 0x981; // bool
			 uintptr_t m_vecLerpingObjects = 0x988; // CUtlVector< lerpdata_t >
			 uintptr_t m_iszLerpEffect = 0x9a0; // CUtlSymbolLarge
			 uintptr_t m_iszLerpSound = 0x9a8; // CUtlSymbolLarge
			 uintptr_t m_bAttachTouchingObject = 0x9b0; // bool
			 uintptr_t m_hEntityToWaitForDisconnect = 0x9b4; // CHandle< CBaseEntity >
			 uintptr_t m_OnLerpStarted = 0x9b8; // CEntityIOOutput
			 uintptr_t m_OnLerpFinished = 0x9e0; // CEntityIOOutput
		}
	}
}
