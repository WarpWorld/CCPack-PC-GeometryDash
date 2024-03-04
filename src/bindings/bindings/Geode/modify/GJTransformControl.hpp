#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJTransformControl.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_applyRotation
		#define GEODE_STATICS_applyRotation
		GEODE_AS_STATIC_FUNCTION(applyRotation) 
	#endif

	#ifndef GEODE_STATICS_calculateRotationOffset
		#define GEODE_STATICS_calculateRotationOffset
		GEODE_AS_STATIC_FUNCTION(calculateRotationOffset) 
	#endif

	#ifndef GEODE_STATICS_finishTouch
		#define GEODE_STATICS_finishTouch
		GEODE_AS_STATIC_FUNCTION(finishTouch) 
	#endif

	#ifndef GEODE_STATICS_loadFromState
		#define GEODE_STATICS_loadFromState
		GEODE_AS_STATIC_FUNCTION(loadFromState) 
	#endif

	#ifndef GEODE_STATICS_loadValues
		#define GEODE_STATICS_loadValues
		GEODE_AS_STATIC_FUNCTION(loadValues) 
	#endif

	#ifndef GEODE_STATICS_logCurrentZeroPos
		#define GEODE_STATICS_logCurrentZeroPos
		GEODE_AS_STATIC_FUNCTION(logCurrentZeroPos) 
	#endif

	#ifndef GEODE_STATICS_onToggleLockScale
		#define GEODE_STATICS_onToggleLockScale
		GEODE_AS_STATIC_FUNCTION(onToggleLockScale) 
	#endif

	#ifndef GEODE_STATICS_refreshControl
		#define GEODE_STATICS_refreshControl
		GEODE_AS_STATIC_FUNCTION(refreshControl) 
	#endif

	#ifndef GEODE_STATICS_saveToState
		#define GEODE_STATICS_saveToState
		GEODE_AS_STATIC_FUNCTION(saveToState) 
	#endif

	#ifndef GEODE_STATICS_scaleButtons
		#define GEODE_STATICS_scaleButtons
		GEODE_AS_STATIC_FUNCTION(scaleButtons) 
	#endif

	#ifndef GEODE_STATICS_spriteByTag
		#define GEODE_STATICS_spriteByTag
		GEODE_AS_STATIC_FUNCTION(spriteByTag) 
	#endif

	#ifndef GEODE_STATICS_updateAnchorSprite
		#define GEODE_STATICS_updateAnchorSprite
		GEODE_AS_STATIC_FUNCTION(updateAnchorSprite) 
	#endif

	#ifndef GEODE_STATICS_updateButtons
		#define GEODE_STATICS_updateButtons
		GEODE_AS_STATIC_FUNCTION(updateButtons) 
	#endif

	#ifndef GEODE_STATICS_updateMinMaxPositions
		#define GEODE_STATICS_updateMinMaxPositions
		GEODE_AS_STATIC_FUNCTION(updateMinMaxPositions) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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


	template<class Der>
	struct ModifyDerive<Der, GJTransformControl> : ModifyBase<ModifyDerive<Der, GJTransformControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJTransformControl>>;
		using ModifyBase<ModifyDerive<Der, GJTransformControl>>::ModifyBase;
		using Base = GJTransformControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdf700, Optcall, GJTransformControl, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe14d0, Membercall, GJTransformControl, applyRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdfda0, Membercall, GJTransformControl, loadValues, GameObject*, cocos2d::CCArray*, gd::unordered_map<int, GameObjectEditorState>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdfd10, Membercall, GJTransformControl, scaleButtons, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdffc0, Membercall, GJTransformControl, updateButtons, bool, bool)
		}
	};
}
