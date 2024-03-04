#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSpecialColorSelectDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSpecialColorSelectDelegate> : ModifyBase<ModifyDerive<Der, GJSpecialColorSelectDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSpecialColorSelectDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJSpecialColorSelectDelegate>>::ModifyBase;
		using Base = GJSpecialColorSelectDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
