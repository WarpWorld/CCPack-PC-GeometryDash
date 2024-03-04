#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCTextInputNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addTextArea
		#define GEODE_STATICS_addTextArea
		GEODE_AS_STATIC_FUNCTION(addTextArea) 
	#endif

	#ifndef GEODE_STATICS_forceOffset
		#define GEODE_STATICS_forceOffset
		GEODE_AS_STATIC_FUNCTION(forceOffset) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_refreshLabel
		#define GEODE_STATICS_refreshLabel
		GEODE_AS_STATIC_FUNCTION(refreshLabel) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_updateBlinkLabel
		#define GEODE_STATICS_updateBlinkLabel
		GEODE_AS_STATIC_FUNCTION(updateBlinkLabel) 
	#endif

	#ifndef GEODE_STATICS_updateBlinkLabelToChar
		#define GEODE_STATICS_updateBlinkLabelToChar
		GEODE_AS_STATIC_FUNCTION(updateBlinkLabelToChar) 
	#endif

	#ifndef GEODE_STATICS_updateCursorPosition
		#define GEODE_STATICS_updateCursorPosition
		GEODE_AS_STATIC_FUNCTION(updateCursorPosition) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultFontValues
		#define GEODE_STATICS_updateDefaultFontValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultFontValues) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_onClickTrackNode
		#define GEODE_STATICS_onClickTrackNode
		GEODE_AS_STATIC_FUNCTION(onClickTrackNode) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillShow
		#define GEODE_STATICS_keyboardWillShow
		GEODE_AS_STATIC_FUNCTION(keyboardWillShow) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillHide
		#define GEODE_STATICS_keyboardWillHide
		GEODE_AS_STATIC_FUNCTION(keyboardWillHide) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldInsertText
		#define GEODE_STATICS_onTextFieldInsertText
		GEODE_AS_STATIC_FUNCTION(onTextFieldInsertText) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldAttachWithIME
		#define GEODE_STATICS_onTextFieldAttachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldAttachWithIME) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldDetachWithIME
		#define GEODE_STATICS_onTextFieldDetachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldDetachWithIME) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCTextInputNode> : ModifyBase<ModifyDerive<Der, CCTextInputNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCTextInputNode>>;
		using ModifyBase<ModifyDerive<Der, CCTextInputNode>>::ModifyBase;
		using Base = CCTextInputNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e440, Optcall, CCTextInputNode, create, float, float, char const*, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e6d0, Membercall, CCTextInputNode, addTextArea, TextArea*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e500, Membercall, CCTextInputNode, init, float, float, char const*, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ede0, Membercall, CCTextInputNode, refreshLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e9a0, Membercall, CCTextInputNode, setString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ff50, Membercall, CCTextInputNode, updateCursorPosition, cocos2d::CCPoint, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e7a0, Membercall, CCTextInputNode, updateDefaultFontValues, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2eac0, Membercall, CCTextInputNode, updateLabel, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e930, Thiscall, CCTextInputNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x304f0, Thiscall, CCTextInputNode, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306d0, Thiscall, CCTextInputNode, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f630, Thiscall, CCTextInputNode, textChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f600, Thiscall, CCTextInputNode, onClickTrackNode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f4d0, Thiscall, CCTextInputNode, keyboardWillShow, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f5a0, Thiscall, CCTextInputNode, keyboardWillHide, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f6b0, Thiscall, CCTextInputNode, onTextFieldInsertText, cocos2d::CCTextFieldTTF*, char const*, int, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fa30, Thiscall, CCTextInputNode, onTextFieldAttachWithIME, cocos2d::CCTextFieldTTF*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd50, Thiscall, CCTextInputNode, onTextFieldDetachWithIME, cocos2d::CCTextFieldTTF*)
		}
	};
}
