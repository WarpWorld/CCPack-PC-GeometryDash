#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSpriteColor.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getColorMode
		#define GEODE_STATICS_getColorMode
		GEODE_AS_STATIC_FUNCTION(getColorMode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSpriteColor> : ModifyBase<ModifyDerive<Der, GJSpriteColor>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSpriteColor>>;
		using ModifyBase<ModifyDerive<Der, GJSpriteColor>>::ModifyBase;
		using Base = GJSpriteColor;
        using Derived = Der;
		void apply() override {

		}
	};
}
