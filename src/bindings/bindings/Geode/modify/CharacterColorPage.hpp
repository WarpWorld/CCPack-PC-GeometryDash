#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CharacterColorPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activeColorForMode
		#define GEODE_STATICS_activeColorForMode
		GEODE_AS_STATIC_FUNCTION(activeColorForMode) 
	#endif

	#ifndef GEODE_STATICS_checkColor
		#define GEODE_STATICS_checkColor
		GEODE_AS_STATIC_FUNCTION(checkColor) 
	#endif

	#ifndef GEODE_STATICS_colorForIndex
		#define GEODE_STATICS_colorForIndex
		GEODE_AS_STATIC_FUNCTION(colorForIndex) 
	#endif

	#ifndef GEODE_STATICS_createColorMenu
		#define GEODE_STATICS_createColorMenu
		GEODE_AS_STATIC_FUNCTION(createColorMenu) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_offsetForIndex
		#define GEODE_STATICS_offsetForIndex
		GEODE_AS_STATIC_FUNCTION(offsetForIndex) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onPlayerColor
		#define GEODE_STATICS_onPlayerColor
		GEODE_AS_STATIC_FUNCTION(onPlayerColor) 
	#endif

	#ifndef GEODE_STATICS_toggleGlow
		#define GEODE_STATICS_toggleGlow
		GEODE_AS_STATIC_FUNCTION(toggleGlow) 
	#endif

	#ifndef GEODE_STATICS_toggleGlowItems
		#define GEODE_STATICS_toggleGlowItems
		GEODE_AS_STATIC_FUNCTION(toggleGlowItems) 
	#endif

	#ifndef GEODE_STATICS_toggleShip
		#define GEODE_STATICS_toggleShip
		GEODE_AS_STATIC_FUNCTION(toggleShip) 
	#endif

	#ifndef GEODE_STATICS_updateColorMode
		#define GEODE_STATICS_updateColorMode
		GEODE_AS_STATIC_FUNCTION(updateColorMode) 
	#endif

	#ifndef GEODE_STATICS_updateIconColors
		#define GEODE_STATICS_updateIconColors
		GEODE_AS_STATIC_FUNCTION(updateIconColors) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CharacterColorPage> : ModifyBase<ModifyDerive<Der, CharacterColorPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CharacterColorPage>>;
		using ModifyBase<ModifyDerive<Der, CharacterColorPage>>::ModifyBase;
		using Base = CharacterColorPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e9b0, Optcall, CharacterColorPage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f630, Membercall, CharacterColorPage, createColorMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x608a0, Membercall, CharacterColorPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5fc60, Membercall, CharacterColorPage, updateColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x60700, Membercall, CharacterColorPage, updateIconColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ea50, Thiscall, CharacterColorPage, init, )
		}
	};
}
