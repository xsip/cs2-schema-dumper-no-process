#pragma once
#include "../BaseLoader.hpp"

class Engine2SchemaLoader : public BaseLoader {

public:
	Engine2SchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\steam_api64.dll",
			"game\\bin\\win64\\steamnetworkingsockets.dll",
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\engine2.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};