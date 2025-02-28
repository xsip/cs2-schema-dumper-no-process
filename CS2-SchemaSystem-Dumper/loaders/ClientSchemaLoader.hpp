#pragma once
#include "../BaseLoader.hpp"

class ClientSchemaLoader : public BaseLoader {

public:
	ClientSchemaLoader():
	BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\embree3.dll",
			"game\\bin\\win64\\steam_api64.dll",
			// needed for v8
			"game\\bin\\win64\\dbghelp.dll", // needed for libbase!
			"game\\bin\\win64\\v8_libbase.dll", // actual libbase!
			"game\\bin\\win64\\v8_icuuc.dll",
			"game\\bin\\win64\\v8_icui18n.dll",
			"game\\bin\\win64\\v8_zlib.dll",
			"game\\bin\\win64\\v8.dll", // actual v8
			// needed for video64.dll
			"game\\bin\\win64\\libavutil-56.dll",
			"game\\bin\\win64\\libavcodec-58.dll",
			"game\\bin\\win64\\libavformat-58.dll",
			"game\\bin\\win64\\libavresample-4.dll",
			"game\\bin\\win64\\libswscale-5.dll",
			"game\\bin\\win64\\video64.dll",
		};
		mainDll = "game\\csgo\\bin\\win64\\client.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};
