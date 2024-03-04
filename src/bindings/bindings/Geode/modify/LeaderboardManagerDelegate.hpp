#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LeaderboardManagerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, LeaderboardManagerDelegate> : ModifyBase<ModifyDerive<Der, LeaderboardManagerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LeaderboardManagerDelegate>>;
		using ModifyBase<ModifyDerive<Der, LeaderboardManagerDelegate>>::ModifyBase;
		using Base = LeaderboardManagerDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
