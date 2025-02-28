#pragma once
#include "../BaseLoader.hpp"

class MatchMakingSchemaLoader : public BaseLoader {

public:
	MatchMakingSchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\steam_api64.dll",
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\csgo\\bin\\win64\\matchmaking.dll";

	}

	inline bool Initialize() {

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};