#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BonusDropdown.hpp>
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

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BonusDropdown> : ModifyBase<ModifyDerive<Der, BonusDropdown>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BonusDropdown>>;
		using ModifyBase<ModifyDerive<Der, BonusDropdown>>::ModifyBase;
		using Base = BonusDropdown;
        using Derived = Der;
		void apply() override {

		}
	};
}
