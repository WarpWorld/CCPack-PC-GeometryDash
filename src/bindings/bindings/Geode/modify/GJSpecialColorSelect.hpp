#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSpecialColorSelect.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getButtonByTag
		#define GEODE_STATICS_getButtonByTag
		GEODE_AS_STATIC_FUNCTION(getButtonByTag) 
	#endif

	#ifndef GEODE_STATICS_highlightSelected
		#define GEODE_STATICS_highlightSelected
		GEODE_AS_STATIC_FUNCTION(highlightSelected) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSelectColor
		#define GEODE_STATICS_onSelectColor
		GEODE_AS_STATIC_FUNCTION(onSelectColor) 
	#endif

	#ifndef GEODE_STATICS_textForColorIdx
		#define GEODE_STATICS_textForColorIdx
		GEODE_AS_STATIC_FUNCTION(textForColorIdx) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSpecialColorSelect> : ModifyBase<ModifyDerive<Der, GJSpecialColorSelect>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSpecialColorSelect>>;
		using ModifyBase<ModifyDerive<Der, GJSpecialColorSelect>>::ModifyBase;
		using Base = GJSpecialColorSelect;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x225bf0, Membercall, GJSpecialColorSelect, init, int, GJSpecialColorSelectDelegate*, ColorSelectType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2265d0, Optcall, GJSpecialColorSelect, textForColorIdx, int)
		}
	};
}
