#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, HSVWidgetDelegate> : ModifyBase<ModifyDerive<Der, HSVWidgetDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HSVWidgetDelegate>>;
		using ModifyBase<ModifyDerive<Der, HSVWidgetDelegate>>::ModifyBase;
		using Base = HSVWidgetDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
