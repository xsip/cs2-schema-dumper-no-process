#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_SoundEventEntity {
			 uintptr_t m_bStartOnSpawn = 0x568; // bool
			 uintptr_t m_bToLocalPlayer = 0x569; // bool
			 uintptr_t m_bStopOnNew = 0x56a; // bool
			 uintptr_t m_bSaveRestore = 0x56b; // bool
			 uintptr_t m_bSavedIsPlaying = 0x56c; // bool
			 uintptr_t m_flSavedElapsedTime = 0x570; // float32
			 uintptr_t m_iszSourceEntityName = 0x578; // CUtlSymbolLarge
			 uintptr_t m_iszAttachmentName = 0x580; // CUtlSymbolLarge
			 uintptr_t m_onGUIDChanged = 0x588; // CEntityOutputTemplate< uint64 >
			 uintptr_t m_onSoundFinished = 0x5b0; // CEntityIOOutput
			 uintptr_t m_flClientCullRadius = 0x5d8; // float32
			 uintptr_t m_iszSoundName = 0x608; // CUtlSymbolLarge
			 uintptr_t m_hSource = 0x618; // CEntityHandle
			 uintptr_t m_nEntityIndexSelection = 0x61c; // int32
			 uintptr_t m_bClientSideOnly = 0x0; // bitfield:1
		}
	}
}
