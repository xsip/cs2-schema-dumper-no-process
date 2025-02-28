#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CInfoWorldLayer {
			 uintptr_t m_pOutputOnEntitiesSpawned = 0x4e0; // CEntityIOOutput
			 uintptr_t m_worldName = 0x508; // CUtlSymbolLarge
			 uintptr_t m_layerName = 0x510; // CUtlSymbolLarge
			 uintptr_t m_bWorldLayerVisible = 0x518; // bool
			 uintptr_t m_bEntitiesSpawned = 0x519; // bool
			 uintptr_t m_bCreateAsChildSpawnGroup = 0x51a; // bool
			 uintptr_t m_hLayerSpawnGroup = 0x51c; // uint32
		}
	}
}
