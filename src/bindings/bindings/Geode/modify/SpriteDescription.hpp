#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpriteDescription.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createDescription
		#define GEODE_STATICS_createDescription
		GEODE_AS_STATIC_FUNCTION(createDescription) 
	#endif

	#ifndef GEODE_STATICS_initDescription
		#define GEODE_STATICS_initDescription
		GEODE_AS_STATIC_FUNCTION(initDescription) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpriteDescription> : ModifyBase<ModifyDerive<Der, SpriteDescription>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpriteDescription>>;
		using ModifyBase<ModifyDerive<Der, SpriteDescription>>::ModifyBase;
		using Base = SpriteDescription;
        using Derived = Der;
		void apply() override {

		}
	};
}
