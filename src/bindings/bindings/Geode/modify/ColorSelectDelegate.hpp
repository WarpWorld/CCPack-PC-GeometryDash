#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorSelectDelegate> : ModifyBase<ModifyDerive<Der, ColorSelectDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorSelectDelegate>>;
		using ModifyBase<ModifyDerive<Der, ColorSelectDelegate>>::ModifyBase;
		using Base = ColorSelectDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
