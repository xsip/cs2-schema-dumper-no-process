#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysicsSpring {
			 uintptr_t m_flFrequency = 0x4e8; // float32
			 uintptr_t m_flDampingRatio = 0x4ec; // float32
			 uintptr_t m_flRestLength = 0x4f0; // float32
			 uintptr_t m_nameAttachStart = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_nameAttachEnd = 0x500; // CUtlSymbolLarge
			 uintptr_t m_start = 0x508; // Vector
			 uintptr_t m_end = 0x514; // Vector
			 uintptr_t m_teleportTick = 0x520; // uint32
		}
	}
}
