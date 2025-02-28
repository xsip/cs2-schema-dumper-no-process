#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace WorldNode_t {
			 uintptr_t m_sceneObjects = 0x0; // CUtlVector< SceneObject_t >
			 uintptr_t m_infoOverlays = 0x18; // CUtlVector< InfoOverlayData_t >
			 uintptr_t m_visClusterMembership = 0x30; // CUtlVector< uint16 >
			 uintptr_t m_aggregateSceneObjects = 0x48; // CUtlVector< AggregateSceneObject_t >
			 uintptr_t m_clutterSceneObjects = 0x60; // CUtlVector< ClutterSceneObject_t >
			 uintptr_t m_extraVertexStreamOverrides = 0x78; // CUtlVector< ExtraVertexStreamOverride_t >
			 uintptr_t m_materialOverrides = 0x90; // CUtlVector< MaterialOverride_t >
			 uintptr_t m_extraVertexStreams = 0xa8; // CUtlVector< WorldNodeOnDiskBufferData_t >
			 uintptr_t m_layerNames = 0xc0; // CUtlVector< CUtlString >
			 uintptr_t m_sceneObjectLayerIndices = 0xd8; // CUtlVector< uint8 >
			 uintptr_t m_overlayLayerIndices = 0xf0; // CUtlVector< uint8 >
			 uintptr_t m_grassFileName = 0x108; // CUtlString
			 uintptr_t m_nodeLightingInfo = 0x110; // BakedLightingInfo_t
			 uintptr_t m_bHasBakedGeometryFlag = 0x140; // bool
		}
	}
}
