#pragma once
#include "../BaseLoader.hpp"

class SceneSystemSchemaLoader : public BaseLoader {

public:
	SceneSystemSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\scenesystem.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}

};