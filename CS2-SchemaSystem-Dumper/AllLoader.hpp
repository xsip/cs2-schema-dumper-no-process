#pragma once
#include "ClientSchemaLoader.hpp"
#include "Engine2SchemaLoader.hpp"
#include "FileSystemStdioSchemaLoader.hpp"
#include "ServerSchemaLoader.hpp"
#include "InputSystemSchemaLoader.hpp"
#include "ImeManagerSchemaLoader.hpp"
#include "LocalizeSchemaLoader.hpp"
#include "RenderSystemDx11SchemaLoader.hpp"
#include "ResourceSystemSchemaLoader.hpp"
#include "MaterialSystem2SchemaLoader.hpp"
#include "MeshSystemSchemaLoader.hpp"
#include "WorldRendererSchemaLoader.hpp"
#include "PulseSystemSchemaLoader.hpp"
#include "VScriptSchemaLoader.hpp"
#include "NetworkSystemSchemaLoader.hpp"
#include "AnimationSystemSchemaLoader.hpp"
#include "VPhysics2SchemaLoader.hpp"
#include "SoundSystemSchemaLoader.hpp"
#include "SteamAudioSchemaLoader.hpp"
#include "SceneSystemSchemaLoader.hpp"
#include "ParticlesSchemaLoader.hpp"
#include "PanoramaUiClientSchemaLoader.hpp"
#include "V8SystemSchemaLoader.hpp"
#include "PanoramaSchemaLoader.hpp"
#include "HostSchemaLoader.hpp"
#include "SceneFileCacheSchemaLoader.hpp"
#include "MatchMakingSchemaLoader.hpp"
#include "NavSystemSchemaLoader.hpp"

#include "GenericLoader.hpp"
#include <iostream>
#include <sstream>

class AllLoader {
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


		for (const auto loader : AllLoader::loaderList) {
			if (!loader->Initialize()) {
				printf("Coudln't initialize %s Loader!\n", loader->GetModuleNameFromPath()->c_str());
				return false;
			}
		}
		return true;
	}

	inline static bool InstallSchemaBindings() {

		for (const auto loader : AllLoader::loaderList) {
			if (!loader->InstallBindings()) {
				printf("Coudln't initialize %s Loader!\n", loader->GetModuleNameFromPath()->c_str());
				return false;
			}
		}
		return true;
	}

	inline static SDK::CSchemaSystem* GetSchemaSystem() {
		return SchemaLoader::GetSchemaSystem();
	}
};