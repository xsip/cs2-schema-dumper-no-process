#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSingleFrameUpdateNode {
			 uintptr_t m_actions = 0x58; // CUtlVector< CSmartPtr< CAnimActionUpdater > >
			 uintptr_t m_hPoseCacheHandle = 0x70; // CPoseHandle
			 uintptr_t m_hSequence = 0x74; // HSequence
			 uintptr_t m_flCycle = 0x78; // float32
		}
	}
}
