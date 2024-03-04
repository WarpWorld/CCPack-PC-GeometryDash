#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PulseEffectAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_isFinished
		#define GEODE_STATICS_isFinished
		GEODE_AS_STATIC_FUNCTION(isFinished) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_valueForDelta
		#define GEODE_STATICS_valueForDelta
		GEODE_AS_STATIC_FUNCTION(valueForDelta) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PulseEffectAction> : ModifyBase<ModifyDerive<Der, PulseEffectAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PulseEffectAction>>;
		using ModifyBase<ModifyDerive<Der, PulseEffectAction>>::ModifyBase;
		using Base = PulseEffectAction;
        using Derived = Der;
		void apply() override {

		}
	};
}
