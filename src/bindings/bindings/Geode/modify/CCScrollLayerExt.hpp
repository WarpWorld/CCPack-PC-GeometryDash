#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCScrollLayerExt.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_constraintContent
		#define GEODE_STATICS_constraintContent
		GEODE_AS_STATIC_FUNCTION(constraintContent) 
	#endif

	#ifndef GEODE_STATICS_doConstraintContent
		#define GEODE_STATICS_doConstraintContent
		GEODE_AS_STATIC_FUNCTION(doConstraintContent) 
	#endif

	#ifndef GEODE_STATICS_getMaxY
		#define GEODE_STATICS_getMaxY
		GEODE_AS_STATIC_FUNCTION(getMaxY) 
	#endif

	#ifndef GEODE_STATICS_getMinY
		#define GEODE_STATICS_getMinY
		GEODE_AS_STATIC_FUNCTION(getMinY) 
	#endif

	#ifndef GEODE_STATICS_moveToTop
		#define GEODE_STATICS_moveToTop
		GEODE_AS_STATIC_FUNCTION(moveToTop) 
	#endif

	#ifndef GEODE_STATICS_moveToTopWithOffset
		#define GEODE_STATICS_moveToTopWithOffset
		GEODE_AS_STATIC_FUNCTION(moveToTopWithOffset) 
	#endif

	#ifndef GEODE_STATICS_scrollingEnd
		#define GEODE_STATICS_scrollingEnd
		GEODE_AS_STATIC_FUNCTION(scrollingEnd) 
	#endif

	#ifndef GEODE_STATICS_scrollLayer
		#define GEODE_STATICS_scrollLayer
		GEODE_AS_STATIC_FUNCTION(scrollLayer) 
	#endif

	#ifndef GEODE_STATICS_setContentLayerSize
		#define GEODE_STATICS_setContentLayerSize
		GEODE_AS_STATIC_FUNCTION(setContentLayerSize) 
	#endif

	#ifndef GEODE_STATICS_setContentOffset
		#define GEODE_STATICS_setContentOffset
		GEODE_AS_STATIC_FUNCTION(setContentOffset) 
	#endif

	#ifndef GEODE_STATICS_updateIndicators
		#define GEODE_STATICS_updateIndicators
		GEODE_AS_STATIC_FUNCTION(updateIndicators) 
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

	#ifndef GEODE_STATICS_preVisitWithClippingRect
		#define GEODE_STATICS_preVisitWithClippingRect
		GEODE_AS_STATIC_FUNCTION(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_STATICS_postVisit
		#define GEODE_STATICS_postVisit
		GEODE_AS_STATIC_FUNCTION(postVisit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCScrollLayerExt> : ModifyBase<ModifyDerive<Der, CCScrollLayerExt>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCScrollLayerExt>>;
		using ModifyBase<ModifyDerive<Der, CCScrollLayerExt>>::ModifyBase;
		using Base = CCScrollLayerExt;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x276e0, Membercall, CCScrollLayerExt, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b60, Membercall, CCScrollLayerExt, moveToTop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ae0, Membercall, CCScrollLayerExt, moveToTopWithOffset, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28550, Membercall, CCScrollLayerExt, scrollLayer, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28600, Thiscall, CCScrollLayerExt, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x280d0, Thiscall, CCScrollLayerExt, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28410, Thiscall, CCScrollLayerExt, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x281c0, Thiscall, CCScrollLayerExt, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x283e0, Thiscall, CCScrollLayerExt, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x280a0, Thiscall, CCScrollLayerExt, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x286d0, Thiscall, CCScrollLayerExt, preVisitWithClippingRect, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28760, Thiscall, CCScrollLayerExt, postVisit, )
		}
	};
}
