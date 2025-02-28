#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CPhysSurfaceProperties {
			 uintptr_t m_name = 0x0; // CUtlString
			 uintptr_t m_nameHash = 0x8; // uint32
			 uintptr_t m_baseNameHash = 0xc; // uint32
			 uintptr_t m_bHidden = 0x18; // bool
			 uintptr_t m_description = 0x20; // CUtlString
			 uintptr_t m_physics = 0x28; // CPhysSurfacePropertiesPhysics
			 uintptr_t m_audioSounds = 0x50; // CPhysSurfacePropertiesSoundNames
			 uintptr_t m_audioParams = 0xa8; // CPhysSurfacePropertiesAudio
		}
	}
}
