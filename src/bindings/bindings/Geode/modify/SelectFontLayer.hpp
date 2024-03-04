#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectFontLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onChangeFont
		#define GEODE_STATICS_onChangeFont
		GEODE_AS_STATIC_FUNCTION(onChangeFont) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateFontLabel
		#define GEODE_STATICS_updateFontLabel
		GEODE_AS_STATIC_FUNCTION(updateFontLabel) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectFontLayer> : ModifyBase<ModifyDerive<Der, SelectFontLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectFontLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectFontLayer>>::ModifyBase;
		using Base = SelectFontLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x204dd0, Membercall, SelectFontLayer, init, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x205460, Membercall, SelectFontLayer, onChangeFont, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x205320, Membercall, SelectFontLayer, updateFontLabel, )
		}
	};
}
