#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCIndexPath.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_CCIndexPathWithSectionRow
		#define GEODE_STATICS_CCIndexPathWithSectionRow
		GEODE_AS_STATIC_FUNCTION(CCIndexPathWithSectionRow) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCIndexPath> : ModifyBase<ModifyDerive<Der, CCIndexPath>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCIndexPath>>;
		using ModifyBase<ModifyDerive<Der, CCIndexPath>>::ModifyBase;
		using Base = CCIndexPath;
        using Derived = Der;
		void apply() override {

		}
	};
}
