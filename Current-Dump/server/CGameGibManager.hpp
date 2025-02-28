#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGameGibManager {
			 uintptr_t m_bAllowNewGibs = 0x500; // bool
			 uintptr_t m_iCurrentMaxPieces = 0x504; // int32
			 uintptr_t m_iMaxPieces = 0x508; // int32
			 uintptr_t m_iLastFrame = 0x50c; // int32
		}
	}
}
