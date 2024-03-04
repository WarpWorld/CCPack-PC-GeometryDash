#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCellIdx
		#define GEODE_STATICS_getSelectedCellIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_STATICS_shouldSnapToSelected
		#define GEODE_STATICS_shouldSnapToSelected
		GEODE_AS_STATIC_FUNCTION(shouldSnapToSelected) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableViewCellDelegate> : ModifyBase<ModifyDerive<Der, TableViewCellDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewCellDelegate>>;
		using ModifyBase<ModifyDerive<Der, TableViewCellDelegate>>::ModifyBase;
		using Base = TableViewCellDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
