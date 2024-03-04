#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameOptionsTrigger.hpp>
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

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameOptionsTrigger> : ModifyBase<ModifyDerive<Der, GameOptionsTrigger>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameOptionsTrigger>>;
		using ModifyBase<ModifyDerive<Der, GameOptionsTrigger>>::ModifyBase;
		using Base = GameOptionsTrigger;
        using Derived = Der;
		void apply() override {

		}
	};
}
