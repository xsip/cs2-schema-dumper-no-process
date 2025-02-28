#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPathTrack {
			 uintptr_t m_pnext = 0x4e0; // CPathTrack*
			 uintptr_t m_pprevious = 0x4e8; // CPathTrack*
			 uintptr_t m_paltpath = 0x4f0; // CPathTrack*
			 uintptr_t m_flRadius = 0x4f8; // float32
			 uintptr_t m_length = 0x4fc; // float32
			 uintptr_t m_altName = 0x500; // CUtlSymbolLarge
			 uintptr_t m_nIterVal = 0x508; // int32
			 uintptr_t m_eOrientationType = 0x50c; // TrackOrientationType_t
			 uintptr_t m_OnPass = 0x510; // CEntityIOOutput
		}
	}
}
