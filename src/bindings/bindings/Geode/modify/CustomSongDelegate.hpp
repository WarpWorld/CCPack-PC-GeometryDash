#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_songIDChanged
		#define GEODE_STATICS_songIDChanged
		GEODE_AS_STATIC_FUNCTION(songIDChanged) 
	#endif

	#ifndef GEODE_STATICS_getActiveSongID
		#define GEODE_STATICS_getActiveSongID
		GEODE_AS_STATIC_FUNCTION(getActiveSongID) 
	#endif

	#ifndef GEODE_STATICS_getSongFileName
		#define GEODE_STATICS_getSongFileName
		GEODE_AS_STATIC_FUNCTION(getSongFileName) 
	#endif

	#ifndef GEODE_STATICS_getLevelSettings
		#define GEODE_STATICS_getLevelSettings
		GEODE_AS_STATIC_FUNCTION(getLevelSettings) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongDelegate> : ModifyBase<ModifyDerive<Der, CustomSongDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongDelegate>>;
		using ModifyBase<ModifyDerive<Der, CustomSongDelegate>>::ModifyBase;
		using Base = CustomSongDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
