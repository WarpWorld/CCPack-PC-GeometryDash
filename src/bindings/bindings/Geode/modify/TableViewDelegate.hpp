#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, TableViewDelegate> : ModifyBase<ModifyDerive<Der, TableViewDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewDelegate>>;
		using ModifyBase<ModifyDerive<Der, TableViewDelegate>>::ModifyBase;
		using Base = TableViewDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
