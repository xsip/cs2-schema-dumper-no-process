#include <Windows.h>


namespace xsip {
	namespace server {
		namespace locksound_t {
			 uintptr_t sLockedSound = 0x8; // CUtlSymbolLarge
			 uintptr_t sUnlockedSound = 0x10; // CUtlSymbolLarge
			 uintptr_t flwaitSound = 0x18; // GameTime_t
		}
	}
}
