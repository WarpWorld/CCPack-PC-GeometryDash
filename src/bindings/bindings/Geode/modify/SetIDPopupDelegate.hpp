#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, SetIDPopupDelegate> : ModifyBase<ModifyDerive<Der, SetIDPopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetIDPopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, SetIDPopupDelegate>>::ModifyBase;
		using Base = SetIDPopupDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
