#pragma once
#include "SchemaLoaders.hpp"

#include <iostream>
#include <sstream>

class GlobalLoader {
private:

	inline static std::vector<BaseLoader*> loaderList = std::vector<BaseLoader*>{
		new ClientSchemaLoader(),
		new Engine2SchemaLoader(),
		new FileSystemStdioSchemaLoader(),
		new ServerSchemaLoader(),
		new InputSystemSchemaLoader(),
		new ImeManagerSchemaLoader(),
		new LocalizeSchemaLoader(),
		new RenderSystemDx11SchemaLoader(),
		new ResourceSystemSchemaLoader(),
		new MaterialSystem2SchemaLoader(),
		new MeshSystemSchemaLoader(),
		new WorldRendererSchemaLoader(),
		new PulseSystemSchemaLoader(),
		new VScriptSchemaLoader(),
		new NetworkSystemSchemaLoader(),
		new AnimationSystemSchemaLoader(),
		new VPhysics2SchemaLoader(),
		new SoundSystemSchemaLoader(),
		new SteamAudioSchemaLoader(),
		new SceneSystemSchemaLoader(),
		new ParticlesSchemaLoader(),
		new PanoramaUiClientSchemaLoader(),
		new V8SystemSchemaLoader(),
		new PanoramaSchemaLoader(),
		new HostSchemaLoader(),
		new SceneFileCacheSchemaLoader(),
		new MatchMakingSchemaLoader(),
		new NavSystemSchemaLoader()
	};

public:
	inline static bool Initialize() {


		for (const auto loader : GlobalLoader::loaderList) {
			if (!loader->Initialize()) {
				printf("Coudln't initialize %s Loader!\n", loader->GetModuleNameFromPath()->c_str());
				return false;
			}
		}
		return true;
	}

	inline static bool InstallSchemaBindings() {

		for (const auto loader : GlobalLoader::loaderList) {
			if (!loader->InstallBindings()) {
				printf("Coudln't install bindings for %s Loader!\n", loader->GetModuleNameFromPath()->c_str());
				return false;
			}
		}
		return true;
	}

	inline static SDK::CSchemaSystem* GetSchemaSystem() {
		return SchemaLoadingHandler::GetSchemaSystem();
	}
};