#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GooglePlayDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, GooglePlayDelegate> : ModifyBase<ModifyDerive<Der, GooglePlayDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GooglePlayDelegate>>;
		using ModifyBase<ModifyDerive<Der, GooglePlayDelegate>>::ModifyBase;
		using Base = GooglePlayDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
