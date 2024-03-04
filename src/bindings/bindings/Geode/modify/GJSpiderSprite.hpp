#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSpiderSprite.hpp>
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
	struct ModifyDerive<Der, GJSpiderSprite> : ModifyBase<ModifyDerive<Der, GJSpiderSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSpiderSprite>>;
		using ModifyBase<ModifyDerive<Der, GJSpiderSprite>>::ModifyBase;
		using Base = GJSpiderSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2186e0, Optcall, GJSpiderSprite, create, int)
		}
	};
}
