#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJItemIcon.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_changeToLockedState
		#define GEODE_STATICS_changeToLockedState
		GEODE_AS_STATIC_FUNCTION(changeToLockedState) 
	#endif

	#ifndef GEODE_STATICS_createStoreItem
		#define GEODE_STATICS_createStoreItem
		GEODE_AS_STATIC_FUNCTION(createStoreItem) 
	#endif

	#ifndef GEODE_STATICS_darkenStoreItem
		#define GEODE_STATICS_darkenStoreItem
		GEODE_AS_STATIC_FUNCTION(darkenStoreItem) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_scaleForType
		#define GEODE_STATICS_scaleForType
		GEODE_AS_STATIC_FUNCTION(scaleForType) 
	#endif

	#ifndef GEODE_STATICS_toggleEnabledState
		#define GEODE_STATICS_toggleEnabledState
		GEODE_AS_STATIC_FUNCTION(toggleEnabledState) 
	#endif

	#ifndef GEODE_STATICS_unlockedColorForType
		#define GEODE_STATICS_unlockedColorForType
		GEODE_AS_STATIC_FUNCTION(unlockedColorForType) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJItemIcon> : ModifyBase<ModifyDerive<Der, GJItemIcon>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJItemIcon>>;
		using ModifyBase<ModifyDerive<Der, GJItemIcon>>::ModifyBase;
		using Base = GJItemIcon;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f5010, Optcall, GJItemIcon, create, UnlockType, int, cocos2d::ccColor3B, cocos2d::ccColor3B, bool, bool, bool, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f5920, Membercall, GJItemIcon, changeToLockedState, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f5720, Membercall, GJItemIcon, darkenStoreItem, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f50f0, Membercall, GJItemIcon, init, UnlockType, int, cocos2d::ccColor3B, cocos2d::ccColor3B, bool, bool, bool, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f59e0, Membercall, GJItemIcon, scaleForType, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f5870, Membercall, GJItemIcon, toggleEnabledState, bool)
		}
	};
}
