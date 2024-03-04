#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetGroupIDLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addGroupID
		#define GEODE_STATICS_addGroupID
		GEODE_AS_STATIC_FUNCTION(addGroupID) 
	#endif

	#ifndef GEODE_STATICS_callRemoveFromGroup
		#define GEODE_STATICS_callRemoveFromGroup
		GEODE_AS_STATIC_FUNCTION(callRemoveFromGroup) 
	#endif

	#ifndef GEODE_STATICS_createTextInput
		#define GEODE_STATICS_createTextInput
		GEODE_AS_STATIC_FUNCTION(createTextInput) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddGroup
		#define GEODE_STATICS_onAddGroup
		GEODE_AS_STATIC_FUNCTION(onAddGroup) 
	#endif

	#ifndef GEODE_STATICS_onAddGroupParent
		#define GEODE_STATICS_onAddGroupParent
		GEODE_AS_STATIC_FUNCTION(onAddGroupParent) 
	#endif

	#ifndef GEODE_STATICS_onAnim
		#define GEODE_STATICS_onAnim
		GEODE_AS_STATIC_FUNCTION(onAnim) 
	#endif

	#ifndef GEODE_STATICS_onArrow
		#define GEODE_STATICS_onArrow
		GEODE_AS_STATIC_FUNCTION(onArrow) 
	#endif

	#ifndef GEODE_STATICS_onArrowLeft
		#define GEODE_STATICS_onArrowLeft
		GEODE_AS_STATIC_FUNCTION(onArrowLeft) 
	#endif

	#ifndef GEODE_STATICS_onArrowRight
		#define GEODE_STATICS_onArrowRight
		GEODE_AS_STATIC_FUNCTION(onArrowRight) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onExtra
		#define GEODE_STATICS_onExtra
		GEODE_AS_STATIC_FUNCTION(onExtra) 
	#endif

	#ifndef GEODE_STATICS_onExtra2
		#define GEODE_STATICS_onExtra2
		GEODE_AS_STATIC_FUNCTION(onExtra2) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeEditorLayer1
		#define GEODE_STATICS_onNextFreeEditorLayer1
		GEODE_AS_STATIC_FUNCTION(onNextFreeEditorLayer1) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeEditorLayer2
		#define GEODE_STATICS_onNextFreeEditorLayer2
		GEODE_AS_STATIC_FUNCTION(onNextFreeEditorLayer2) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeOrderChannel
		#define GEODE_STATICS_onNextFreeOrderChannel
		GEODE_AS_STATIC_FUNCTION(onNextFreeOrderChannel) 
	#endif

	#ifndef GEODE_STATICS_onNextGroupID1
		#define GEODE_STATICS_onNextGroupID1
		GEODE_AS_STATIC_FUNCTION(onNextGroupID1) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFromGroup
		#define GEODE_STATICS_onRemoveFromGroup
		GEODE_AS_STATIC_FUNCTION(onRemoveFromGroup) 
	#endif

	#ifndef GEODE_STATICS_onSmoothEase
		#define GEODE_STATICS_onSmoothEase
		GEODE_AS_STATIC_FUNCTION(onSmoothEase) 
	#endif

	#ifndef GEODE_STATICS_onToggleGuide
		#define GEODE_STATICS_onToggleGuide
		GEODE_AS_STATIC_FUNCTION(onToggleGuide) 
	#endif

	#ifndef GEODE_STATICS_onToggleSelectedOrder
		#define GEODE_STATICS_onToggleSelectedOrder
		GEODE_AS_STATIC_FUNCTION(onToggleSelectedOrder) 
	#endif

	#ifndef GEODE_STATICS_onZLayer
		#define GEODE_STATICS_onZLayer
		GEODE_AS_STATIC_FUNCTION(onZLayer) 
	#endif

	#ifndef GEODE_STATICS_onZLayerShift
		#define GEODE_STATICS_onZLayerShift
		GEODE_AS_STATIC_FUNCTION(onZLayerShift) 
	#endif

	#ifndef GEODE_STATICS_removeGroupID
		#define GEODE_STATICS_removeGroupID
		GEODE_AS_STATIC_FUNCTION(removeGroupID) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel
		#define GEODE_STATICS_updateEditorLabel
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel2
		#define GEODE_STATICS_updateEditorLabel2
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel2) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLayerID
		#define GEODE_STATICS_updateEditorLayerID
		GEODE_AS_STATIC_FUNCTION(updateEditorLayerID) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLayerID2
		#define GEODE_STATICS_updateEditorLayerID2
		GEODE_AS_STATIC_FUNCTION(updateEditorLayerID2) 
	#endif

	#ifndef GEODE_STATICS_updateEditorOrder
		#define GEODE_STATICS_updateEditorOrder
		GEODE_AS_STATIC_FUNCTION(updateEditorOrder) 
	#endif

	#ifndef GEODE_STATICS_updateEditorOrderLabel
		#define GEODE_STATICS_updateEditorOrderLabel
		GEODE_AS_STATIC_FUNCTION(updateEditorOrderLabel) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDButtons
		#define GEODE_STATICS_updateGroupIDButtons
		GEODE_AS_STATIC_FUNCTION(updateGroupIDButtons) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDLabel
		#define GEODE_STATICS_updateGroupIDLabel
		GEODE_AS_STATIC_FUNCTION(updateGroupIDLabel) 
	#endif

	#ifndef GEODE_STATICS_updateOrderChannel
		#define GEODE_STATICS_updateOrderChannel
		GEODE_AS_STATIC_FUNCTION(updateOrderChannel) 
	#endif

	#ifndef GEODE_STATICS_updateOrderChannelLabel
		#define GEODE_STATICS_updateOrderChannelLabel
		GEODE_AS_STATIC_FUNCTION(updateOrderChannelLabel) 
	#endif

	#ifndef GEODE_STATICS_updateZLayerButtons
		#define GEODE_STATICS_updateZLayerButtons
		GEODE_AS_STATIC_FUNCTION(updateZLayerButtons) 
	#endif

	#ifndef GEODE_STATICS_updateZOrder
		#define GEODE_STATICS_updateZOrder
		GEODE_AS_STATIC_FUNCTION(updateZOrder) 
	#endif

	#ifndef GEODE_STATICS_updateZOrderLabel
		#define GEODE_STATICS_updateZOrderLabel
		GEODE_AS_STATIC_FUNCTION(updateZOrderLabel) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetGroupIDLayer> : ModifyBase<ModifyDerive<Der, SetGroupIDLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetGroupIDLayer>>;
		using ModifyBase<ModifyDerive<Der, SetGroupIDLayer>>::ModifyBase;
		using Base = SetGroupIDLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x310cd0, Optcall, SetGroupIDLayer, create, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314320, Membercall, SetGroupIDLayer, addGroupID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x312b40, Membercall, SetGroupIDLayer, createTextInput, cocos2d::CCPoint, int, int, gd::string, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x313130, Membercall, SetGroupIDLayer, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x310d80, Membercall, SetGroupIDLayer, init, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x313fd0, Membercall, SetGroupIDLayer, onAddGroup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x313fe0, Membercall, SetGroupIDLayer, onAddGroupParent, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x313580, Membercall, SetGroupIDLayer, onAnim, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x312fc0, Membercall, SetGroupIDLayer, onArrow, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x312f80, Membercall, SetGroupIDLayer, onArrowLeft, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x312fa0, Membercall, SetGroupIDLayer, onArrowRight, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314bd0, Membercall, SetGroupIDLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3134a0, Membercall, SetGroupIDLayer, onCopy, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x313530, Membercall, SetGroupIDLayer, onExtra, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x313560, Membercall, SetGroupIDLayer, onExtra2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3142c0, Membercall, SetGroupIDLayer, onNextFreeEditorLayer1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3142f0, Membercall, SetGroupIDLayer, onNextFreeEditorLayer2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314910, Membercall, SetGroupIDLayer, onNextFreeOrderChannel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3137e0, Membercall, SetGroupIDLayer, onNextGroupID1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3134c0, Membercall, SetGroupIDLayer, onPaste, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x313f20, Membercall, SetGroupIDLayer, onRemoveFromGroup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x312aa0, Membercall, SetGroupIDLayer, onToggleGuide, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x312af0, Membercall, SetGroupIDLayer, onToggleSelectedOrder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314050, Membercall, SetGroupIDLayer, onZLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314150, Membercall, SetGroupIDLayer, onZLayerShift, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314610, Membercall, SetGroupIDLayer, updateEditorLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3146a0, Membercall, SetGroupIDLayer, updateEditorLabel2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314200, Membercall, SetGroupIDLayer, updateEditorLayerID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314260, Membercall, SetGroupIDLayer, updateEditorLayerID2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314b40, Membercall, SetGroupIDLayer, updateEditorOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314850, Membercall, SetGroupIDLayer, updateEditorOrderLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x313810, Membercall, SetGroupIDLayer, updateGroupIDButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3147c0, Membercall, SetGroupIDLayer, updateGroupIDLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314ab0, Membercall, SetGroupIDLayer, updateOrderChannel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3148b0, Membercall, SetGroupIDLayer, updateOrderChannelLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314590, Membercall, SetGroupIDLayer, updateZOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x314730, Membercall, SetGroupIDLayer, updateZOrderLabel, )
		}
	};
}
