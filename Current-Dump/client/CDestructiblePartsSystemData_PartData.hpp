#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CDestructiblePartsSystemData_PartData {
			 uintptr_t m_sName = 0x0; // CUtlString
			 uintptr_t m_sBreakablePieceName = 0x8; // CGlobalSymbol
			 uintptr_t m_sBodyGroupName = 0x10; // CGlobalSymbol
			 uintptr_t m_nBodyGroupValue = 0x18; // int32
			 uintptr_t m_sAnimGraphParamName_PartDestroyed = 0x20; // CGlobalSymbol
			 uintptr_t m_sAnimGraphParamName_PartNormalizedHealth = 0x28; // CGlobalSymbol
			 uintptr_t m_nHealth = 0x30; // CSkillInt
			 uintptr_t m_nDamagePassthroughType = 0x40; // EDestructiblePartDamagePassThroughType
			 uintptr_t m_bKillNPCOnDestruction = 0x44; // bool
			 uintptr_t m_sCustomDeathHandshake = 0x48; // CGlobalSymbol
		}
	}
}
