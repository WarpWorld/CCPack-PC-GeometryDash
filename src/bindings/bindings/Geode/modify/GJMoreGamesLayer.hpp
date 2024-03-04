#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMoreGamesLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getMoreGamesList
		#define GEODE_STATICS_getMoreGamesList
		GEODE_AS_STATIC_FUNCTION(getMoreGamesList) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMoreGamesLayer> : ModifyBase<ModifyDerive<Der, GJMoreGamesLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMoreGamesLayer>>;
		using ModifyBase<ModifyDerive<Der, GJMoreGamesLayer>>::ModifyBase;
		using Base = GJMoreGamesLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f9090, Optcall, GJMoreGamesLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f9330, Membercall, GJMoreGamesLayer, getMoreGamesList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f95e0, Thiscall, GJMoreGamesLayer, customSetup, )
		}
	};
}
