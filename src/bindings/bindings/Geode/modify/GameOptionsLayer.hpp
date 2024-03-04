#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameOptionsLayer.hpp>
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

	#ifndef GEODE_STATICS_onPracticeMusicSync
		#define GEODE_STATICS_onPracticeMusicSync
		GEODE_AS_STATIC_FUNCTION(onPracticeMusicSync) 
	#endif

	#ifndef GEODE_STATICS_onUIOptions
		#define GEODE_STATICS_onUIOptions
		GEODE_AS_STATIC_FUNCTION(onUIOptions) 
	#endif

	#ifndef GEODE_STATICS_showPracticeMusicSyncUnlockInfo
		#define GEODE_STATICS_showPracticeMusicSyncUnlockInfo
		GEODE_AS_STATIC_FUNCTION(showPracticeMusicSyncUnlockInfo) 
	#endif

	#ifndef GEODE_STATICS_setupOptions
		#define GEODE_STATICS_setupOptions
		GEODE_AS_STATIC_FUNCTION(setupOptions) 
	#endif

	#ifndef GEODE_STATICS_didToggle
		#define GEODE_STATICS_didToggle
		GEODE_AS_STATIC_FUNCTION(didToggle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameOptionsLayer> : ModifyBase<ModifyDerive<Der, GameOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, GameOptionsLayer>>::ModifyBase;
		using Base = GameOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213930, Membercall, GameOptionsLayer, onPracticeMusicSync, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213620, Membercall, GameOptionsLayer, showPracticeMusicSyncUnlockInfo, )
		}
	};
}
