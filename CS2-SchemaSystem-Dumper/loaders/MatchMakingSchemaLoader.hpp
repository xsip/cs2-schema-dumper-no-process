#pragma once
#include "../BaseLoader.hpp"

class MatchMakingSchemaLoader : public BaseLoader {

public:
	MatchMakingSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\steam_api64.dll",
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\csgo\\bin\\win64\\matchmaking.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};