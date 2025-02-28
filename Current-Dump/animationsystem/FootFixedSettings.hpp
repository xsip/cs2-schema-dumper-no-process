#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace FootFixedSettings {
			 uintptr_t m_traceSettings = 0x0; // TraceSettings_t
			 uintptr_t m_vFootBaseBindPosePositionMS = 0x10; // VectorAligned
			 uintptr_t m_flFootBaseLength = 0x20; // float32
			 uintptr_t m_flMaxRotationLeft = 0x24; // float32
			 uintptr_t m_flMaxRotationRight = 0x28; // float32
			 uintptr_t m_footstepLandedTagIndex = 0x2c; // int32
			 uintptr_t m_bEnableTracing = 0x30; // bool
			 uintptr_t m_flTraceAngleBlend = 0x34; // float32
			 uintptr_t m_nDisableTagIndex = 0x38; // int32
			 uintptr_t m_nFootIndex = 0x3c; // int32
		}
	}
}
