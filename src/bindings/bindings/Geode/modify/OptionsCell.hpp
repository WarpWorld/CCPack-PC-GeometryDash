#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OptionsCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_onToggleOption
		#define GEODE_STATICS_onToggleOption
		GEODE_AS_STATIC_FUNCTION(onToggleOption) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OptionsCell> : ModifyBase<ModifyDerive<Der, OptionsCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OptionsCell>>;
		using ModifyBase<ModifyDerive<Der, OptionsCell>>::ModifyBase;
		using Base = OptionsCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83a50, Membercall, OptionsCell, loadFromObject, OptionsObject*)
		}
	};
}
