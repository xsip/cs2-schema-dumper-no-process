#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CHitBox {
			 uintptr_t m_name = 0x0; // CUtlString
			 uintptr_t m_sSurfaceProperty = 0x8; // CUtlString
			 uintptr_t m_sBoneName = 0x10; // CUtlString
			 uintptr_t m_vMinBounds = 0x18; // Vector
			 uintptr_t m_vMaxBounds = 0x24; // Vector
			 uintptr_t m_flShapeRadius = 0x30; // float32
			 uintptr_t m_nBoneNameHash = 0x34; // uint32
			 uintptr_t m_nGroupId = 0x38; // int32
			 uintptr_t m_nShapeType = 0x3c; // uint8
			 uintptr_t m_bTranslationOnly = 0x3d; // bool
			 uintptr_t m_CRC = 0x40; // uint32
			 uintptr_t m_cRenderColor = 0x44; // Color
			 uintptr_t m_nHitBoxIndex = 0x48; // uint16
		}
	}
}
