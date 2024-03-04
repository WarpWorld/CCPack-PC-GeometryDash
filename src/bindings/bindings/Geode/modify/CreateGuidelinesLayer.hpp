#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreateGuidelinesLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_doClearGuidelines
		#define GEODE_STATICS_doClearGuidelines
		GEODE_AS_STATIC_FUNCTION(doClearGuidelines) 
	#endif

	#ifndef GEODE_STATICS_getMergedRecordString
		#define GEODE_STATICS_getMergedRecordString
		GEODE_AS_STATIC_FUNCTION(getMergedRecordString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearGuidelines
		#define GEODE_STATICS_onClearGuidelines
		GEODE_AS_STATIC_FUNCTION(onClearGuidelines) 
	#endif

	#ifndef GEODE_STATICS_onStop
		#define GEODE_STATICS_onStop
		GEODE_AS_STATIC_FUNCTION(onStop) 
	#endif

	#ifndef GEODE_STATICS_toggleItems
		#define GEODE_STATICS_toggleItems
		GEODE_AS_STATIC_FUNCTION(toggleItems) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

	#ifndef GEODE_STATICS_playMusic
		#define GEODE_STATICS_playMusic
		GEODE_AS_STATIC_FUNCTION(playMusic) 
	#endif

	#ifndef GEODE_STATICS_registerTouch
		#define GEODE_STATICS_registerTouch
		GEODE_AS_STATIC_FUNCTION(registerTouch) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onRecord
		#define GEODE_STATICS_onRecord
		GEODE_AS_STATIC_FUNCTION(onRecord) 
	#endif

	#ifndef GEODE_STATICS_recordingDidStop
		#define GEODE_STATICS_recordingDidStop
		GEODE_AS_STATIC_FUNCTION(recordingDidStop) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreateGuidelinesLayer> : ModifyBase<ModifyDerive<Der, CreateGuidelinesLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreateGuidelinesLayer>>;
		using ModifyBase<ModifyDerive<Der, CreateGuidelinesLayer>>::ModifyBase;
		using Base = CreateGuidelinesLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
