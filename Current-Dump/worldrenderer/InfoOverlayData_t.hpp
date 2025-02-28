#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace InfoOverlayData_t {
			 uintptr_t m_transform = 0x0; // matrix3x4_t
			 uintptr_t m_flWidth = 0x30; // float32
			 uintptr_t m_flHeight = 0x34; // float32
			 uintptr_t m_flDepth = 0x38; // float32
			 uintptr_t m_vUVStart = 0x3c; // Vector2D
			 uintptr_t m_vUVEnd = 0x44; // Vector2D
			 uintptr_t m_pMaterial = 0x50; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_nRenderOrder = 0x58; // int32
			 uintptr_t m_vTintColor = 0x5c; // Vector4D
			 uintptr_t m_nSequenceOverride = 0x6c; // int32
		}
	}
}
