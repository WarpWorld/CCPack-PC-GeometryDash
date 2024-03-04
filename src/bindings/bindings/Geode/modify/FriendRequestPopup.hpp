#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendRequestPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadFromGJFriendRequest
		#define GEODE_STATICS_loadFromGJFriendRequest
		GEODE_AS_STATIC_FUNCTION(loadFromGJFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_onAccept
		#define GEODE_STATICS_onAccept
		GEODE_AS_STATIC_FUNCTION(onAccept) 
	#endif

	#ifndef GEODE_STATICS_onBlock
		#define GEODE_STATICS_onBlock
		GEODE_AS_STATIC_FUNCTION(onBlock) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onRemove
		#define GEODE_STATICS_onRemove
		GEODE_AS_STATIC_FUNCTION(onRemove) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendRequestPopup> : ModifyBase<ModifyDerive<Der, FriendRequestPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendRequestPopup>>;
		using ModifyBase<ModifyDerive<Der, FriendRequestPopup>>::ModifyBase;
		using Base = FriendRequestPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20b440, Optcall, FriendRequestPopup, create, GJFriendRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20b4e0, Membercall, FriendRequestPopup, init, GJFriendRequest*)
		}
	};
}
