#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomScrollLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addPage
		#define GEODE_STATICS_addPage
		GEODE_AS_STATIC_FUNCTION(addPage) 
	#endif

	#ifndef GEODE_STATICS_cancelAndStoleTouch
		#define GEODE_STATICS_cancelAndStoleTouch
		GEODE_AS_STATIC_FUNCTION(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_STATICS_claimTouch
		#define GEODE_STATICS_claimTouch
		GEODE_AS_STATIC_FUNCTION(claimTouch) 
	#endif

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_getRelativePageForNum
		#define GEODE_STATICS_getRelativePageForNum
		GEODE_AS_STATIC_FUNCTION(getRelativePageForNum) 
	#endif

	#ifndef GEODE_STATICS_getRelativePosForPage
		#define GEODE_STATICS_getRelativePosForPage
		GEODE_AS_STATIC_FUNCTION(getRelativePosForPage) 
	#endif

	#ifndef GEODE_STATICS_getTotalPages
		#define GEODE_STATICS_getTotalPages
		GEODE_AS_STATIC_FUNCTION(getTotalPages) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_instantMoveToPage
		#define GEODE_STATICS_instantMoveToPage
		GEODE_AS_STATIC_FUNCTION(instantMoveToPage) 
	#endif

	#ifndef GEODE_STATICS_moveToPage
		#define GEODE_STATICS_moveToPage
		GEODE_AS_STATIC_FUNCTION(moveToPage) 
	#endif

	#ifndef GEODE_STATICS_moveToPageEnded
		#define GEODE_STATICS_moveToPageEnded
		GEODE_AS_STATIC_FUNCTION(moveToPageEnded) 
	#endif

	#ifndef GEODE_STATICS_pageNumberForPosition
		#define GEODE_STATICS_pageNumberForPosition
		GEODE_AS_STATIC_FUNCTION(pageNumberForPosition) 
	#endif

	#ifndef GEODE_STATICS_positionForPageWithNumber
		#define GEODE_STATICS_positionForPageWithNumber
		GEODE_AS_STATIC_FUNCTION(positionForPageWithNumber) 
	#endif

	#ifndef GEODE_STATICS_quickUpdate
		#define GEODE_STATICS_quickUpdate
		GEODE_AS_STATIC_FUNCTION(quickUpdate) 
	#endif

	#ifndef GEODE_STATICS_removePage
		#define GEODE_STATICS_removePage
		GEODE_AS_STATIC_FUNCTION(removePage) 
	#endif

	#ifndef GEODE_STATICS_removePageWithNumber
		#define GEODE_STATICS_removePageWithNumber
		GEODE_AS_STATIC_FUNCTION(removePageWithNumber) 
	#endif

	#ifndef GEODE_STATICS_repositionPagesLooped
		#define GEODE_STATICS_repositionPagesLooped
		GEODE_AS_STATIC_FUNCTION(repositionPagesLooped) 
	#endif

	#ifndef GEODE_STATICS_selectPage
		#define GEODE_STATICS_selectPage
		GEODE_AS_STATIC_FUNCTION(selectPage) 
	#endif

	#ifndef GEODE_STATICS_setDotScale
		#define GEODE_STATICS_setDotScale
		GEODE_AS_STATIC_FUNCTION(setDotScale) 
	#endif

	#ifndef GEODE_STATICS_setPagesIndicatorPosition
		#define GEODE_STATICS_setPagesIndicatorPosition
		GEODE_AS_STATIC_FUNCTION(setPagesIndicatorPosition) 
	#endif

	#ifndef GEODE_STATICS_setupDynamicScrolling
		#define GEODE_STATICS_setupDynamicScrolling
		GEODE_AS_STATIC_FUNCTION(setupDynamicScrolling) 
	#endif

	#ifndef GEODE_STATICS_togglePageIndicators
		#define GEODE_STATICS_togglePageIndicators
		GEODE_AS_STATIC_FUNCTION(togglePageIndicators) 
	#endif

	#ifndef GEODE_STATICS_updateDots
		#define GEODE_STATICS_updateDots
		GEODE_AS_STATIC_FUNCTION(updateDots) 
	#endif

	#ifndef GEODE_STATICS_updatePages
		#define GEODE_STATICS_updatePages
		GEODE_AS_STATIC_FUNCTION(updatePages) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
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


	template<class Der>
	struct ModifyDerive<Der, BoomScrollLayer> : ModifyBase<ModifyDerive<Der, BoomScrollLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BoomScrollLayer>>;
		using ModifyBase<ModifyDerive<Der, BoomScrollLayer>>::ModifyBase;
		using Base = BoomScrollLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
