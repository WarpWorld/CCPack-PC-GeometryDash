#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NumberInputDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, NumberInputDelegate> : ModifyBase<ModifyDerive<Der, NumberInputDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NumberInputDelegate>>;
		using ModifyBase<ModifyDerive<Der, NumberInputDelegate>>::ModifyBase;
		using Base = NumberInputDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
