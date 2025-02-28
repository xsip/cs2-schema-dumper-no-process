#pragma once
#include "CSchemaHelper.hpp"

namespace SDK {
	class CSchemaFieldType {
	public:
		S2_PAD(0x8);
		const char* m_szName;
	};
}