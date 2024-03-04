#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameObjectCopy.hpp>
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

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameObjectCopy> : ModifyBase<ModifyDerive<Der, GameObjectCopy>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameObjectCopy>>;
		using ModifyBase<ModifyDerive<Der, GameObjectCopy>>::ModifyBase;
		using Base = GameObjectCopy;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24a8b0, Optcall, GameObjectCopy, create, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24a960, Membercall, GameObjectCopy, init, GameObject*)
		}
	};
}
