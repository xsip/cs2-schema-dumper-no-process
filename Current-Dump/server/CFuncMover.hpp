#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncMover {
			 uintptr_t m_bCreateMovableNavMesh = 0x790; // bool
			 uintptr_t m_iszPathName = 0x798; // CUtlSymbolLarge
			 uintptr_t m_hPathMover = 0x7a0; // CHandle< CPathMover >
			 uintptr_t m_iszPathNodeStart = 0x7a8; // CUtlSymbolLarge
			 uintptr_t m_eMoveType = 0x7b0; // CFuncMover::Move_t
			 uintptr_t m_bIsReversing = 0x7b4; // bool
			 uintptr_t m_vTarget = 0x7b8; // Vector
			 uintptr_t m_flStartSpeed = 0x7c4; // float32
			 uintptr_t m_flPathLocation = 0x7c8; // float32
			 uintptr_t m_flT = 0x7cc; // float32
			 uintptr_t m_nCurrentNodeIndex = 0x7d0; // int32
			 uintptr_t m_nPreviousNodeIndex = 0x7d4; // int32
			 uintptr_t m_bFixedOrientation = 0x7d8; // bool
			 uintptr_t m_bFixedPitch = 0x7d9; // bool
			 uintptr_t m_eSolidType = 0x7da; // SolidType_t
			 uintptr_t m_bIsMoving = 0x7db; // bool
			 uintptr_t m_flTimeToReachMaxSpeed = 0x7dc; // float32
			 uintptr_t m_flDistanceToReachMaxSpeed = 0x7e0; // float32
			 uintptr_t m_flTimeToReachZeroSpeed = 0x7e4; // float32
			 uintptr_t m_flDistanceToReachZeroSpeed = 0x7e8; // float32
			 uintptr_t m_flTimeMovementStart = 0x7ec; // GameTime_t
			 uintptr_t m_flTimeMovementStop = 0x7f0; // GameTime_t
			 uintptr_t m_hStopAtNode = 0x7f4; // CHandle< CMoverPathNode >
			 uintptr_t m_flPathLocationToBeginStop = 0x7f8; // float32
			 uintptr_t m_iszStartForwardSound = 0x800; // CUtlSymbolLarge
			 uintptr_t m_iszLoopForwardSound = 0x808; // CUtlSymbolLarge
			 uintptr_t m_iszStopForwardSound = 0x810; // CUtlSymbolLarge
			 uintptr_t m_iszStartReverseSound = 0x818; // CUtlSymbolLarge
			 uintptr_t m_iszLoopReverseSound = 0x820; // CUtlSymbolLarge
			 uintptr_t m_iszStopReverseSound = 0x828; // CUtlSymbolLarge
			 uintptr_t m_iszArriveAtDestinationSound = 0x830; // CUtlSymbolLarge
			 uintptr_t m_OnMovementEnd = 0x840; // CEntityIOOutput
			 uintptr_t m_bStartAtEnd = 0x868; // bool
			 uintptr_t m_eOrientationUpdate = 0x86c; // CFuncMover::OrientationUpdate_t
			 uintptr_t m_flTimeStartOrientationChange = 0x870; // GameTime_t
			 uintptr_t m_flTimeToBlendToNewOrientation = 0x874; // float32
			 uintptr_t m_flDurationBlendToNewOrientationRan = 0x878; // float32
			 uintptr_t m_qOriginalOrientation = 0x880; // Quaternion
		}
	}
}
