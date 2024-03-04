#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/InfoLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_confirmReport
		#define GEODE_STATICS_confirmReport
		GEODE_AS_STATIC_FUNCTION(confirmReport) 
	#endif

	#ifndef GEODE_STATICS_getAccountID
		#define GEODE_STATICS_getAccountID
		GEODE_AS_STATIC_FUNCTION(getAccountID) 
	#endif

	#ifndef GEODE_STATICS_getRealID
		#define GEODE_STATICS_getRealID
		GEODE_AS_STATIC_FUNCTION(getRealID) 
	#endif

	#ifndef GEODE_STATICS_getSpriteButton
		#define GEODE_STATICS_getSpriteButton
		GEODE_AS_STATIC_FUNCTION(getSpriteButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onComment
		#define GEODE_STATICS_onComment
		GEODE_AS_STATIC_FUNCTION(onComment) 
	#endif

	#ifndef GEODE_STATICS_onCopyLevelID
		#define GEODE_STATICS_onCopyLevelID
		GEODE_AS_STATIC_FUNCTION(onCopyLevelID) 
	#endif

	#ifndef GEODE_STATICS_onGetComments
		#define GEODE_STATICS_onGetComments
		GEODE_AS_STATIC_FUNCTION(onGetComments) 
	#endif

	#ifndef GEODE_STATICS_onLevelInfo
		#define GEODE_STATICS_onLevelInfo
		GEODE_AS_STATIC_FUNCTION(onLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_onMore
		#define GEODE_STATICS_onMore
		GEODE_AS_STATIC_FUNCTION(onMore) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onOriginal
		#define GEODE_STATICS_onOriginal
		GEODE_AS_STATIC_FUNCTION(onOriginal) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onRefreshComments
		#define GEODE_STATICS_onRefreshComments
		GEODE_AS_STATIC_FUNCTION(onRefreshComments) 
	#endif

	#ifndef GEODE_STATICS_onSimilar
		#define GEODE_STATICS_onSimilar
		GEODE_AS_STATIC_FUNCTION(onSimilar) 
	#endif

	#ifndef GEODE_STATICS_reloadWindow
		#define GEODE_STATICS_reloadWindow
		GEODE_AS_STATIC_FUNCTION(reloadWindow) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_setupLevelInfo
		#define GEODE_STATICS_setupLevelInfo
		GEODE_AS_STATIC_FUNCTION(setupLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_toggleCommentMode
		#define GEODE_STATICS_toggleCommentMode
		GEODE_AS_STATIC_FUNCTION(toggleCommentMode) 
	#endif

	#ifndef GEODE_STATICS_toggleExtendedMode
		#define GEODE_STATICS_toggleExtendedMode
		GEODE_AS_STATIC_FUNCTION(toggleExtendedMode) 
	#endif

	#ifndef GEODE_STATICS_toggleSmallCommentMode
		#define GEODE_STATICS_toggleSmallCommentMode
		GEODE_AS_STATIC_FUNCTION(toggleSmallCommentMode) 
	#endif

	#ifndef GEODE_STATICS_updateCommentModeButtons
		#define GEODE_STATICS_updateCommentModeButtons
		GEODE_AS_STATIC_FUNCTION(updateCommentModeButtons) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsLabel
		#define GEODE_STATICS_updateLevelsLabel
		GEODE_AS_STATIC_FUNCTION(updateLevelsLabel) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFinished
		#define GEODE_STATICS_loadCommentsFinished
		GEODE_AS_STATIC_FUNCTION(loadCommentsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFailed
		#define GEODE_STATICS_loadCommentsFailed
		GEODE_AS_STATIC_FUNCTION(loadCommentsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFinished
		#define GEODE_STATICS_commentUploadFinished
		GEODE_AS_STATIC_FUNCTION(commentUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFailed
		#define GEODE_STATICS_commentUploadFailed
		GEODE_AS_STATIC_FUNCTION(commentUploadFailed) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, InfoLayer> : ModifyBase<ModifyDerive<Der, InfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, InfoLayer>>;
		using ModifyBase<ModifyDerive<Der, InfoLayer>>::ModifyBase;
		using Base = InfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x228730, Optcall, InfoLayer, create, GJGameLevel*, GJUserScore*, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22a410, Membercall, InfoLayer, getSpriteButton, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x228810, Membercall, InfoLayer, init, GJGameLevel*, GJUserScore*, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22b340, Membercall, InfoLayer, loadPage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22b200, Membercall, InfoLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22aba0, Membercall, InfoLayer, onComment, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22a8f0, Membercall, InfoLayer, onCopyLevelID, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22ad90, Membercall, InfoLayer, onGetComments, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22ada0, Membercall, InfoLayer, onLevelInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22aaa0, Membercall, InfoLayer, onMore, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22bac0, Membercall, InfoLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22aae0, Membercall, InfoLayer, onOriginal, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22bae0, Membercall, InfoLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22a680, Membercall, InfoLayer, onRefreshComments, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22bd00, Membercall, InfoLayer, reloadWindow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22b670, Membercall, InfoLayer, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22bc10, Membercall, InfoLayer, toggleSmallCommentMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8fff0, Thiscall, InfoLayer, show, )
		}
	};
}
