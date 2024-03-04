#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CurrencyRewardDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_currencyWillExit
		#define GEODE_STATICS_currencyWillExit
		GEODE_AS_STATIC_FUNCTION(currencyWillExit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CurrencyRewardDelegate> : ModifyBase<ModifyDerive<Der, CurrencyRewardDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CurrencyRewardDelegate>>;
		using ModifyBase<ModifyDerive<Der, CurrencyRewardDelegate>>::ModifyBase;
		using Base = CurrencyRewardDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
