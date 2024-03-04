#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCMenuItemToggler.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activeItem
		#define GEODE_STATICS_activeItem
		GEODE_AS_STATIC_FUNCTION(activeItem) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_normalTouch
		#define GEODE_STATICS_normalTouch
		GEODE_AS_STATIC_FUNCTION(normalTouch) 
	#endif

	#ifndef GEODE_STATICS_selectedTouch
		#define GEODE_STATICS_selectedTouch
		GEODE_AS_STATIC_FUNCTION(selectedTouch) 
	#endif

	#ifndef GEODE_STATICS_toggle
		#define GEODE_STATICS_toggle
		GEODE_AS_STATIC_FUNCTION(toggle) 
	#endif

	#ifndef GEODE_STATICS_activate
		#define GEODE_STATICS_activate
		GEODE_AS_STATIC_FUNCTION(activate) 
	#endif

	#ifndef GEODE_STATICS_selected
		#define GEODE_STATICS_selected
		GEODE_AS_STATIC_FUNCTION(selected) 
	#endif

	#ifndef GEODE_STATICS_unselected
		#define GEODE_STATICS_unselected
		GEODE_AS_STATIC_FUNCTION(unselected) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCMenuItemToggler> : ModifyBase<ModifyDerive<Der, CCMenuItemToggler>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCMenuItemToggler>>;
		using ModifyBase<ModifyDerive<Der, CCMenuItemToggler>>::ModifyBase;
		using Base = CCMenuItemToggler;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25e50, Optcall, CCMenuItemToggler, create, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25f30, Membercall, CCMenuItemToggler, init, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261e0, Membercall, CCMenuItemToggler, toggle, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26100, Thiscall, CCMenuItemToggler, activate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x260d0, Thiscall, CCMenuItemToggler, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26130, Thiscall, CCMenuItemToggler, unselected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26160, Thiscall, CCMenuItemToggler, setEnabled, bool)
		}
	};
}
