#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CInfoWorldLayer {
			 uintptr_t m_pOutputOnEntitiesSpawned = 0x568; // CEntityIOOutput
			 uintptr_t m_worldName = 0x590; // CUtlSymbolLarge
			 uintptr_t m_layerName = 0x598; // CUtlSymbolLarge
			 uintptr_t m_bWorldLayerVisible = 0x5a0; // bool
			 uintptr_t m_bEntitiesSpawned = 0x5a1; // bool
			 uintptr_t m_bCreateAsChildSpawnGroup = 0x5a2; // bool
			 uintptr_t m_hLayerSpawnGroup = 0x5a4; // uint32
			 uintptr_t m_bWorldLayerActuallyVisible = 0x5a8; // bool
		}
	}
}
