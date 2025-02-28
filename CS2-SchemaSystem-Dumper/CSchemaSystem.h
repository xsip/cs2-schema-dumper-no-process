#pragma once

// Define member padding...
#ifndef S2_PAD
#define S2_PAD_INSERT(x, y) x ## y
#define S2_PAD_DEFINE(x, y) S2_PAD_INSERT(x, y)
#define S2_PAD(size) char S2_PAD_DEFINE(padding_, __LINE__)[size]
#endif

namespace SDK
{

	class CSchemaFieldType {
	public:
		S2_PAD(0x8);
		const char* m_szName;
	};

	class CSchemaField
	{
	public:
		const char* m_szName;
		CSchemaFieldType *m_pType;
		uint32_t m_nOffset;
		uint32_t m_nMetadataSize;
		void* m_nMetadata;
	};

	class CSchemaClass
	{
	public:
		void* vfptr;
		const char* m_szName;
		const char* m_szModuleName;
		uint32_t m_nSize;
		uint16_t m_nNumFields;

		S2_PAD(0x2);

		uint16_t m_nStaticSize;
		uint16_t m_nMetadataSize;

		S2_PAD(0x4);

		CSchemaField* m_pFields;
	};

	class CSchemaDeclaredClass
	{
	public:
		void* vfptr;
		const char* m_szName;
		const char* m_szModuleName;
		const char* m_szUnknownStr;
		CSchemaClass* m_Class;
	};

	class CSchemaDeclaredClassEntry
	{
	public:
		uint64_t m_nHash[2];
		CSchemaDeclaredClass* m_pDeclaredClass;
	};

	/*
pGlobalScope: 0x108
m_pDeclaredClasses: 0x440
m_nNumDeclaredClasses: 0x456
m_pEnumBindings: 0x468
*/

	class CSchemaSystemTypeScope
	{// 0x18c = pNumEnums
	public:
		void* vfptr;
		char m_szName[256];
		CSchemaSystemTypeScope* pGlobalScope;
		S2_PAD(0x7C);
		S2_PAD(sizeof(int));
		S2_PAD(0x2B0);
		CSchemaDeclaredClassEntry* m_pDeclaredClasses;
		S2_PAD(0xE);
		uint16_t m_nNumDeclaredClasses;
		S2_PAD(0x10);
		void* m_pEnumBindings;		
	};

	class CSchemaSystem
	{
	public:
		S2_PAD(0x188);

		uint64_t m_nScopeSize;
		CSchemaSystemTypeScope** m_pScopeArray;
	};
}