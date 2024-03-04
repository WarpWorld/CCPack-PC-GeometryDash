#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ConfigureValuePopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_valuePopupClosed
		#define GEODE_STATICS_valuePopupClosed
		GEODE_AS_STATIC_FUNCTION(valuePopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ConfigureValuePopupDelegate> : ModifyBase<ModifyDerive<Der, ConfigureValuePopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ConfigureValuePopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, ConfigureValuePopupDelegate>>::ModifyBase;
		using Base = ConfigureValuePopupDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
