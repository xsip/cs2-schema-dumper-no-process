#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CColorCorrection {
			 uintptr_t m_flFadeInDuration = 0x4e0; // float32
			 uintptr_t m_flFadeOutDuration = 0x4e4; // float32
			 uintptr_t m_flStartFadeInWeight = 0x4e8; // float32
			 uintptr_t m_flStartFadeOutWeight = 0x4ec; // float32
			 uintptr_t m_flTimeStartFadeIn = 0x4f0; // GameTime_t
			 uintptr_t m_flTimeStartFadeOut = 0x4f4; // GameTime_t
			 uintptr_t m_flMaxWeight = 0x4f8; // float32
			 uintptr_t m_bStartDisabled = 0x4fc; // bool
			 uintptr_t m_bEnabled = 0x4fd; // bool
			 uintptr_t m_bMaster = 0x4fe; // bool
			 uintptr_t m_bClientSide = 0x4ff; // bool
			 uintptr_t m_bExclusive = 0x500; // bool
			 uintptr_t m_MinFalloff = 0x504; // float32
			 uintptr_t m_MaxFalloff = 0x508; // float32
			 uintptr_t m_flCurWeight = 0x50c; // float32
			 uintptr_t m_netlookupFilename = 0x510; // char[512]
			 uintptr_t m_lookupFilename = 0x710; // CUtlSymbolLarge
		}
	}
}
