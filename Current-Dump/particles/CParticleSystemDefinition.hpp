#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CParticleSystemDefinition {
			 uintptr_t m_nBehaviorVersion = 0x8; // int32
			 uintptr_t m_PreEmissionOperators = 0x10; // CUtlVector< CParticleFunctionPreEmission* >
			 uintptr_t m_Emitters = 0x28; // CUtlVector< CParticleFunctionEmitter* >
			 uintptr_t m_Initializers = 0x40; // CUtlVector< CParticleFunctionInitializer* >
			 uintptr_t m_Operators = 0x58; // CUtlVector< CParticleFunctionOperator* >
			 uintptr_t m_ForceGenerators = 0x70; // CUtlVector< CParticleFunctionForce* >
			 uintptr_t m_Constraints = 0x88; // CUtlVector< CParticleFunctionConstraint* >
			 uintptr_t m_Renderers = 0xa0; // CUtlVector< CParticleFunctionRenderer* >
			 uintptr_t m_Children = 0xb8; // CUtlVector< ParticleChildrenInfo_t >
			 uintptr_t m_nFirstMultipleOverride_BackwardCompat = 0x178; // int32
			 uintptr_t m_nInitialParticles = 0x210; // int32
			 uintptr_t m_nMaxParticles = 0x214; // int32
			 uintptr_t m_nGroupID = 0x218; // int32
			 uintptr_t m_BoundingBoxMin = 0x21c; // Vector
			 uintptr_t m_BoundingBoxMax = 0x228; // Vector
			 uintptr_t m_flDepthSortBias = 0x234; // float32
			 uintptr_t m_nSortOverridePositionCP = 0x238; // int32
			 uintptr_t m_bInfiniteBounds = 0x23c; // bool
			 uintptr_t m_bEnableNamedValues = 0x23d; // bool
			 uintptr_t m_NamedValueDomain = 0x240; // CUtlString
			 uintptr_t m_NamedValueLocals = 0x248; // CUtlVector< ParticleNamedValueSource_t* >
			 uintptr_t m_ConstantColor = 0x260; // Color
			 uintptr_t m_ConstantNormal = 0x264; // Vector
			 uintptr_t m_flConstantRadius = 0x270; // float32
			 uintptr_t m_flConstantRotation = 0x274; // float32
			 uintptr_t m_flConstantRotationSpeed = 0x278; // float32
			 uintptr_t m_flConstantLifespan = 0x27c; // float32
			 uintptr_t m_nConstantSequenceNumber = 0x280; // int32
			 uintptr_t m_nConstantSequenceNumber1 = 0x284; // int32
			 uintptr_t m_nSnapshotControlPoint = 0x288; // int32
			 uintptr_t m_hSnapshot = 0x290; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
			 uintptr_t m_pszCullReplacementName = 0x298; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_flCullRadius = 0x2a0; // float32
			 uintptr_t m_flCullFillCost = 0x2a4; // float32
			 uintptr_t m_nCullControlPoint = 0x2a8; // int32
			 uintptr_t m_hFallback = 0x2b0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_nFallbackMaxCount = 0x2b8; // int32
			 uintptr_t m_hLowViolenceDef = 0x2c0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_hReferenceReplacement = 0x2c8; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_flPreSimulationTime = 0x2d0; // float32
			 uintptr_t m_flStopSimulationAfterTime = 0x2d4; // float32
			 uintptr_t m_flMaximumTimeStep = 0x2d8; // float32
			 uintptr_t m_flMaximumSimTime = 0x2dc; // float32
			 uintptr_t m_flMinimumSimTime = 0x2e0; // float32
			 uintptr_t m_flMinimumTimeStep = 0x2e4; // float32
			 uintptr_t m_nMinimumFrames = 0x2e8; // int32
			 uintptr_t m_nMinCPULevel = 0x2ec; // int32
			 uintptr_t m_nMinGPULevel = 0x2f0; // int32
			 uintptr_t m_flNoDrawTimeToGoToSleep = 0x2f4; // float32
			 uintptr_t m_flMaxDrawDistance = 0x2f8; // float32
			 uintptr_t m_flStartFadeDistance = 0x2fc; // float32
			 uintptr_t m_flMaxCreationDistance = 0x300; // float32
			 uintptr_t m_nAggregationMinAvailableParticles = 0x304; // int32
			 uintptr_t m_flAggregateRadius = 0x308; // float32
			 uintptr_t m_bShouldBatch = 0x30c; // bool
			 uintptr_t m_bShouldHitboxesFallbackToRenderBounds = 0x30d; // bool
			 uintptr_t m_bShouldHitboxesFallbackToSnapshot = 0x30e; // bool
			 uintptr_t m_bShouldHitboxesFallbackToCollisionHulls = 0x30f; // bool
			 uintptr_t m_nViewModelEffect = 0x310; // InheritableBoolType_t
			 uintptr_t m_bScreenSpaceEffect = 0x314; // bool
			 uintptr_t m_pszTargetLayerID = 0x318; // CUtlSymbolLarge
			 uintptr_t m_nSkipRenderControlPoint = 0x320; // int32
			 uintptr_t m_nAllowRenderControlPoint = 0x324; // int32
			 uintptr_t m_bShouldSort = 0x328; // bool
			 uintptr_t m_controlPointConfigurations = 0x370; // CUtlVector< ParticleControlPointConfiguration_t >
		}
	}
}
