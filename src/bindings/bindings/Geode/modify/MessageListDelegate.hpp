#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MessageListDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, MessageListDelegate> : ModifyBase<ModifyDerive<Der, MessageListDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MessageListDelegate>>;
		using ModifyBase<ModifyDerive<Der, MessageListDelegate>>::ModifyBase;
		using Base = MessageListDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
