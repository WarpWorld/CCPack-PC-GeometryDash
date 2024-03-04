#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomListLayer.hpp>
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
	struct ModifyDerive<Der, BoomListLayer> : ModifyBase<ModifyDerive<Der, BoomListLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BoomListLayer>>;
		using ModifyBase<ModifyDerive<Der, BoomListLayer>>::ModifyBase;
		using Base = BoomListLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
