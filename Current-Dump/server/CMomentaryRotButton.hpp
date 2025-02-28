#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMomentaryRotButton {
			 uintptr_t m_Position = 0x960; // CEntityOutputTemplate< float32 >
			 uintptr_t m_OnUnpressed = 0x988; // CEntityIOOutput
			 uintptr_t m_OnFullyOpen = 0x9b0; // CEntityIOOutput
			 uintptr_t m_OnFullyClosed = 0x9d8; // CEntityIOOutput
			 uintptr_t m_OnReachedPosition = 0xa00; // CEntityIOOutput
			 uintptr_t m_lastUsed = 0xa28; // int32
			 uintptr_t m_start = 0xa2c; // QAngle
			 uintptr_t m_end = 0xa38; // QAngle
			 uintptr_t m_IdealYaw = 0xa44; // float32
			 uintptr_t m_sNoise = 0xa48; // CUtlSymbolLarge
			 uintptr_t m_bUpdateTarget = 0xa50; // bool
			 uintptr_t m_direction = 0xa54; // int32
			 uintptr_t m_returnSpeed = 0xa58; // float32
			 uintptr_t m_flStartPosition = 0xa5c; // float32
		}
	}
}
