// scenefilecache
#pragma once
#include "../BaseLoader.hpp"

class SceneFileCacheSchemaLoader : public BaseLoader {

public:
	SceneFileCacheSchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll",
		};

		mainDll = "game\\bin\\win64\\scenefilecache.dll";

	}

	inline bool Initialize() {
		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}

};