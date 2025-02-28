#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPointTemplate {
			 uintptr_t m_iszWorldName = 0x568; // CUtlSymbolLarge
			 uintptr_t m_iszSource2EntityLumpName = 0x570; // CUtlSymbolLarge
			 uintptr_t m_iszEntityFilterName = 0x578; // CUtlSymbolLarge
			 uintptr_t m_flTimeoutInterval = 0x580; // float32
			 uintptr_t m_bAsynchronouslySpawnEntities = 0x584; // bool
			 uintptr_t m_pOutputOnSpawned = 0x588; // CEntityIOOutput
			 uintptr_t m_clientOnlyEntityBehavior = 0x5b0; // PointTemplateClientOnlyEntityBehavior_t
			 uintptr_t m_ownerSpawnGroupType = 0x5b4; // PointTemplateOwnerSpawnGroupType_t
			 uintptr_t m_createdSpawnGroupHandles = 0x5b8; // CUtlVector< uint32 >
			 uintptr_t m_SpawnedEntityHandles = 0x5d0; // CUtlVector< CEntityHandle >
			 uintptr_t m_ScriptSpawnCallback = 0x5e8; // HSCRIPT
			 uintptr_t m_ScriptCallbackScope = 0x5f0; // HSCRIPT
		}
	}
}
