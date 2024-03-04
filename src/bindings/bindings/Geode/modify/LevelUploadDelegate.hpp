#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelUploadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, LevelUploadDelegate> : ModifyBase<ModifyDerive<Der, LevelUploadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelUploadDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelUploadDelegate>>::ModifyBase;
		using Base = LevelUploadDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
