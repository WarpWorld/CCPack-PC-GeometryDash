#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShareLevelSettingsLayer.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCopyable
		#define GEODE_STATICS_onCopyable
		GEODE_AS_STATIC_FUNCTION(onCopyable) 
	#endif

	#ifndef GEODE_STATICS_onEditPassword
		#define GEODE_STATICS_onEditPassword
		GEODE_AS_STATIC_FUNCTION(onEditPassword) 
	#endif

	#ifndef GEODE_STATICS_onPassword
		#define GEODE_STATICS_onPassword
		GEODE_AS_STATIC_FUNCTION(onPassword) 
	#endif

	#ifndef GEODE_STATICS_onUnlisted
		#define GEODE_STATICS_onUnlisted
		GEODE_AS_STATIC_FUNCTION(onUnlisted) 
	#endif

	#ifndef GEODE_STATICS_onUnlistedFriendsOnly
		#define GEODE_STATICS_onUnlistedFriendsOnly
		GEODE_AS_STATIC_FUNCTION(onUnlistedFriendsOnly) 
	#endif

	#ifndef GEODE_STATICS_updateSettingsState
		#define GEODE_STATICS_updateSettingsState
		GEODE_AS_STATIC_FUNCTION(updateSettingsState) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_numberInputClosed
		#define GEODE_STATICS_numberInputClosed
		GEODE_AS_STATIC_FUNCTION(numberInputClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShareLevelSettingsLayer> : ModifyBase<ModifyDerive<Der, ShareLevelSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShareLevelSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, ShareLevelSettingsLayer>>::ModifyBase;
		using Base = ShareLevelSettingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x389b10, Membercall, ShareLevelSettingsLayer, init, GJGameLevel*)
		}
	};
}
