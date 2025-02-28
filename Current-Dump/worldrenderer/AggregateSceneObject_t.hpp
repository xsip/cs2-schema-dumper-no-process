#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace AggregateSceneObject_t {
			 uintptr_t m_allFlags = 0x0; // ObjectTypeFlags_t
			 uintptr_t m_anyFlags = 0x4; // ObjectTypeFlags_t
			 uintptr_t m_nLayer = 0x8; // int16
			 uintptr_t m_aggregateMeshes = 0x10; // CUtlVector< AggregateMeshInfo_t >
			 uintptr_t m_lodSetups = 0x28; // CUtlVector< AggregateLODSetup_t >
			 uintptr_t m_visClusterMembership = 0x40; // CUtlVector< uint16 >
			 uintptr_t m_fragmentTransforms = 0x58; // CUtlVector< matrix3x4_t >
			 uintptr_t m_renderableModel = 0x70; // CStrongHandle< InfoForResourceTypeCModel >
		}
	}
}
