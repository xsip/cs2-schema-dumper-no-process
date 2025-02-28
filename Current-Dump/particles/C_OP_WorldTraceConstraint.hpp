#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_WorldTraceConstraint {
			 uintptr_t m_nCP = 0x1c0; // int32
			 uintptr_t m_vecCpOffset = 0x1c4; // Vector
			 uintptr_t m_nCollisionMode = 0x1d0; // ParticleCollisionMode_t
			 uintptr_t m_nCollisionModeMin = 0x1d4; // ParticleCollisionMode_t
			 uintptr_t m_nTraceSet = 0x1d8; // ParticleTraceSet_t
			 uintptr_t m_CollisionGroupName = 0x1dc; // char[128]
			 uintptr_t m_bWorldOnly = 0x25c; // bool
			 uintptr_t m_bBrushOnly = 0x25d; // bool
			 uintptr_t m_bIncludeWater = 0x25e; // bool
			 uintptr_t m_nIgnoreCP = 0x260; // int32
			 uintptr_t m_flCpMovementTolerance = 0x264; // float32
			 uintptr_t m_flRetestRate = 0x268; // float32
			 uintptr_t m_flTraceTolerance = 0x26c; // float32
			 uintptr_t m_flCollisionConfirmationSpeed = 0x270; // float32
			 uintptr_t m_nMaxTracesPerFrame = 0x274; // float32
			 uintptr_t m_flRadiusScale = 0x278; // CPerParticleFloatInput
			 uintptr_t m_flBounceAmount = 0x3d8; // CPerParticleFloatInput
			 uintptr_t m_flSlideAmount = 0x538; // CPerParticleFloatInput
			 uintptr_t m_flRandomDirScale = 0x698; // CPerParticleFloatInput
			 uintptr_t m_bDecayBounce = 0x7f8; // bool
			 uintptr_t m_bKillonContact = 0x7f9; // bool
			 uintptr_t m_flMinSpeed = 0x7fc; // float32
			 uintptr_t m_bSetNormal = 0x800; // bool
			 uintptr_t m_nStickOnCollisionField = 0x804; // ParticleAttributeIndex_t
			 uintptr_t m_flStopSpeed = 0x808; // CPerParticleFloatInput
			 uintptr_t m_nEntityStickDataField = 0x968; // ParticleAttributeIndex_t
			 uintptr_t m_nEntityStickNormalField = 0x96c; // ParticleAttributeIndex_t
		}
	}
}
