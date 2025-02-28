#include <Windows.h>


namespace xsip {
	namespace client {
		namespace shard_model_desc_t {
			 uintptr_t m_nModelID = 0x8; // int32
			 uintptr_t m_hMaterialBase = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_hMaterialDamageOverlay = 0x18; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_solid = 0x20; // ShardSolid_t
			 uintptr_t m_vecPanelSize = 0x24; // Vector2D
			 uintptr_t m_vecStressPositionA = 0x2c; // Vector2D
			 uintptr_t m_vecStressPositionB = 0x34; // Vector2D
			 uintptr_t m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase< Vector2D >
			 uintptr_t m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase< Vector4D >
			 uintptr_t m_flGlassHalfThickness = 0x70; // float32
			 uintptr_t m_bHasParent = 0x74; // bool
			 uintptr_t m_bParentFrozen = 0x75; // bool
			 uintptr_t m_SurfacePropStringToken = 0x78; // CUtlStringToken
		}
	}
}
