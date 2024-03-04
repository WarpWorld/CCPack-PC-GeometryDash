#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TriggerEffectDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, TriggerEffectDelegate> : ModifyBase<ModifyDerive<Der, TriggerEffectDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TriggerEffectDelegate>>;
		using ModifyBase<ModifyDerive<Der, TriggerEffectDelegate>>::ModifyBase;
		using Base = TriggerEffectDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
