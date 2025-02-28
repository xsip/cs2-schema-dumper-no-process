#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSoundEventEntity {
			 uintptr_t m_bStartOnSpawn = 0x4e0; // bool
			 uintptr_t m_bToLocalPlayer = 0x4e1; // bool
			 uintptr_t m_bStopOnNew = 0x4e2; // bool
			 uintptr_t m_bSaveRestore = 0x4e3; // bool
			 uintptr_t m_bSavedIsPlaying = 0x4e4; // bool
			 uintptr_t m_flSavedElapsedTime = 0x4e8; // float32
			 uintptr_t m_iszSourceEntityName = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_iszAttachmentName = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_onGUIDChanged = 0x500; // CEntityOutputTemplate< uint64 >
			 uintptr_t m_onSoundFinished = 0x528; // CEntityIOOutput
			 uintptr_t m_flClientCullRadius = 0x550; // float32
			 uintptr_t m_iszSoundName = 0x580; // CUtlSymbolLarge
			 uintptr_t m_hSource = 0x590; // CEntityHandle
			 uintptr_t m_nEntityIndexSelection = 0x594; // int32
		}
	}
}
