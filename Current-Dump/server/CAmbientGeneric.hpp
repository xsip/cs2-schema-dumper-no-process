#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CAmbientGeneric {
			 uintptr_t m_radius = 0x4e0; // float32
			 uintptr_t m_flMaxRadius = 0x4e4; // float32
			 uintptr_t m_iSoundLevel = 0x4e8; // soundlevel_t
			 uintptr_t m_dpv = 0x4ec; // dynpitchvol_t
			 uintptr_t m_fActive = 0x550; // bool
			 uintptr_t m_fLooping = 0x551; // bool
			 uintptr_t m_iszSound = 0x558; // CUtlSymbolLarge
			 uintptr_t m_sSourceEntName = 0x560; // CUtlSymbolLarge
			 uintptr_t m_hSoundSource = 0x568; // CHandle< CBaseEntity >
			 uintptr_t m_nSoundSourceEntIndex = 0x56c; // CEntityIndex
		}
	}
}
