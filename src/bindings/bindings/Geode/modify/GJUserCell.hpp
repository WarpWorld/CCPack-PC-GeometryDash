#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJUserCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromScore
		#define GEODE_STATICS_loadFromScore
		GEODE_AS_STATIC_FUNCTION(loadFromScore) 
	#endif

	#ifndef GEODE_STATICS_onCancelFriendRequest
		#define GEODE_STATICS_onCancelFriendRequest
		GEODE_AS_STATIC_FUNCTION(onCancelFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFriend
		#define GEODE_STATICS_onRemoveFriend
		GEODE_AS_STATIC_FUNCTION(onRemoveFriend) 
	#endif

	#ifndef GEODE_STATICS_onSendMessage
		#define GEODE_STATICS_onSendMessage
		GEODE_AS_STATIC_FUNCTION(onSendMessage) 
	#endif

	#ifndef GEODE_STATICS_onUnblockUser
		#define GEODE_STATICS_onUnblockUser
		GEODE_AS_STATIC_FUNCTION(onUnblockUser) 
	#endif

	#ifndef GEODE_STATICS_onViewFriendRequest
		#define GEODE_STATICS_onViewFriendRequest
		GEODE_AS_STATIC_FUNCTION(onViewFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
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


	template<class Der>
	struct ModifyDerive<Der, GJUserCell> : ModifyBase<ModifyDerive<Der, GJUserCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJUserCell>>;
		using ModifyBase<ModifyDerive<Der, GJUserCell>>::ModifyBase;
		using Base = GJUserCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x88750, Membercall, GJUserCell, loadFromScore, GJUserScore*)
		}
	};
}
