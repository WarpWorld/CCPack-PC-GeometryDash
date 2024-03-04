#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpawnTriggerAction.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, SpawnTriggerAction> : ModifyBase<ModifyDerive<Der, SpawnTriggerAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpawnTriggerAction>>;
		using ModifyBase<ModifyDerive<Der, SpawnTriggerAction>>::ModifyBase;
		using Base = SpawnTriggerAction;
        using Derived = Der;
		void apply() override {

		}
	};
}
