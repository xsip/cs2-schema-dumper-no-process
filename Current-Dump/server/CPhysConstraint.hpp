#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysConstraint {
			 uintptr_t m_nameAttach1 = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_nameAttach2 = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_hAttach1 = 0x4f8; // CHandle< CBaseEntity >
			 uintptr_t m_hAttach2 = 0x4fc; // CHandle< CBaseEntity >
			 uintptr_t m_nameAttachment1 = 0x500; // CUtlSymbolLarge
			 uintptr_t m_nameAttachment2 = 0x508; // CUtlSymbolLarge
			 uintptr_t m_breakSound = 0x510; // CUtlSymbolLarge
			 uintptr_t m_forceLimit = 0x518; // float32
			 uintptr_t m_torqueLimit = 0x51c; // float32
			 uintptr_t m_teleportTick = 0x520; // uint32
			 uintptr_t m_minTeleportDistance = 0x524; // float32
			 uintptr_t m_bSnapObjectPositions = 0x528; // bool
			 uintptr_t m_OnBreak = 0x530; // CEntityIOOutput
		}
	}
}
