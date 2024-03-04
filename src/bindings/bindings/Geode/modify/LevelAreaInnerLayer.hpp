#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelAreaInnerLayer.hpp>
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

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onDoor
		#define GEODE_STATICS_onDoor
		GEODE_AS_STATIC_FUNCTION(onDoor) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNextFloor
		#define GEODE_STATICS_onNextFloor
		GEODE_AS_STATIC_FUNCTION(onNextFloor) 
	#endif

	#ifndef GEODE_STATICS_playStep1
		#define GEODE_STATICS_playStep1
		GEODE_AS_STATIC_FUNCTION(playStep1) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_showFloor1CompleteDialog
		#define GEODE_STATICS_showFloor1CompleteDialog
		GEODE_AS_STATIC_FUNCTION(showFloor1CompleteDialog) 
	#endif

	#ifndef GEODE_STATICS_tryResumeTowerMusic
		#define GEODE_STATICS_tryResumeTowerMusic
		GEODE_AS_STATIC_FUNCTION(tryResumeTowerMusic) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelAreaInnerLayer> : ModifyBase<ModifyDerive<Der, LevelAreaInnerLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelAreaInnerLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelAreaInnerLayer>>::ModifyBase;
		using Base = LevelAreaInnerLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231140, Optcall, LevelAreaInnerLayer, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2311e0, Membercall, LevelAreaInnerLayer, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x232940, Membercall, LevelAreaInnerLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x232720, Membercall, LevelAreaInnerLayer, onDoor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x232c30, Membercall, LevelAreaInnerLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231ef0, Membercall, LevelAreaInnerLayer, onNextFloor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x232850, Membercall, LevelAreaInnerLayer, playStep1, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231f40, Membercall, LevelAreaInnerLayer, showFloor1CompleteDialog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2326a0, Membercall, LevelAreaInnerLayer, tryResumeTowerMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2329a0, Thiscall, LevelAreaInnerLayer, keyBackClicked, )
		}
	};
}
