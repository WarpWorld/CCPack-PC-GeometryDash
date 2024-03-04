#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, TextInputDelegate> : ModifyBase<ModifyDerive<Der, TextInputDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextInputDelegate>>;
		using ModifyBase<ModifyDerive<Der, TextInputDelegate>>::ModifyBase;
		using Base = TextInputDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
