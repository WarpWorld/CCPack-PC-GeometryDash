#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpritePartDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_displayFrameChanged
		#define GEODE_STATICS_displayFrameChanged
		GEODE_AS_STATIC_FUNCTION(displayFrameChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpritePartDelegate> : ModifyBase<ModifyDerive<Der, SpritePartDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpritePartDelegate>>;
		using ModifyBase<ModifyDerive<Der, SpritePartDelegate>>::ModifyBase;
		using Base = SpritePartDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
