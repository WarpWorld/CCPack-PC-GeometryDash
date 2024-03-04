#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewDataSource.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, TableViewDataSource> : ModifyBase<ModifyDerive<Der, TableViewDataSource>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewDataSource>>;
		using ModifyBase<ModifyDerive<Der, TableViewDataSource>>::ModifyBase;
		using Base = TableViewDataSource;
        using Derived = Der;
		void apply() override {

		}
	};
}
