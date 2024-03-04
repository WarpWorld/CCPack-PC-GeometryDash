#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayerCheckpoint.hpp>
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
	struct ModifyDerive<Der, PlayerCheckpoint> : ModifyBase<ModifyDerive<Der, PlayerCheckpoint>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayerCheckpoint>>;
		using ModifyBase<ModifyDerive<Der, PlayerCheckpoint>>::ModifyBase;
		using Base = PlayerCheckpoint;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2eb770, Optcall, PlayerCheckpoint, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52e00, Thiscall, PlayerCheckpoint, init, )
		}
	};
}
