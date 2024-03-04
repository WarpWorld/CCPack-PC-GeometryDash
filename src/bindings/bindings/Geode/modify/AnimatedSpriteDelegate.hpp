#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AnimatedSpriteDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AnimatedSpriteDelegate> : ModifyBase<ModifyDerive<Der, AnimatedSpriteDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AnimatedSpriteDelegate>>;
		using ModifyBase<ModifyDerive<Der, AnimatedSpriteDelegate>>::ModifyBase;
		using Base = AnimatedSpriteDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
