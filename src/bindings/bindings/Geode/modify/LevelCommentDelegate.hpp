#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelCommentDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, LevelCommentDelegate> : ModifyBase<ModifyDerive<Der, LevelCommentDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelCommentDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelCommentDelegate>>::ModifyBase;
		using Base = LevelCommentDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
