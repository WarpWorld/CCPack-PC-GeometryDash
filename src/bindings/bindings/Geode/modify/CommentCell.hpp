#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CommentCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_incrementDislikes
		#define GEODE_STATICS_incrementDislikes
		GEODE_AS_STATIC_FUNCTION(incrementDislikes) 
	#endif

	#ifndef GEODE_STATICS_incrementLikes
		#define GEODE_STATICS_incrementLikes
		GEODE_AS_STATIC_FUNCTION(incrementLikes) 
	#endif

	#ifndef GEODE_STATICS_loadFromComment
		#define GEODE_STATICS_loadFromComment
		GEODE_AS_STATIC_FUNCTION(loadFromComment) 
	#endif

	#ifndef GEODE_STATICS_onConfirmDelete
		#define GEODE_STATICS_onConfirmDelete
		GEODE_AS_STATIC_FUNCTION(onConfirmDelete) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onGoToLevel
		#define GEODE_STATICS_onGoToLevel
		GEODE_AS_STATIC_FUNCTION(onGoToLevel) 
	#endif

	#ifndef GEODE_STATICS_onLike
		#define GEODE_STATICS_onLike
		GEODE_AS_STATIC_FUNCTION(onLike) 
	#endif

	#ifndef GEODE_STATICS_onUndelete
		#define GEODE_STATICS_onUndelete
		GEODE_AS_STATIC_FUNCTION(onUndelete) 
	#endif

	#ifndef GEODE_STATICS_onUnhide
		#define GEODE_STATICS_onUnhide
		GEODE_AS_STATIC_FUNCTION(onUnhide) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_updateLabelValues
		#define GEODE_STATICS_updateLabelValues
		GEODE_AS_STATIC_FUNCTION(updateLabelValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_likedItem
		#define GEODE_STATICS_likedItem
		GEODE_AS_STATIC_FUNCTION(likedItem) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CommentCell> : ModifyBase<ModifyDerive<Der, CommentCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CommentCell>>;
		using ModifyBase<ModifyDerive<Der, CommentCell>>::ModifyBase;
		using Base = CommentCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84490, Membercall, CommentCell, loadFromComment, GJComment*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x862c0, Membercall, CommentCell, onConfirmDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86360, Membercall, CommentCell, onDelete, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86110, Membercall, CommentCell, onLike, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86090, Membercall, CommentCell, updateBGColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86240, Membercall, CommentCell, updateLabelValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d5b0, Thiscall, CommentCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x861f0, Thiscall, CommentCell, likedItem, LikeItemType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x863d0, Thiscall, CommentCell, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
