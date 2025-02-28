#include <Windows.h>


namespace xsip {
	namespace server {
		namespace shard_model_desc_t {
			 uintptr_t m_nModelID = 0x8;
			 uintptr_t m_hMaterialBase = 0x10;
			 uintptr_t m_hMaterialDamageOverlay = 0x18;
			 uintptr_t m_solid = 0x20;
			 uintptr_t m_vecPanelSize = 0x24;
			 uintptr_t m_vecStressPositionA = 0x2c;
			 uintptr_t m_vecStressPositionB = 0x34;
			 uintptr_t m_vecPanelVertices = 0x40;
			 uintptr_t m_vInitialPanelVertices = 0x58;
			 uintptr_t m_flGlassHalfThickness = 0x70;
			 uintptr_t m_bHasParent = 0x74;
			 uintptr_t m_bParentFrozen = 0x75;
			 uintptr_t m_SurfacePropStringToken = 0x78;
		}
	}
}
