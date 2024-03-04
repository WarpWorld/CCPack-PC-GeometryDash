#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongPlaybackDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongPlaybackDelegate> : ModifyBase<ModifyDerive<Der, SongPlaybackDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongPlaybackDelegate>>;
		using ModifyBase<ModifyDerive<Der, SongPlaybackDelegate>>::ModifyBase;
		using Base = SongPlaybackDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
