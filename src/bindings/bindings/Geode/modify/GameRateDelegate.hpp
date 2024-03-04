#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameRateDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_updateRate
		#define GEODE_STATICS_updateRate
		GEODE_AS_STATIC_FUNCTION(updateRate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameRateDelegate> : ModifyBase<ModifyDerive<Der, GameRateDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameRateDelegate>>;
		using ModifyBase<ModifyDerive<Der, GameRateDelegate>>::ModifyBase;
		using Base = GameRateDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
