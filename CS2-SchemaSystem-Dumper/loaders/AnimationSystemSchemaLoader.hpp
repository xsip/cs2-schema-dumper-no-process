#pragma once
#include "../BaseLoader.hpp"

class AnimationSystemSchemaLoader : public BaseLoader {

public:
	AnimationSystemSchemaLoader() : BaseLoader() {
		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};
		
		mainDll = "game\\bin\\win64\\animationsystem.dll";

	}

	inline bool Initialize() {
		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};