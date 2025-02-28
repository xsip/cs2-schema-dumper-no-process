#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PathParticleRope {
			 uintptr_t m_bStartActive = 0x570; // bool
			 uintptr_t m_flMaxSimulationTime = 0x574; // float32
			 uintptr_t m_iszEffectName = 0x578; // CUtlSymbolLarge
			 uintptr_t m_PathNodes_Name = 0x580; // CUtlVector< CUtlSymbolLarge >
			 uintptr_t m_flParticleSpacing = 0x598; // float32
			 uintptr_t m_flSlack = 0x59c; // float32
			 uintptr_t m_flRadius = 0x5a0; // float32
			 uintptr_t m_ColorTint = 0x5a4; // Color
			 uintptr_t m_nEffectState = 0x5a8; // int32
			 uintptr_t m_iEffectIndex = 0x5b0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_PathNodes_Position = 0x5b8; // C_NetworkUtlVectorBase< Vector >
			 uintptr_t m_PathNodes_TangentIn = 0x5d0; // C_NetworkUtlVectorBase< Vector >
			 uintptr_t m_PathNodes_TangentOut = 0x5e8; // C_NetworkUtlVectorBase< Vector >
			 uintptr_t m_PathNodes_Color = 0x600; // C_NetworkUtlVectorBase< Vector >
			 uintptr_t m_PathNodes_PinEnabled = 0x618; // C_NetworkUtlVectorBase< bool >
			 uintptr_t m_PathNodes_RadiusScale = 0x630; // C_NetworkUtlVectorBase< float32 >
		}
	}
}
