#include <Windows.h>


namespace xsip {
	namespace client {
		namespace sky3dparams_t {
			 uintptr_t scale = 0x8; // int16
			 uintptr_t origin = 0xc; // Vector
			 uintptr_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
			 uintptr_t flClip3DSkyBoxNearToWorldFarOffset = 0x1c; // float32
			 uintptr_t fog = 0x20; // fogparams_t
			 uintptr_t m_nWorldGroupID = 0x88; // WorldGroupId_t
		}
	}
}
