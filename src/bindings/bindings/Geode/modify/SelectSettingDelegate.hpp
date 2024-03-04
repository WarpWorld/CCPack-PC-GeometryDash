#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectSettingDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_selectSettingClosed
		#define GEODE_STATICS_selectSettingClosed
		GEODE_AS_STATIC_FUNCTION(selectSettingClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectSettingDelegate> : ModifyBase<ModifyDerive<Der, SelectSettingDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectSettingDelegate>>;
		using ModifyBase<ModifyDerive<Der, SelectSettingDelegate>>::ModifyBase;
		using Base = SelectSettingDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
