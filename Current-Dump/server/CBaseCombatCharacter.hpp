#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseCombatCharacter {
			 uintptr_t m_bForceServerRagdoll = 0xa38; // bool
			 uintptr_t m_hMyWearables = 0xa40; // CNetworkUtlVectorBase< CHandle< CEconWearable > >
			 uintptr_t m_impactEnergyScale = 0xa58; // float32
			 uintptr_t m_bApplyStressDamage = 0xa5c; // bool
			 uintptr_t m_iDamageCount = 0xaa0; // int32
			 uintptr_t m_pVecRelationships = 0xaa8; // CUtlVector< RelationshipOverride_t >*
			 uintptr_t m_strRelationships = 0xab0; // CUtlSymbolLarge
			 uintptr_t m_eHull = 0xab8; // Hull_t
			 uintptr_t m_nNavHullIdx = 0xabc; // uint32
		}
	}
}
