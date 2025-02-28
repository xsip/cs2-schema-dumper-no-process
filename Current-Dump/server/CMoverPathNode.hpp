#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMoverPathNode {
			 uintptr_t m_vInTangentLocal = 0x4e0; // Vector
			 uintptr_t m_vOutTangentLocal = 0x4ec; // Vector
			 uintptr_t m_szParentPathUniqueID = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_OnPassThrough = 0x500; // CEntityIOOutput
			 uintptr_t m_OnPassThroughForward = 0x528; // CEntityIOOutput
			 uintptr_t m_OnPassThroughReverse = 0x550; // CEntityIOOutput
			 uintptr_t m_hMover = 0x578; // CHandle< CPathMover >
		}
	}
}
