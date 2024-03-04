#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UILayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_disableMenu
		#define GEODE_STATICS_disableMenu
		GEODE_AS_STATIC_FUNCTION(disableMenu) 
	#endif

	#ifndef GEODE_STATICS_editorPlaytest
		#define GEODE_STATICS_editorPlaytest
		GEODE_AS_STATIC_FUNCTION(editorPlaytest) 
	#endif

	#ifndef GEODE_STATICS_enableEditorMode
		#define GEODE_STATICS_enableEditorMode
		GEODE_AS_STATIC_FUNCTION(enableEditorMode) 
	#endif

	#ifndef GEODE_STATICS_enableMenu
		#define GEODE_STATICS_enableMenu
		GEODE_AS_STATIC_FUNCTION(enableMenu) 
	#endif

	#ifndef GEODE_STATICS_handleKeypress
		#define GEODE_STATICS_handleKeypress
		GEODE_AS_STATIC_FUNCTION(handleKeypress) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isJumpButtonPressed
		#define GEODE_STATICS_isJumpButtonPressed
		GEODE_AS_STATIC_FUNCTION(isJumpButtonPressed) 
	#endif

	#ifndef GEODE_STATICS_onCheck
		#define GEODE_STATICS_onCheck
		GEODE_AS_STATIC_FUNCTION(onCheck) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCheck
		#define GEODE_STATICS_onDeleteCheck
		GEODE_AS_STATIC_FUNCTION(onDeleteCheck) 
	#endif

	#ifndef GEODE_STATICS_onPause
		#define GEODE_STATICS_onPause
		GEODE_AS_STATIC_FUNCTION(onPause) 
	#endif

	#ifndef GEODE_STATICS_processUINodesTouch
		#define GEODE_STATICS_processUINodesTouch
		GEODE_AS_STATIC_FUNCTION(processUINodesTouch) 
	#endif

	#ifndef GEODE_STATICS_processUINodeTouch
		#define GEODE_STATICS_processUINodeTouch
		GEODE_AS_STATIC_FUNCTION(processUINodeTouch) 
	#endif

	#ifndef GEODE_STATICS_refreshDpad
		#define GEODE_STATICS_refreshDpad
		GEODE_AS_STATIC_FUNCTION(refreshDpad) 
	#endif

	#ifndef GEODE_STATICS_resetAllButtons
		#define GEODE_STATICS_resetAllButtons
		GEODE_AS_STATIC_FUNCTION(resetAllButtons) 
	#endif

	#ifndef GEODE_STATICS_resetUINodeState
		#define GEODE_STATICS_resetUINodeState
		GEODE_AS_STATIC_FUNCTION(resetUINodeState) 
	#endif

	#ifndef GEODE_STATICS_toggleCheckpointsMenu
		#define GEODE_STATICS_toggleCheckpointsMenu
		GEODE_AS_STATIC_FUNCTION(toggleCheckpointsMenu) 
	#endif

	#ifndef GEODE_STATICS_toggleMenuVisibility
		#define GEODE_STATICS_toggleMenuVisibility
		GEODE_AS_STATIC_FUNCTION(toggleMenuVisibility) 
	#endif

	#ifndef GEODE_STATICS_togglePlatformerMode
		#define GEODE_STATICS_togglePlatformerMode
		GEODE_AS_STATIC_FUNCTION(togglePlatformerMode) 
	#endif

	#ifndef GEODE_STATICS_updateDualMode
		#define GEODE_STATICS_updateDualMode
		GEODE_AS_STATIC_FUNCTION(updateDualMode) 
	#endif

	#ifndef GEODE_STATICS_updateUINodeVisibility
		#define GEODE_STATICS_updateUINodeVisibility
		GEODE_AS_STATIC_FUNCTION(updateUINodeVisibility) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
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

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UILayer> : ModifyBase<ModifyDerive<Der, UILayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UILayer>>;
		using ModifyBase<ModifyDerive<Der, UILayer>>::ModifyBase;
		using Base = UILayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf420, Membercall, UILayer, enableEditorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf480, Membercall, UILayer, handleKeypress, cocos2d::enumKeyCodes, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bec10, Membercall, UILayer, init, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bfa10, Membercall, UILayer, onCheck, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bfa50, Membercall, UILayer, onDeleteCheck, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf9a0, Membercall, UILayer, onPause, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bfad0, Membercall, UILayer, resetAllButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf390, Membercall, UILayer, resetUINodeState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bfa80, Membercall, UILayer, toggleMenuVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c0de0, Thiscall, UILayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf970, Thiscall, UILayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf930, Thiscall, UILayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bf950, Thiscall, UILayer, keyUp, cocos2d::enumKeyCodes)
		}
	};
}
