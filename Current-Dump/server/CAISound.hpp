#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CAISound {
			 uintptr_t m_iSoundType = 0x4e0; // SoundTypes_t
			 uintptr_t m_iSoundFlags = 0x4e2; // SoundFlags_t
			 uintptr_t m_iVolume = 0x4e4; // int32
			 uintptr_t m_iSoundIndex = 0x4e8; // int32
			 uintptr_t m_flDuration = 0x4ec; // float32
			 uintptr_t m_iszProxyEntityName = 0x4f0; // CUtlSymbolLarge
		}
	}
}
