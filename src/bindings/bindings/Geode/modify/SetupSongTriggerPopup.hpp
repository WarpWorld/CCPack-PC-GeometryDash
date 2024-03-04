#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSongTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_onResetSongTime
		#define GEODE_STATICS_onResetSongTime
		GEODE_AS_STATIC_FUNCTION(onResetSongTime) 
	#endif

	#ifndef GEODE_STATICS_onSavePlaybackPos
		#define GEODE_STATICS_onSavePlaybackPos
		GEODE_AS_STATIC_FUNCTION(onSavePlaybackPos) 
	#endif

	#ifndef GEODE_STATICS_updateApplyPrepare
		#define GEODE_STATICS_updateApplyPrepare
		GEODE_AS_STATIC_FUNCTION(updateApplyPrepare) 
	#endif

	#ifndef GEODE_STATICS_updateLength
		#define GEODE_STATICS_updateLength
		GEODE_AS_STATIC_FUNCTION(updateLength) 
	#endif

	#ifndef GEODE_STATICS_updateSongTimeSlider
		#define GEODE_STATICS_updateSongTimeSlider
		GEODE_AS_STATIC_FUNCTION(updateSongTimeSlider) 
	#endif

	#ifndef GEODE_STATICS_pageChanged
		#define GEODE_STATICS_pageChanged
		GEODE_AS_STATIC_FUNCTION(pageChanged) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSongTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupSongTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSongTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSongTriggerPopup>>::ModifyBase;
		using Base = SetupSongTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35d280, Optcall, SetupSongTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35d330, Membercall, SetupSongTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
