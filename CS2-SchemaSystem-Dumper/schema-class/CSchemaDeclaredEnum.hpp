#pragma once
#include "CSchemaHelper.hpp"
#include <array>

namespace SDK {
	class CSchemaSystemTypeScope;

    struct CSchemaVarName {
        const char* m_pszName;
        const char* m_pszType;
    };

    struct CSchemaNetworkValue {
        union {
            const char* m_pszValue;
            int m_nValue;
            float m_fValue;
            std::uintptr_t m_pPointer;
            CSchemaVarName m_VarValue;
            std::array<char, 8> m_szValue;
        };
    };


    struct SchemaMetadataEntryData_t {
        const char* m_szName;
        CSchemaNetworkValue* m_pNetworkValue;
    };


    struct SchemaEnumeratorInfoData_t {
        const char* m_szName;

        union {
            std::uint8_t m_uint8;
            std::uint16_t m_uint16;
            std::uint32_t m_uint32;
            std::uint64_t m_uint64;
        };

        std::int32_t m_nMetadataSize;
        SchemaMetadataEntryData_t* m_pMetadata;
    };


    enum class SchemaEnumFlags_t : std::uint16_t {
        SCHEMA_EF_IS_REGISTERED = (1 << 0),
        SCHEMA_EF_MODULE_LOCAL_TYPE_SCOPE = (1 << 1),
        SCHEMA_EF_GLOBAL_TYPE_SCOPE = (1 << 2),
    };

	class CSchemaDeclaredEnum {
	public:
        CSchemaDeclaredEnum* m_pSelf; // 0x0000
        const char* m_szName; // 0x0008
        const char* m_szModule; // 0x0010
        std::uint8_t m_unSizeOf; // 0x0018
        std::uint8_t m_unAlignOf; // 0x0019
        SchemaEnumFlags_t m_unFlags; // 0x001A
        std::int16_t m_nEnumeratorCount; // 0x001C
        std::int16_t m_nStaticMetadataSize; // 0x001E
        SchemaEnumeratorInfoData_t* m_pEnumerators;
        SchemaMetadataEntryData_t* m_pStaticMetadata;
        CSchemaSystemTypeScope* m_pTypeScope; // 0x0030
        std::int64_t m_nMinEnumeratorValue; // 0x0038
        std::int64_t m_nMaxEnumeratorValue; // 0x0040
	};

	class CSchemaDeclaredEnumEntry
	{
	public:
		uint64_t m_nHash[2];
		CSchemaDeclaredEnum *m_pDecleratedEnum;
	};
}