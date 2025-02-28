#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimReplayFrame {
			 uintptr_t m_inputDataBlocks = 0x10; // CUtlVector< CUtlBinaryBlock >
			 uintptr_t m_instanceData = 0x28; // CUtlBinaryBlock
			 uintptr_t m_startingLocalToWorldTransform = 0x40; // CTransform
			 uintptr_t m_localToWorldTransform = 0x60; // CTransform
			 uintptr_t m_timeStamp = 0x80; // float32
		}
	}
}
