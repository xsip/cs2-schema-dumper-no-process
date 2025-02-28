#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncTrackChange {
			 uintptr_t m_trackTop = 0x858; // CPathTrack*
			 uintptr_t m_trackBottom = 0x860; // CPathTrack*
			 uintptr_t m_train = 0x868; // CFuncTrackTrain*
			 uintptr_t m_trackTopName = 0x870; // CUtlSymbolLarge
			 uintptr_t m_trackBottomName = 0x878; // CUtlSymbolLarge
			 uintptr_t m_trainName = 0x880; // CUtlSymbolLarge
			 uintptr_t m_code = 0x888; // TRAIN_CODE
			 uintptr_t m_targetState = 0x88c; // int32
			 uintptr_t m_use = 0x890; // int32
		}
	}
}
