// scenefilecache
#pragma once
#include "../BaseLoader.hpp"

class SceneFileCacheSchemaLoader : public BaseLoader {

public:
	SceneFileCacheSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll",
		};
		mainDll = "game\\bin\\win64\\scenefilecache.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}

};