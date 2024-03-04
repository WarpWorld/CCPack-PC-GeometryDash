#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/StatsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, StatsLayer> : ModifyBase<ModifyDerive<Der, StatsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, StatsLayer>>;
		using ModifyBase<ModifyDerive<Der, StatsLayer>>::ModifyBase;
		using Base = StatsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bb620, Optcall, StatsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bb730, Thiscall, StatsLayer, customSetup, )
		}
	};
}
