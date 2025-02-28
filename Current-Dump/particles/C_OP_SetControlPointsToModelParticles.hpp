#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetControlPointsToModelParticles {
			 uintptr_t m_HitboxSetName = 0x1c0; // char[128]
			 uintptr_t m_AttachmentName = 0x240; // char[128]
			 uintptr_t m_nFirstControlPoint = 0x2c0; // int32
			 uintptr_t m_nNumControlPoints = 0x2c4; // int32
			 uintptr_t m_nFirstSourcePoint = 0x2c8; // int32
			 uintptr_t m_bSkin = 0x2cc; // bool
			 uintptr_t m_bAttachment = 0x2cd; // bool
		}
	}
}
