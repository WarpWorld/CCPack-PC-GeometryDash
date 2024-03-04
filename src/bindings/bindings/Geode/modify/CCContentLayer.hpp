#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCContentLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCContentLayer> : ModifyBase<ModifyDerive<Der, CCContentLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCContentLayer>>;
		using ModifyBase<ModifyDerive<Der, CCContentLayer>>::ModifyBase;
		using Base = CCContentLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23b20, Thiscall, CCContentLayer, setPosition, cocos2d::CCPoint const&)
		}
	};
}
