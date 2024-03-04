#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, LevelManagerDelegate> : ModifyBase<ModifyDerive<Der, LevelManagerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelManagerDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelManagerDelegate>>::ModifyBase;
		using Base = LevelManagerDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
