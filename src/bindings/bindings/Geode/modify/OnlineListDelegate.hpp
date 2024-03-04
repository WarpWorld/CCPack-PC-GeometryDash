#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OnlineListDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, OnlineListDelegate> : ModifyBase<ModifyDerive<Der, OnlineListDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OnlineListDelegate>>;
		using ModifyBase<ModifyDerive<Der, OnlineListDelegate>>::ModifyBase;
		using Base = OnlineListDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
