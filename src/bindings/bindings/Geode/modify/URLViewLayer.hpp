#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/URLViewLayer.hpp>
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
	struct ModifyDerive<Der, URLViewLayer> : ModifyBase<ModifyDerive<Der, URLViewLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, URLViewLayer>>;
		using ModifyBase<ModifyDerive<Der, URLViewLayer>>::ModifyBase;
		using Base = URLViewLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
