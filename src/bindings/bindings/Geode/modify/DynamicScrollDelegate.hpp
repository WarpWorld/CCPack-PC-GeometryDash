#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DynamicScrollDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, DynamicScrollDelegate> : ModifyBase<ModifyDerive<Der, DynamicScrollDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DynamicScrollDelegate>>;
		using ModifyBase<ModifyDerive<Der, DynamicScrollDelegate>>::ModifyBase;
		using Base = DynamicScrollDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
