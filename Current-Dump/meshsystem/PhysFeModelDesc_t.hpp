#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace PhysFeModelDesc_t {
			 uintptr_t m_CtrlHash = 0x0; // CUtlVector< uint32 >
			 uintptr_t m_CtrlName = 0x18; // CUtlVector< CUtlString >
			 uintptr_t m_nStaticNodeFlags = 0x30; // uint32
			 uintptr_t m_nDynamicNodeFlags = 0x34; // uint32
			 uintptr_t m_flLocalForce = 0x38; // float32
			 uintptr_t m_flLocalRotation = 0x3c; // float32
			 uintptr_t m_nNodeCount = 0x40; // uint16
			 uintptr_t m_nStaticNodes = 0x42; // uint16
			 uintptr_t m_nRotLockStaticNodes = 0x44; // uint16
			 uintptr_t m_nFirstPositionDrivenNode = 0x46; // uint16
			 uintptr_t m_nSimdTriCount1 = 0x48; // uint16
			 uintptr_t m_nSimdTriCount2 = 0x4a; // uint16
			 uintptr_t m_nSimdQuadCount1 = 0x4c; // uint16
			 uintptr_t m_nSimdQuadCount2 = 0x4e; // uint16
			 uintptr_t m_nQuadCount1 = 0x50; // uint16
			 uintptr_t m_nQuadCount2 = 0x52; // uint16
			 uintptr_t m_nTreeDepth = 0x54; // uint16
			 uintptr_t m_nNodeBaseJiggleboneDependsCount = 0x56; // uint16
			 uintptr_t m_nRopeCount = 0x58; // uint16
			 uintptr_t m_Ropes = 0x60; // CUtlVector< uint16 >
			 uintptr_t m_NodeBases = 0x78; // CUtlVector< FeNodeBase_t >
			 uintptr_t m_SimdNodeBases = 0x90; // CUtlVector< FeSimdNodeBase_t >
			 uintptr_t m_Quads = 0xa8; // CUtlVector< FeQuad_t >
			 uintptr_t m_SimdQuads = 0xc0; // CUtlVector< FeSimdQuad_t >
			 uintptr_t m_SimdTris = 0xd8; // CUtlVector< FeSimdTri_t >
			 uintptr_t m_SimdRods = 0xf0; // CUtlVector< FeSimdRodConstraint_t >
			 uintptr_t m_SimdRodsAnim = 0x108; // CUtlVector< FeSimdRodConstraintAnim_t >
			 uintptr_t m_InitPose = 0x120; // CUtlVector< CTransform >
			 uintptr_t m_Rods = 0x138; // CUtlVector< FeRodConstraint_t >
			 uintptr_t m_Twists = 0x150; // CUtlVector< FeTwistConstraint_t >
			 uintptr_t m_HingeLimits = 0x168; // CUtlVector< FeHingeLimit_t >
			 uintptr_t m_AntiTunnelProbes = 0x180; // CUtlVector< FeAntiTunnelProbe_t >
			 uintptr_t m_AntiTunnelTargetNodes = 0x198; // CUtlVector< uint16 >
			 uintptr_t m_AxialEdges = 0x1b0; // CUtlVector< FeAxialEdgeBend_t >
			 uintptr_t m_NodeInvMasses = 0x1c8; // CUtlVector< float32 >
			 uintptr_t m_CtrlOffsets = 0x1e0; // CUtlVector< FeCtrlOffset_t >
			 uintptr_t m_CtrlOsOffsets = 0x1f8; // CUtlVector< FeCtrlOsOffset_t >
			 uintptr_t m_FollowNodes = 0x210; // CUtlVector< FeFollowNode_t >
			 uintptr_t m_CollisionPlanes = 0x228; // CUtlVector< FeCollisionPlane_t >
			 uintptr_t m_NodeIntegrator = 0x240; // CUtlVector< FeNodeIntegrator_t >
			 uintptr_t m_SpringIntegrator = 0x258; // CUtlVector< FeSpringIntegrator_t >
			 uintptr_t m_SimdSpringIntegrator = 0x270; // CUtlVector< FeSimdSpringIntegrator_t >
			 uintptr_t m_WorldCollisionParams = 0x288; // CUtlVector< FeWorldCollisionParams_t >
			 uintptr_t m_LegacyStretchForce = 0x2a0; // CUtlVector< float32 >
			 uintptr_t m_NodeCollisionRadii = 0x2b8; // CUtlVector< float32 >
			 uintptr_t m_DynNodeFriction = 0x2d0; // CUtlVector< float32 >
			 uintptr_t m_LocalRotation = 0x2e8; // CUtlVector< float32 >
			 uintptr_t m_LocalForce = 0x300; // CUtlVector< float32 >
			 uintptr_t m_TaperedCapsuleStretches = 0x318; // CUtlVector< FeTaperedCapsuleStretch_t >
			 uintptr_t m_TaperedCapsuleRigids = 0x330; // CUtlVector< FeTaperedCapsuleRigid_t >
			 uintptr_t m_SphereRigids = 0x348; // CUtlVector< FeSphereRigid_t >
			 uintptr_t m_WorldCollisionNodes = 0x360; // CUtlVector< uint16 >
			 uintptr_t m_TreeParents = 0x378; // CUtlVector< uint16 >
			 uintptr_t m_TreeCollisionMasks = 0x390; // CUtlVector< uint16 >
			 uintptr_t m_TreeChildren = 0x3a8; // CUtlVector< FeTreeChildren_t >
			 uintptr_t m_FreeNodes = 0x3c0; // CUtlVector< uint16 >
			 uintptr_t m_FitMatrices = 0x3d8; // CUtlVector< FeFitMatrix_t >
			 uintptr_t m_FitWeights = 0x3f0; // CUtlVector< FeFitWeight_t >
			 uintptr_t m_ReverseOffsets = 0x408; // CUtlVector< FeNodeReverseOffset_t >
			 uintptr_t m_AnimStrayRadii = 0x420; // CUtlVector< FeAnimStrayRadius_t >
			 uintptr_t m_SimdAnimStrayRadii = 0x438; // CUtlVector< FeSimdAnimStrayRadius_t >
			 uintptr_t m_KelagerBends = 0x450; // CUtlVector< FeKelagerBend2_t >
			 uintptr_t m_CtrlSoftOffsets = 0x468; // CUtlVector< FeCtrlSoftOffset_t >
			 uintptr_t m_JiggleBones = 0x480; // CUtlVector< CFeIndexedJiggleBone >
			 uintptr_t m_SourceElems = 0x498; // CUtlVector< uint16 >
			 uintptr_t m_GoalDampedSpringIntegrators = 0x4b0; // CUtlVector< uint32 >
			 uintptr_t m_Tris = 0x4c8; // CUtlVector< FeTri_t >
			 uintptr_t m_nTriCount1 = 0x4e0; // uint16
			 uintptr_t m_nTriCount2 = 0x4e2; // uint16
			 uintptr_t m_nReservedUint8 = 0x4e4; // uint8
			 uintptr_t m_nExtraPressureIterations = 0x4e5; // uint8
			 uintptr_t m_nExtraGoalIterations = 0x4e6; // uint8
			 uintptr_t m_nExtraIterations = 0x4e7; // uint8
			 uintptr_t m_SDFRigids = 0x4e8; // CUtlVector< FeSDFRigid_t >
			 uintptr_t m_BoxRigids = 0x500; // CUtlVector< FeBoxRigid_t >
			 uintptr_t m_DynNodeVertexSet = 0x518; // CUtlVector< uint8 >
			 uintptr_t m_VertexSetNames = 0x530; // CUtlVector< uint32 >
			 uintptr_t m_RigidColliderPriorities = 0x548; // CUtlVector< FeRigidColliderIndices_t >
			 uintptr_t m_MorphLayers = 0x560; // CUtlVector< FeMorphLayerDepr_t >
			 uintptr_t m_MorphSetData = 0x578; // CUtlVector< uint8 >
			 uintptr_t m_VertexMaps = 0x590; // CUtlVector< FeVertexMapDesc_t >
			 uintptr_t m_VertexMapValues = 0x5a8; // CUtlVector< uint8 >
			 uintptr_t m_Effects = 0x5c0; // CUtlVector< FeEffectDesc_t >
			 uintptr_t m_LockToParent = 0x5d8; // CUtlVector< FeCtrlOffset_t >
			 uintptr_t m_LockToGoal = 0x5f0; // CUtlVector< uint16 >
			 uintptr_t m_SkelParents = 0x608; // CUtlVector< int16 >
			 uintptr_t m_DynNodeWindBases = 0x620; // CUtlVector< FeNodeWindBase_t >
			 uintptr_t m_flInternalPressure = 0x638; // float32
			 uintptr_t m_flDefaultTimeDilation = 0x63c; // float32
			 uintptr_t m_flWindage = 0x640; // float32
			 uintptr_t m_flWindDrag = 0x644; // float32
			 uintptr_t m_flDefaultSurfaceStretch = 0x648; // float32
			 uintptr_t m_flDefaultThreadStretch = 0x64c; // float32
			 uintptr_t m_flDefaultGravityScale = 0x650; // float32
			 uintptr_t m_flDefaultVelAirDrag = 0x654; // float32
			 uintptr_t m_flDefaultExpAirDrag = 0x658; // float32
			 uintptr_t m_flDefaultVelQuadAirDrag = 0x65c; // float32
			 uintptr_t m_flDefaultExpQuadAirDrag = 0x660; // float32
			 uintptr_t m_flRodVelocitySmoothRate = 0x664; // float32
			 uintptr_t m_flQuadVelocitySmoothRate = 0x668; // float32
			 uintptr_t m_flAddWorldCollisionRadius = 0x66c; // float32
			 uintptr_t m_flDefaultVolumetricSolveAmount = 0x670; // float32
			 uintptr_t m_flMotionSmoothCDT = 0x674; // float32
			 uintptr_t m_flLocalDrag1 = 0x678; // float32
			 uintptr_t m_nRodVelocitySmoothIterations = 0x67c; // uint16
			 uintptr_t m_nQuadVelocitySmoothIterations = 0x67e; // uint16
		}
	}
}
