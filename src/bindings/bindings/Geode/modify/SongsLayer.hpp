#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongsLayer.hpp>
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
	struct ModifyDerive<Der, SongsLayer> : ModifyBase<ModifyDerive<Der, SongsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongsLayer>>;
		using ModifyBase<ModifyDerive<Der, SongsLayer>>::ModifyBase;
		using Base = SongsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x38bfb0, Optcall, SongsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x38c0c0, Thiscall, SongsLayer, customSetup, )
		}
	};
}
