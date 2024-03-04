#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelListDeleteDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, LevelListDeleteDelegate> : ModifyBase<ModifyDerive<Der, LevelListDeleteDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelListDeleteDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelListDeleteDelegate>>::ModifyBase;
		using Base = LevelListDeleteDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
