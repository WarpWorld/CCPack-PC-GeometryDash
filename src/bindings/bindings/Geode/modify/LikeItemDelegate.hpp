#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LikeItemDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, LikeItemDelegate> : ModifyBase<ModifyDerive<Der, LikeItemDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LikeItemDelegate>>;
		using ModifyBase<ModifyDerive<Der, LikeItemDelegate>>::ModifyBase;
		using Base = LikeItemDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
