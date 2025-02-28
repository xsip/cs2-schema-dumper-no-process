#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CParticleSystemDefinition {
			 uintptr_t m_nBehaviorVersion = 0x8;
			 uintptr_t m_PreEmissionOperators = 0x10;
			 uintptr_t m_Emitters = 0x28;
			 uintptr_t m_Initializers = 0x40;
			 uintptr_t m_Operators = 0x58;
			 uintptr_t m_ForceGenerators = 0x70;
			 uintptr_t m_Constraints = 0x88;
			 uintptr_t m_Renderers = 0xa0;
			 uintptr_t m_Children = 0xb8;
			 uintptr_t m_nFirstMultipleOverride_BackwardCompat = 0x178;
			 uintptr_t m_nInitialParticles = 0x210;
			 uintptr_t m_nMaxParticles = 0x214;
			 uintptr_t m_nGroupID = 0x218;
			 uintptr_t m_BoundingBoxMin = 0x21c;
			 uintptr_t m_BoundingBoxMax = 0x228;
			 uintptr_t m_flDepthSortBias = 0x234;
			 uintptr_t m_nSortOverridePositionCP = 0x238;
			 uintptr_t m_bInfiniteBounds = 0x23c;
			 uintptr_t m_bEnableNamedValues = 0x23d;
			 uintptr_t m_NamedValueDomain = 0x240;
			 uintptr_t m_NamedValueLocals = 0x248;
			 uintptr_t m_ConstantColor = 0x260;
			 uintptr_t m_ConstantNormal = 0x264;
			 uintptr_t m_flConstantRadius = 0x270;
			 uintptr_t m_flConstantRotation = 0x274;
			 uintptr_t m_flConstantRotationSpeed = 0x278;
			 uintptr_t m_flConstantLifespan = 0x27c;
			 uintptr_t m_nConstantSequenceNumber = 0x280;
			 uintptr_t m_nConstantSequenceNumber1 = 0x284;
			 uintptr_t m_nSnapshotControlPoint = 0x288;
			 uintptr_t m_hSnapshot = 0x290;
			 uintptr_t m_pszCullReplacementName = 0x298;
			 uintptr_t m_flCullRadius = 0x2a0;
			 uintptr_t m_flCullFillCost = 0x2a4;
			 uintptr_t m_nCullControlPoint = 0x2a8;
			 uintptr_t m_hFallback = 0x2b0;
			 uintptr_t m_nFallbackMaxCount = 0x2b8;
			 uintptr_t m_hLowViolenceDef = 0x2c0;
			 uintptr_t m_hReferenceReplacement = 0x2c8;
			 uintptr_t m_flPreSimulationTime = 0x2d0;
			 uintptr_t m_flStopSimulationAfterTime = 0x2d4;
			 uintptr_t m_flMaximumTimeStep = 0x2d8;
			 uintptr_t m_flMaximumSimTime = 0x2dc;
			 uintptr_t m_flMinimumSimTime = 0x2e0;
			 uintptr_t m_flMinimumTimeStep = 0x2e4;
			 uintptr_t m_nMinimumFrames = 0x2e8;
			 uintptr_t m_nMinCPULevel = 0x2ec;
			 uintptr_t m_nMinGPULevel = 0x2f0;
			 uintptr_t m_flNoDrawTimeToGoToSleep = 0x2f4;
			 uintptr_t m_flMaxDrawDistance = 0x2f8;
			 uintptr_t m_flStartFadeDistance = 0x2fc;
			 uintptr_t m_flMaxCreationDistance = 0x300;
			 uintptr_t m_nAggregationMinAvailableParticles = 0x304;
			 uintptr_t m_flAggregateRadius = 0x308;
			 uintptr_t m_bShouldBatch = 0x30c;
			 uintptr_t m_bShouldHitboxesFallbackToRenderBounds = 0x30d;
			 uintptr_t m_bShouldHitboxesFallbackToSnapshot = 0x30e;
			 uintptr_t m_bShouldHitboxesFallbackToCollisionHulls = 0x30f;
			 uintptr_t m_nViewModelEffect = 0x310;
			 uintptr_t m_bScreenSpaceEffect = 0x314;
			 uintptr_t m_pszTargetLayerID = 0x318;
			 uintptr_t m_nSkipRenderControlPoint = 0x320;
			 uintptr_t m_nAllowRenderControlPoint = 0x324;
			 uintptr_t m_bShouldSort = 0x328;
			 uintptr_t m_controlPointConfigurations = 0x370;
		}
	}
}
