#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPathMover {
			 uintptr_t m_vecPathNodes = 0x4e8; // CUtlVector< CHandle< CMoverPathNode > >
			 uintptr_t m_flPathLength = 0x500; // float32
			 uintptr_t m_bClosedLoop = 0x504; // bool
		}
	}
}
