#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerLerpObject {
			 uintptr_t m_iszLerpTarget = 0x960;
			 uintptr_t m_hLerpTarget = 0x968;
			 uintptr_t m_iszLerpTargetAttachment = 0x970;
			 uintptr_t m_hLerpTargetAttachment = 0x978;
			 uintptr_t m_flLerpDuration = 0x97c;
			 uintptr_t m_bLerpRestoreMoveType = 0x980;
			 uintptr_t m_bSingleLerpObject = 0x981;
			 uintptr_t m_vecLerpingObjects = 0x988;
			 uintptr_t m_iszLerpEffect = 0x9a0;
			 uintptr_t m_iszLerpSound = 0x9a8;
			 uintptr_t m_bAttachTouchingObject = 0x9b0;
			 uintptr_t m_hEntityToWaitForDisconnect = 0x9b4;
			 uintptr_t m_OnLerpStarted = 0x9b8;
			 uintptr_t m_OnLerpFinished = 0x9e0;
		}
	}
}
