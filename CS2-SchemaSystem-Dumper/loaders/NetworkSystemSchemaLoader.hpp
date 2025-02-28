

#pragma once
#include "../BaseLoader.hpp"

class NetworkSystemSchemaLoader : public BaseLoader {

public:
	NetworkSystemSchemaLoader() :
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
		mainDll = "game\\bin\\win64\\networksystem.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};