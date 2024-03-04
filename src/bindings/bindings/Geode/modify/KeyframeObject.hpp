#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeyframeObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setupSpline
		#define GEODE_STATICS_setupSpline
		GEODE_AS_STATIC_FUNCTION(setupSpline) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeyframeObject> : ModifyBase<ModifyDerive<Der, KeyframeObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeyframeObject>>;
		using ModifyBase<ModifyDerive<Der, KeyframeObject>>::ModifyBase;
		using Base = KeyframeObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
