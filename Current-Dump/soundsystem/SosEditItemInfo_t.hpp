#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace SosEditItemInfo_t {
			 uintptr_t itemType = 0x0; // SosEditItemType_t
			 uintptr_t itemName = 0x8; // CUtlString
			 uintptr_t itemTypeName = 0x10; // CUtlString
			 uintptr_t itemKVString = 0x20; // CUtlString
			 uintptr_t itemPos = 0x28; // Vector2D
		}
	}
}
