#pragma once
#include "../BaseLoader.hpp"

class SteamAudioSchemaLoader : public BaseLoader {

public:
	SteamAudioSchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\phonon.dll",
			"game\\bin\\win64\\tier0.dll"
		};

		mainDll = "game\\bin\\win64\\steamaudio.dll";

	}

	inline bool Initialize() {
		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};