

#pragma once
#include "../SchemaLoadingHandler.hpp"

class AnimationSystemSchemaLoader : public BaseLoader {

public:
	AnimationSystemSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		if (dllsLoaded)
			return true;

		std::vector<const char*> dlls = {
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\animationsystem.dll";

		return dllsLoaded = SchemaLoadingHandler::LoadNeededDlls(dlls, mainDll);
	}

	inline bool InstallBindings() {
		return bindingsInstalled = SchemaLoadingHandler::InstallSchemaBindings(mainDll);
	}
};