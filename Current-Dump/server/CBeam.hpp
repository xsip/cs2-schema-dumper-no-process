#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBeam {
			 uintptr_t m_flFrameRate = 0x790; // float32
			 uintptr_t m_flHDRColorScale = 0x794; // float32
			 uintptr_t m_flFireTime = 0x798; // GameTime_t
			 uintptr_t m_flDamage = 0x79c; // float32
			 uintptr_t m_nNumBeamEnts = 0x7a0; // uint8
			 uintptr_t m_hBaseMaterial = 0x7a8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_nHaloIndex = 0x7b0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_nBeamType = 0x7b8; // BeamType_t
			 uintptr_t m_nBeamFlags = 0x7bc; // uint32
			 uintptr_t m_hAttachEntity = 0x7c0; // CHandle< CBaseEntity >[10]
			 uintptr_t m_nAttachIndex = 0x7e8; // AttachmentHandle_t[10]
			 uintptr_t m_fWidth = 0x7f4; // float32
			 uintptr_t m_fEndWidth = 0x7f8; // float32
			 uintptr_t m_fFadeLength = 0x7fc; // float32
			 uintptr_t m_fHaloScale = 0x800; // float32
			 uintptr_t m_fAmplitude = 0x804; // float32
			 uintptr_t m_fStartFrame = 0x808; // float32
			 uintptr_t m_fSpeed = 0x80c; // float32
			 uintptr_t m_flFrame = 0x810; // float32
			 uintptr_t m_nClipStyle = 0x814; // BeamClipStyle_t
			 uintptr_t m_bTurnedOff = 0x818; // bool
			 uintptr_t m_vecEndPos = 0x81c; // Vector
			 uintptr_t m_hEndEntity = 0x828; // CHandle< CBaseEntity >
			 uintptr_t m_nDissolveType = 0x82c; // int32
		}
	}
}
