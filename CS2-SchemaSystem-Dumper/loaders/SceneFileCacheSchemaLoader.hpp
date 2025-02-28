// scenefilecache
#pragma once
#include "../SchemaLoadingHandler.hpp"

class SceneFileCacheSchemaLoader : public BaseLoader {

public:
	SceneFileCacheSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		if (dllsLoaded)
			return true;

		std::vector<const char*> dlls = {
			"game\\bin\\win64\\tier0.dll",
		};
		mainDll = "game\\bin\\win64\\scenefilecache.dll";

		return dllsLoaded = SchemaLoadingHandler::LoadNeededDlls(dlls, mainDll);
	}

	inline bool InstallBindings() {
		return bindingsInstalled = SchemaLoadingHandler::InstallSchemaBindings(mainDll);
	}
};