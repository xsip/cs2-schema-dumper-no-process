#pragma once
#include "../BaseLoader.hpp"

class SteamAudioSchemaLoader : public BaseLoader {

public:
	SteamAudioSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\phonon.dll",
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\steamaudio.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};