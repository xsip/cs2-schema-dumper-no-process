#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_Beam {
			 uintptr_t m_flFrameRate = 0xd28; // float32
			 uintptr_t m_flHDRColorScale = 0xd2c; // float32
			 uintptr_t m_flFireTime = 0xd30; // GameTime_t
			 uintptr_t m_flDamage = 0xd34; // float32
			 uintptr_t m_nNumBeamEnts = 0xd38; // uint8
			 uintptr_t m_queryHandleHalo = 0xd3c; // int32
			 uintptr_t m_hBaseMaterial = 0xd60; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_nHaloIndex = 0xd68; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_nBeamType = 0xd70; // BeamType_t
			 uintptr_t m_nBeamFlags = 0xd74; // uint32
			 uintptr_t m_hAttachEntity = 0xd78; // CHandle< C_BaseEntity >[10]
			 uintptr_t m_nAttachIndex = 0xda0; // AttachmentHandle_t[10]
			 uintptr_t m_fWidth = 0xdac; // float32
			 uintptr_t m_fEndWidth = 0xdb0; // float32
			 uintptr_t m_fFadeLength = 0xdb4; // float32
			 uintptr_t m_fHaloScale = 0xdb8; // float32
			 uintptr_t m_fAmplitude = 0xdbc; // float32
			 uintptr_t m_fStartFrame = 0xdc0; // float32
			 uintptr_t m_fSpeed = 0xdc4; // float32
			 uintptr_t m_flFrame = 0xdc8; // float32
			 uintptr_t m_nClipStyle = 0xdcc; // BeamClipStyle_t
			 uintptr_t m_bTurnedOff = 0xdd0; // bool
			 uintptr_t m_vecEndPos = 0xdd4; // Vector
			 uintptr_t m_hEndEntity = 0xde0; // CHandle< C_BaseEntity >
		}
	}
}
