#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJWriteMessagePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_closeMessagePopup
		#define GEODE_STATICS_closeMessagePopup
		GEODE_AS_STATIC_FUNCTION(closeMessagePopup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearBody
		#define GEODE_STATICS_onClearBody
		GEODE_AS_STATIC_FUNCTION(onClearBody) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSend
		#define GEODE_STATICS_onSend
		GEODE_AS_STATIC_FUNCTION(onSend) 
	#endif

	#ifndef GEODE_STATICS_updateBody
		#define GEODE_STATICS_updateBody
		GEODE_AS_STATIC_FUNCTION(updateBody) 
	#endif

	#ifndef GEODE_STATICS_updateCharCountLabel
		#define GEODE_STATICS_updateCharCountLabel
		GEODE_AS_STATIC_FUNCTION(updateCharCountLabel) 
	#endif

	#ifndef GEODE_STATICS_updateSubject
		#define GEODE_STATICS_updateSubject
		GEODE_AS_STATIC_FUNCTION(updateSubject) 
	#endif

	#ifndef GEODE_STATICS_updateText
		#define GEODE_STATICS_updateText
		GEODE_AS_STATIC_FUNCTION(updateText) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_uploadMessageFinished
		#define GEODE_STATICS_uploadMessageFinished
		GEODE_AS_STATIC_FUNCTION(uploadMessageFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadMessageFailed
		#define GEODE_STATICS_uploadMessageFailed
		GEODE_AS_STATIC_FUNCTION(uploadMessageFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJWriteMessagePopup> : ModifyBase<ModifyDerive<Der, GJWriteMessagePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJWriteMessagePopup>>;
		using ModifyBase<ModifyDerive<Der, GJWriteMessagePopup>>::ModifyBase;
		using Base = GJWriteMessagePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20df90, Optcall, GJWriteMessagePopup, create, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e040, Membercall, GJWriteMessagePopup, init, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20f0e0, Membercall, GJWriteMessagePopup, updateBody, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20f340, Membercall, GJWriteMessagePopup, updateCharCountLabel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20f060, Membercall, GJWriteMessagePopup, updateSubject, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20f160, Membercall, GJWriteMessagePopup, updateText, gd::string, int)
		}
	};
}
