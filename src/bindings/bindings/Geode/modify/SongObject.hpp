#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongObject.hpp>
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
	struct ModifyDerive<Der, SongObject> : ModifyBase<ModifyDerive<Der, SongObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongObject>>;
		using ModifyBase<ModifyDerive<Der, SongObject>>::ModifyBase;
		using Base = SongObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
