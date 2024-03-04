#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongLayerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_customSongLayerClosed
		#define GEODE_STATICS_customSongLayerClosed
		GEODE_AS_STATIC_FUNCTION(customSongLayerClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongLayerDelegate> : ModifyBase<ModifyDerive<Der, CustomSongLayerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongLayerDelegate>>;
		using ModifyBase<ModifyDerive<Der, CustomSongLayerDelegate>>::ModifyBase;
		using Base = CustomSongLayerDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
