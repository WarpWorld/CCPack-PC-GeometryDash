#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, SetTextPopupDelegate> : ModifyBase<ModifyDerive<Der, SetTextPopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetTextPopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, SetTextPopupDelegate>>::ModifyBase;
		using Base = SetTextPopupDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
