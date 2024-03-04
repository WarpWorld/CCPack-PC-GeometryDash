#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RateLevelDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, RateLevelDelegate> : ModifyBase<ModifyDerive<Der, RateLevelDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RateLevelDelegate>>;
		using ModifyBase<ModifyDerive<Der, RateLevelDelegate>>::ModifyBase;
		using Base = RateLevelDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
