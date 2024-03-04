#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSmartBlockPreviewSprite.hpp>
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

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSmartBlockPreviewSprite> : ModifyBase<ModifyDerive<Der, GJSmartBlockPreviewSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSmartBlockPreviewSprite>>;
		using ModifyBase<ModifyDerive<Der, GJSmartBlockPreviewSprite>>::ModifyBase;
		using Base = GJSmartBlockPreviewSprite;
        using Derived = Der;
		void apply() override {

		}
	};
}
