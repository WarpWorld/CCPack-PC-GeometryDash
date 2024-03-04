#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectSettingLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_frameForItem
		#define GEODE_STATICS_frameForItem
		GEODE_AS_STATIC_FUNCTION(frameForItem) 
	#endif

	#ifndef GEODE_STATICS_frameForValue
		#define GEODE_STATICS_frameForValue
		GEODE_AS_STATIC_FUNCTION(frameForValue) 
	#endif

	#ifndef GEODE_STATICS_getSelectedFrame
		#define GEODE_STATICS_getSelectedFrame
		GEODE_AS_STATIC_FUNCTION(getSelectedFrame) 
	#endif

	#ifndef GEODE_STATICS_getSelectedValue
		#define GEODE_STATICS_getSelectedValue
		GEODE_AS_STATIC_FUNCTION(getSelectedValue) 
	#endif

	#ifndef GEODE_STATICS_idxToValue
		#define GEODE_STATICS_idxToValue
		GEODE_AS_STATIC_FUNCTION(idxToValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_valueToIdx
		#define GEODE_STATICS_valueToIdx
		GEODE_AS_STATIC_FUNCTION(valueToIdx) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectSettingLayer> : ModifyBase<ModifyDerive<Der, SelectSettingLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectSettingLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectSettingLayer>>::ModifyBase;
		using Base = SelectSettingLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270c10, Optcall, SelectSettingLayer, create, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271380, Membercall, SelectSettingLayer, frameForItem, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270cc0, Membercall, SelectSettingLayer, init, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2715d0, Membercall, SelectSettingLayer, onSelect, cocos2d::CCObject*)
		}
	};
}
