#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointTemplate {
			 uintptr_t m_iszWorldName = 0x4e0; // CUtlSymbolLarge
			 uintptr_t m_iszSource2EntityLumpName = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_iszEntityFilterName = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_flTimeoutInterval = 0x4f8; // float32
			 uintptr_t m_bAsynchronouslySpawnEntities = 0x4fc; // bool
			 uintptr_t m_pOutputOnSpawned = 0x500; // CEntityIOOutput
			 uintptr_t m_clientOnlyEntityBehavior = 0x528; // PointTemplateClientOnlyEntityBehavior_t
			 uintptr_t m_ownerSpawnGroupType = 0x52c; // PointTemplateOwnerSpawnGroupType_t
			 uintptr_t m_createdSpawnGroupHandles = 0x530; // CUtlVector< uint32 >
			 uintptr_t m_SpawnedEntityHandles = 0x548; // CUtlVector< CEntityHandle >
			 uintptr_t m_ScriptSpawnCallback = 0x560; // HSCRIPT
			 uintptr_t m_ScriptCallbackScope = 0x568; // HSCRIPT
		}
	}
}
