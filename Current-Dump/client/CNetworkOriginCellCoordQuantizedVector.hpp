#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CNetworkOriginCellCoordQuantizedVector {
			 uintptr_t m_cellX = 0x10; // uint16
			 uintptr_t m_cellY = 0x12; // uint16
			 uintptr_t m_cellZ = 0x14; // uint16
			 uintptr_t m_nOutsideWorld = 0x16; // uint16
			 uintptr_t m_vecX = 0x18; // CNetworkedQuantizedFloat
			 uintptr_t m_vecY = 0x20; // CNetworkedQuantizedFloat
			 uintptr_t m_vecZ = 0x28; // CNetworkedQuantizedFloat
		}
	}
}
