#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJValueTween.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJValueTween> : ModifyBase<ModifyDerive<Der, GJValueTween>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJValueTween>>;
		using ModifyBase<ModifyDerive<Der, GJValueTween>>::ModifyBase;
		using Base = GJValueTween;
        using Derived = Der;
		void apply() override {

		}
	};
}
