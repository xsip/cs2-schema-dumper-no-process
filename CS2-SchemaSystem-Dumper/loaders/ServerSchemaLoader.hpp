#pragma once
#include "../BaseLoader.hpp"

class ServerSchemaLoader : public BaseLoader {

public:
	ServerSchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\steam_api64.dll",
		};

		mainDll = "game\\csgo\\bin\\win64\\server.dll";

	}

	inline bool Initialize() {
		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}

};