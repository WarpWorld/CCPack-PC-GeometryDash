#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorActionSprite.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, ColorActionSprite> : ModifyBase<ModifyDerive<Der, ColorActionSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorActionSprite>>;
		using ModifyBase<ModifyDerive<Der, ColorActionSprite>>::ModifyBase;
		using Base = ColorActionSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d8bf0, Optcall, ColorActionSprite, create, )
		}
	};
}
