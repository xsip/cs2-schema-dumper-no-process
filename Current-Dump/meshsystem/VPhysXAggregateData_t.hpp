#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace VPhysXAggregateData_t {
			 uintptr_t m_nFlags = 0x0; // uint16
			 uintptr_t m_nRefCounter = 0x2; // uint16
			 uintptr_t m_bonesHash = 0x8; // CUtlVector< uint32 >
			 uintptr_t m_boneNames = 0x20; // CUtlVector< CUtlString >
			 uintptr_t m_indexNames = 0x38; // CUtlVector< uint16 >
			 uintptr_t m_indexHash = 0x50; // CUtlVector< uint16 >
			 uintptr_t m_bindPose = 0x68; // CUtlVector< matrix3x4a_t >
			 uintptr_t m_parts = 0x80; // CUtlVector< VPhysXBodyPart_t >
			 uintptr_t m_constraints2 = 0x98; // CUtlVector< VPhysXConstraint2_t >
			 uintptr_t m_joints = 0xb0; // CUtlVector< VPhysXJoint_t >
			 uintptr_t m_pFeModel = 0xc8; // PhysFeModelDesc_t*
			 uintptr_t m_boneParents = 0xd0; // CUtlVector< uint16 >
			 uintptr_t m_surfacePropertyHashes = 0xe8; // CUtlVector< uint32 >
			 uintptr_t m_collisionAttributes = 0x100; // CUtlVector< VPhysXCollisionAttributes_t >
			 uintptr_t m_debugPartNames = 0x118; // CUtlVector< CUtlString >
			 uintptr_t m_embeddedKeyvalues = 0x130; // CUtlString
		}
	}
}
