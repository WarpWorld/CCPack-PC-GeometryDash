#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelUpdateDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, LevelUpdateDelegate> : ModifyBase<ModifyDerive<Der, LevelUpdateDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelUpdateDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelUpdateDelegate>>::ModifyBase;
		using Base = LevelUpdateDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
