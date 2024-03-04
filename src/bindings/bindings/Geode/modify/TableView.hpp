#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableView.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_cancelAndStoleTouch
		#define GEODE_STATICS_cancelAndStoleTouch
		GEODE_AS_STATIC_FUNCTION(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_STATICS_cellForRowAtIndexPath
		#define GEODE_STATICS_cellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(cellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_cellForTouch
		#define GEODE_STATICS_cellForTouch
		GEODE_AS_STATIC_FUNCTION(cellForTouch) 
	#endif

	#ifndef GEODE_STATICS_checkBoundaryOfCell
		#define GEODE_STATICS_checkBoundaryOfCell
		GEODE_AS_STATIC_FUNCTION(checkBoundaryOfCell) 
	#endif

	#ifndef GEODE_STATICS_checkBoundaryOfContent
		#define GEODE_STATICS_checkBoundaryOfContent
		GEODE_AS_STATIC_FUNCTION(checkBoundaryOfContent) 
	#endif

	#ifndef GEODE_STATICS_checkFirstCell
		#define GEODE_STATICS_checkFirstCell
		GEODE_AS_STATIC_FUNCTION(checkFirstCell) 
	#endif

	#ifndef GEODE_STATICS_checkLastCell
		#define GEODE_STATICS_checkLastCell
		GEODE_AS_STATIC_FUNCTION(checkLastCell) 
	#endif

	#ifndef GEODE_STATICS_claimTouch
		#define GEODE_STATICS_claimTouch
		GEODE_AS_STATIC_FUNCTION(claimTouch) 
	#endif

	#ifndef GEODE_STATICS_deleteTableViewCell
		#define GEODE_STATICS_deleteTableViewCell
		GEODE_AS_STATIC_FUNCTION(deleteTableViewCell) 
	#endif

	#ifndef GEODE_STATICS_dequeueReusableCellWithIdentifier
		#define GEODE_STATICS_dequeueReusableCellWithIdentifier
		GEODE_AS_STATIC_FUNCTION(dequeueReusableCellWithIdentifier) 
	#endif

	#ifndef GEODE_STATICS_initTableViewCells
		#define GEODE_STATICS_initTableViewCells
		GEODE_AS_STATIC_FUNCTION(initTableViewCells) 
	#endif

	#ifndef GEODE_STATICS_isDuplicateIndexPath
		#define GEODE_STATICS_isDuplicateIndexPath
		GEODE_AS_STATIC_FUNCTION(isDuplicateIndexPath) 
	#endif

	#ifndef GEODE_STATICS_isDuplicateInVisibleCellArray
		#define GEODE_STATICS_isDuplicateInVisibleCellArray
		GEODE_AS_STATIC_FUNCTION(isDuplicateInVisibleCellArray) 
	#endif

	#ifndef GEODE_STATICS_reloadData
		#define GEODE_STATICS_reloadData
		GEODE_AS_STATIC_FUNCTION(reloadData) 
	#endif

	#ifndef GEODE_STATICS_removeIndexPathFromPathAddedArray
		#define GEODE_STATICS_removeIndexPathFromPathAddedArray
		GEODE_AS_STATIC_FUNCTION(removeIndexPathFromPathAddedArray) 
	#endif

	#ifndef GEODE_STATICS_scrollToIndexPath
		#define GEODE_STATICS_scrollToIndexPath
		GEODE_AS_STATIC_FUNCTION(scrollToIndexPath) 
	#endif

	#ifndef GEODE_STATICS_touchFinish
		#define GEODE_STATICS_touchFinish
		GEODE_AS_STATIC_FUNCTION(touchFinish) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_scrollWheel
		#define GEODE_STATICS_scrollWheel
		GEODE_AS_STATIC_FUNCTION(scrollWheel) 
	#endif

	#ifndef GEODE_STATICS_scrllViewWillBeginDecelerating
		#define GEODE_STATICS_scrllViewWillBeginDecelerating
		GEODE_AS_STATIC_FUNCTION(scrllViewWillBeginDecelerating) 
	#endif

	#ifndef GEODE_STATICS_scrollViewDidEndDecelerating
		#define GEODE_STATICS_scrollViewDidEndDecelerating
		GEODE_AS_STATIC_FUNCTION(scrollViewDidEndDecelerating) 
	#endif

	#ifndef GEODE_STATICS_scrollViewTouchMoving
		#define GEODE_STATICS_scrollViewTouchMoving
		GEODE_AS_STATIC_FUNCTION(scrollViewTouchMoving) 
	#endif

	#ifndef GEODE_STATICS_scrollViewDidEndMoving
		#define GEODE_STATICS_scrollViewDidEndMoving
		GEODE_AS_STATIC_FUNCTION(scrollViewDidEndMoving) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableView> : ModifyBase<ModifyDerive<Der, TableView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableView>>;
		using ModifyBase<ModifyDerive<Der, TableView>>::ModifyBase;
		using Base = TableView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50770, Membercall, TableView, reloadData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50fd0, Thiscall, TableView, scrollWheel, float, float)
		}
	};
}
