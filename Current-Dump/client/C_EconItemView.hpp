#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EconItemView {
			 uintptr_t m_bInventoryImageRgbaRequested = 0x60; // bool
			 uintptr_t m_bInventoryImageTriedCache = 0x61; // bool
			 uintptr_t m_nInventoryImageRgbaWidth = 0x80; // int32
			 uintptr_t m_nInventoryImageRgbaHeight = 0x84; // int32
			 uintptr_t m_szCurrentLoadCachedFileName = 0x88; // char[260]
			 uintptr_t m_bRestoreCustomMaterialAfterPrecache = 0x1b8; // bool
			 uintptr_t m_iItemDefinitionIndex = 0x1ba; // uint16
			 uintptr_t m_iEntityQuality = 0x1bc; // int32
			 uintptr_t m_iEntityLevel = 0x1c0; // uint32
			 uintptr_t m_iItemID = 0x1c8; // uint64
			 uintptr_t m_iItemIDHigh = 0x1d0; // uint32
			 uintptr_t m_iItemIDLow = 0x1d4; // uint32
			 uintptr_t m_iAccountID = 0x1d8; // uint32
			 uintptr_t m_iInventoryPosition = 0x1dc; // uint32
			 uintptr_t m_bInitialized = 0x1e8; // bool
			 uintptr_t m_bDisallowSOC = 0x1e9; // bool
			 uintptr_t m_bIsStoreItem = 0x1ea; // bool
			 uintptr_t m_bIsTradeItem = 0x1eb; // bool
			 uintptr_t m_iEntityQuantity = 0x1ec; // int32
			 uintptr_t m_iRarityOverride = 0x1f0; // int32
			 uintptr_t m_iQualityOverride = 0x1f4; // int32
			 uintptr_t m_iOriginOverride = 0x1f8; // int32
			 uintptr_t m_unClientFlags = 0x1fc; // uint8
			 uintptr_t m_unOverrideStyle = 0x1fd; // uint8
			 uintptr_t m_AttributeList = 0x210; // CAttributeList
			 uintptr_t m_NetworkedDynamicAttributes = 0x270; // CAttributeList
			 uintptr_t m_szCustomName = 0x2d0; // char[161]
			 uintptr_t m_szCustomNameOverride = 0x371; // char[161]
			 uintptr_t m_bInitializedTags = 0x440; // bool
		}
	}
}
