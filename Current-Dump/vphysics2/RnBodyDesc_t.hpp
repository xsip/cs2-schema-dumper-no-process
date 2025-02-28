#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace RnBodyDesc_t {
			 uintptr_t m_sDebugName = 0x0;
			 uintptr_t m_vPosition = 0x8;
			 uintptr_t m_qOrientation = 0x14;
			 uintptr_t m_vLinearVelocity = 0x24;
			 uintptr_t m_vAngularVelocity = 0x30;
			 uintptr_t m_vLocalMassCenter = 0x3c;
			 uintptr_t m_LocalInertiaInv = 0x48;
			 uintptr_t m_flMassInv = 0x6c;
			 uintptr_t m_flGameMass = 0x70;
			 uintptr_t m_flInertiaScaleInv = 0x74;
			 uintptr_t m_flLinearDamping = 0x78;
			 uintptr_t m_flAngularDamping = 0x7c;
			 uintptr_t m_flLinearDrag = 0x80;
			 uintptr_t m_flAngularDrag = 0x84;
			 uintptr_t m_flLinearBuoyancyDrag = 0x88;
			 uintptr_t m_flAngularBuoyancyDrag = 0x8c;
			 uintptr_t m_vLastAwakeForceAccum = 0x90;
			 uintptr_t m_vLastAwakeTorqueAccum = 0x9c;
			 uintptr_t m_flBuoyancyFactor = 0xa8;
			 uintptr_t m_flGravityScale = 0xac;
			 uintptr_t m_flTimeScale = 0xb0;
			 uintptr_t m_nBodyType = 0xb4;
			 uintptr_t m_nGameIndex = 0xb8;
			 uintptr_t m_nGameFlags = 0xbc;
			 uintptr_t m_nMinVelocityIterations = 0xc0;
			 uintptr_t m_nMinPositionIterations = 0xc1;
			 uintptr_t m_nMassPriority = 0xc2;
			 uintptr_t m_bEnabled = 0xc3;
			 uintptr_t m_bSleeping = 0xc4;
			 uintptr_t m_bIsContinuousEnabled = 0xc5;
			 uintptr_t m_bDragEnabled = 0xc6;
			 uintptr_t m_bBuoyancyDragEnabled = 0xc7;
			 uintptr_t m_bGravityDisabled = 0xc8;
			 uintptr_t m_bSpeculativeEnabled = 0xc9;
			 uintptr_t m_bHasShadowController = 0xca;
		}
	}
}
