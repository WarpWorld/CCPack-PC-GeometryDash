#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onFadeIn
		#define GEODE_STATICS_onFadeIn
		GEODE_AS_STATIC_FUNCTION(onFadeIn) 
	#endif

	#ifndef GEODE_STATICS_onFadeOut
		#define GEODE_STATICS_onFadeOut
		GEODE_AS_STATIC_FUNCTION(onFadeOut) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_updatePlaybackBtn
		#define GEODE_STATICS_updatePlaybackBtn
		GEODE_AS_STATIC_FUNCTION(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongOptionsLayer> : ModifyBase<ModifyDerive<Der, SongOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, SongOptionsLayer>>::ModifyBase;
		using Base = SongOptionsLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
