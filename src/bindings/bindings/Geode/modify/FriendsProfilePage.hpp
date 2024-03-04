#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendsProfilePage.hpp>
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

	#ifndef GEODE_STATICS_onBlocked
		#define GEODE_STATICS_onBlocked
		GEODE_AS_STATIC_FUNCTION(onBlocked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_setupUsersBrowser
		#define GEODE_STATICS_setupUsersBrowser
		GEODE_AS_STATIC_FUNCTION(setupUsersBrowser) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_getUserListFinished
		#define GEODE_STATICS_getUserListFinished
		GEODE_AS_STATIC_FUNCTION(getUserListFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserListFailed
		#define GEODE_STATICS_getUserListFailed
		GEODE_AS_STATIC_FUNCTION(getUserListFailed) 
	#endif

	#ifndef GEODE_STATICS_userListChanged
		#define GEODE_STATICS_userListChanged
		GEODE_AS_STATIC_FUNCTION(userListChanged) 
	#endif

	#ifndef GEODE_STATICS_forceReloadList
		#define GEODE_STATICS_forceReloadList
		GEODE_AS_STATIC_FUNCTION(forceReloadList) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendsProfilePage> : ModifyBase<ModifyDerive<Der, FriendsProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendsProfilePage>>;
		using ModifyBase<ModifyDerive<Der, FriendsProfilePage>>::ModifyBase;
		using Base = FriendsProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0960, Optcall, FriendsProfilePage, create, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0a10, Membercall, FriendsProfilePage, init, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1630, Membercall, FriendsProfilePage, onBlocked, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1090, Membercall, FriendsProfilePage, setupUsersBrowser, cocos2d::CCArray*, UserListType)
		}
	};
}
