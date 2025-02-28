#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_WorldTraceConstraint {
			 uintptr_t m_nCP = 0x1c0;
			 uintptr_t m_vecCpOffset = 0x1c4;
			 uintptr_t m_nCollisionMode = 0x1d0;
			 uintptr_t m_nCollisionModeMin = 0x1d4;
			 uintptr_t m_nTraceSet = 0x1d8;
			 uintptr_t m_CollisionGroupName = 0x1dc;
			 uintptr_t m_bWorldOnly = 0x25c;
			 uintptr_t m_bBrushOnly = 0x25d;
			 uintptr_t m_bIncludeWater = 0x25e;
			 uintptr_t m_nIgnoreCP = 0x260;
			 uintptr_t m_flCpMovementTolerance = 0x264;
			 uintptr_t m_flRetestRate = 0x268;
			 uintptr_t m_flTraceTolerance = 0x26c;
			 uintptr_t m_flCollisionConfirmationSpeed = 0x270;
			 uintptr_t m_nMaxTracesPerFrame = 0x274;
			 uintptr_t m_flRadiusScale = 0x278;
			 uintptr_t m_flBounceAmount = 0x3d8;
			 uintptr_t m_flSlideAmount = 0x538;
			 uintptr_t m_flRandomDirScale = 0x698;
			 uintptr_t m_bDecayBounce = 0x7f8;
			 uintptr_t m_bKillonContact = 0x7f9;
			 uintptr_t m_flMinSpeed = 0x7fc;
			 uintptr_t m_bSetNormal = 0x800;
			 uintptr_t m_nStickOnCollisionField = 0x804;
			 uintptr_t m_flStopSpeed = 0x808;
			 uintptr_t m_nEntityStickDataField = 0x968;
			 uintptr_t m_nEntityStickNormalField = 0x96c;
		}
	}
}
