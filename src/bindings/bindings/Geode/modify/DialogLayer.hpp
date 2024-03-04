#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DialogLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addToMainScene
		#define GEODE_STATICS_addToMainScene
		GEODE_AS_STATIC_FUNCTION(addToMainScene) 
	#endif

	#ifndef GEODE_STATICS_animateIn
		#define GEODE_STATICS_animateIn
		GEODE_AS_STATIC_FUNCTION(animateIn) 
	#endif

	#ifndef GEODE_STATICS_animateInDialog
		#define GEODE_STATICS_animateInDialog
		GEODE_AS_STATIC_FUNCTION(animateInDialog) 
	#endif

	#ifndef GEODE_STATICS_animateInRandomSide
		#define GEODE_STATICS_animateInRandomSide
		GEODE_AS_STATIC_FUNCTION(animateInRandomSide) 
	#endif

	#ifndef GEODE_STATICS_createDialogLayer
		#define GEODE_STATICS_createDialogLayer
		GEODE_AS_STATIC_FUNCTION(createDialogLayer) 
	#endif

	#ifndef GEODE_STATICS_createWithObjects
		#define GEODE_STATICS_createWithObjects
		GEODE_AS_STATIC_FUNCTION(createWithObjects) 
	#endif

	#ifndef GEODE_STATICS_displayDialogObject
		#define GEODE_STATICS_displayDialogObject
		GEODE_AS_STATIC_FUNCTION(displayDialogObject) 
	#endif

	#ifndef GEODE_STATICS_displayNextObject
		#define GEODE_STATICS_displayNextObject
		GEODE_AS_STATIC_FUNCTION(displayNextObject) 
	#endif

	#ifndef GEODE_STATICS_finishCurrentAnimation
		#define GEODE_STATICS_finishCurrentAnimation
		GEODE_AS_STATIC_FUNCTION(finishCurrentAnimation) 
	#endif

	#ifndef GEODE_STATICS_handleDialogTap
		#define GEODE_STATICS_handleDialogTap
		GEODE_AS_STATIC_FUNCTION(handleDialogTap) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateChatPlacement
		#define GEODE_STATICS_updateChatPlacement
		GEODE_AS_STATIC_FUNCTION(updateChatPlacement) 
	#endif

	#ifndef GEODE_STATICS_updateNavButtonFrame
		#define GEODE_STATICS_updateNavButtonFrame
		GEODE_AS_STATIC_FUNCTION(updateNavButtonFrame) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_fadeInTextFinished
		#define GEODE_STATICS_fadeInTextFinished
		GEODE_AS_STATIC_FUNCTION(fadeInTextFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DialogLayer> : ModifyBase<ModifyDerive<Der, DialogLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DialogLayer>>;
		using ModifyBase<ModifyDerive<Der, DialogLayer>>::ModifyBase;
		using Base = DialogLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b4c0, Membercall, DialogLayer, animateIn, DialogAnimationType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9a850, Optcall, DialogLayer, createDialogLayer, DialogObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9a900, Membercall, DialogLayer, init, DialogObject*, cocos2d::CCArray*, int)
		}
	};
}
