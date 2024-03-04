#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ExplodeItemSprite.hpp>
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
	struct ModifyDerive<Der, ExplodeItemSprite> : ModifyBase<ModifyDerive<Der, ExplodeItemSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ExplodeItemSprite>>;
		using ModifyBase<ModifyDerive<Der, ExplodeItemSprite>>::ModifyBase;
		using Base = ExplodeItemSprite;
        using Derived = Der;
		void apply() override {

		}
	};
}
