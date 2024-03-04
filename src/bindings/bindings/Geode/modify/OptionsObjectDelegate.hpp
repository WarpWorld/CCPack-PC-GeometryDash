#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OptionsObjectDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_stateChanged
		#define GEODE_STATICS_stateChanged
		GEODE_AS_STATIC_FUNCTION(stateChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OptionsObjectDelegate> : ModifyBase<ModifyDerive<Der, OptionsObjectDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OptionsObjectDelegate>>;
		using ModifyBase<ModifyDerive<Der, OptionsObjectDelegate>>::ModifyBase;
		using Base = OptionsObjectDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
