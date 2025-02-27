#pragma once
#include "SchemaLoader.hpp"

class PanoramaUiClientSchemaLoader : public BaseLoader {

public:
	PanoramaUiClientSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		if (dllsLoaded)
			return true;

		std::vector<const char*> dlls = {
			"game\\bin\\win64\\steam_api64.dll",
			"game\\bin\\win64\\tier0.dll",
			// needed for v8
			"game\\bin\\win64\\dbghelp.dll", // needed for libbase!
			"game\\bin\\win64\\v8_libbase.dll", // actual libbase!
			"game\\bin\\win64\\v8_icuuc.dll",
			"game\\bin\\win64\\v8_icui18n.dll",
			"game\\bin\\win64\\v8_zlib.dll",
			"game\\bin\\win64\\v8.dll", // actual v8
			// needed for video64.dll
			"game\\bin\\win64\\libavutil-56.dll", // needed in avcodec 58
			"game\\bin\\win64\\libavcodec-58.dll",
			"game\\bin\\win64\\libavformat-58.dll",
			"game\\bin\\win64\\libavresample-4.dll",
			"game\\bin\\win64\\libswscale-5.dll",
			"game\\bin\\win64\\video64.dll",
		};
		mainDll = "game\\bin\\win64\\panoramauiclient.dll";

		return dllsLoaded = SchemaLoader::LoadNeededDlls(dlls, mainDll);
	}

	inline bool InstallBindings() {
		return bindingsInstalled = SchemaLoader::InstallSchemaBindings(mainDll);
	}
};
