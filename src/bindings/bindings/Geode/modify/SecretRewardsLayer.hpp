#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretRewardsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createSecondaryLayer
		#define GEODE_STATICS_createSecondaryLayer
		GEODE_AS_STATIC_FUNCTION(createSecondaryLayer) 
	#endif

	#ifndef GEODE_STATICS_generateChestItems
		#define GEODE_STATICS_generateChestItems
		GEODE_AS_STATIC_FUNCTION(generateChestItems) 
	#endif

	#ifndef GEODE_STATICS_getPageColor
		#define GEODE_STATICS_getPageColor
		GEODE_AS_STATIC_FUNCTION(getPageColor) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_moveToMainLayer
		#define GEODE_STATICS_moveToMainLayer
		GEODE_AS_STATIC_FUNCTION(moveToMainLayer) 
	#endif

	#ifndef GEODE_STATICS_moveToSecondaryLayer
		#define GEODE_STATICS_moveToSecondaryLayer
		GEODE_AS_STATIC_FUNCTION(moveToSecondaryLayer) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onChestType
		#define GEODE_STATICS_onChestType
		GEODE_AS_STATIC_FUNCTION(onChestType) 
	#endif

	#ifndef GEODE_STATICS_onSelectItem
		#define GEODE_STATICS_onSelectItem
		GEODE_AS_STATIC_FUNCTION(onSelectItem) 
	#endif

	#ifndef GEODE_STATICS_onShop
		#define GEODE_STATICS_onShop
		GEODE_AS_STATIC_FUNCTION(onShop) 
	#endif

	#ifndef GEODE_STATICS_onSpecialItem
		#define GEODE_STATICS_onSpecialItem
		GEODE_AS_STATIC_FUNCTION(onSpecialItem) 
	#endif

	#ifndef GEODE_STATICS_onSwitchPage
		#define GEODE_STATICS_onSwitchPage
		GEODE_AS_STATIC_FUNCTION(onSwitchPage) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_showDialog01
		#define GEODE_STATICS_showDialog01
		GEODE_AS_STATIC_FUNCTION(showDialog01) 
	#endif

	#ifndef GEODE_STATICS_showDialog03
		#define GEODE_STATICS_showDialog03
		GEODE_AS_STATIC_FUNCTION(showDialog03) 
	#endif

	#ifndef GEODE_STATICS_showDialogDiamond
		#define GEODE_STATICS_showDialogDiamond
		GEODE_AS_STATIC_FUNCTION(showDialogDiamond) 
	#endif

	#ifndef GEODE_STATICS_showDialogMechanic
		#define GEODE_STATICS_showDialogMechanic
		GEODE_AS_STATIC_FUNCTION(showDialogMechanic) 
	#endif

	#ifndef GEODE_STATICS_showLockedChest
		#define GEODE_STATICS_showLockedChest
		GEODE_AS_STATIC_FUNCTION(showLockedChest) 
	#endif

	#ifndef GEODE_STATICS_showShop
		#define GEODE_STATICS_showShop
		GEODE_AS_STATIC_FUNCTION(showShop) 
	#endif

	#ifndef GEODE_STATICS_switchToOpenedState
		#define GEODE_STATICS_switchToOpenedState
		GEODE_AS_STATIC_FUNCTION(switchToOpenedState) 
	#endif

	#ifndef GEODE_STATICS_updateBackButton
		#define GEODE_STATICS_updateBackButton
		GEODE_AS_STATIC_FUNCTION(updateBackButton) 
	#endif

	#ifndef GEODE_STATICS_updateUnlockedLabel
		#define GEODE_STATICS_updateUnlockedLabel
		GEODE_AS_STATIC_FUNCTION(updateUnlockedLabel) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerMoved
		#define GEODE_STATICS_scrollLayerMoved
		GEODE_AS_STATIC_FUNCTION(scrollLayerMoved) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretRewardsLayer> : ModifyBase<ModifyDerive<Der, SecretRewardsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretRewardsLayer>>;
		using ModifyBase<ModifyDerive<Der, SecretRewardsLayer>>::ModifyBase;
		using Base = SecretRewardsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fb610, Optcall, SecretRewardsLayer, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd430, Membercall, SecretRewardsLayer, createSecondaryLayer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd8a0, Membercall, SecretRewardsLayer, generateChestItems, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fb6b0, Membercall, SecretRewardsLayer, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fe220, Membercall, SecretRewardsLayer, onSelectItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fe580, Membercall, SecretRewardsLayer, onShop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fe830, Membercall, SecretRewardsLayer, onSpecialItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fee50, Membercall, SecretRewardsLayer, showDialog01, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ffb50, Membercall, SecretRewardsLayer, showDialog03, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x300f10, Membercall, SecretRewardsLayer, showDialogDiamond, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x300560, Membercall, SecretRewardsLayer, showDialogMechanic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2feb00, Membercall, SecretRewardsLayer, switchToOpenedState, CCMenuItemSpriteExtra*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2febb0, Membercall, SecretRewardsLayer, updateUnlockedLabel, )
		}
	};
}
