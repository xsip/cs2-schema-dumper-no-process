#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEconItemView {
			 uintptr_t m_iItemDefinitionIndex = 0x38; // uint16
			 uintptr_t m_iEntityQuality = 0x3c; // int32
			 uintptr_t m_iEntityLevel = 0x40; // uint32
			 uintptr_t m_iItemID = 0x48; // uint64
			 uintptr_t m_iItemIDHigh = 0x50; // uint32
			 uintptr_t m_iItemIDLow = 0x54; // uint32
			 uintptr_t m_iAccountID = 0x58; // uint32
			 uintptr_t m_iInventoryPosition = 0x5c; // uint32
			 uintptr_t m_bInitialized = 0x68; // bool
			 uintptr_t m_AttributeList = 0x70; // CAttributeList
			 uintptr_t m_NetworkedDynamicAttributes = 0xd0; // CAttributeList
			 uintptr_t m_szCustomName = 0x130; // char[161]
			 uintptr_t m_szCustomNameOverride = 0x1d1; // char[161]
		}
	}
}
