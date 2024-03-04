#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/StatsObject.hpp>
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
	struct ModifyDerive<Der, StatsObject> : ModifyBase<ModifyDerive<Der, StatsObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, StatsObject>>;
		using ModifyBase<ModifyDerive<Der, StatsObject>>::ModifyBase;
		using Base = StatsObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82070, Optcall, StatsObject, create, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82120, Membercall, StatsObject, init, char const*, int)
		}
	};
}
