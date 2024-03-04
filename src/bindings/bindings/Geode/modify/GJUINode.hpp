#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJUINode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activeRangeTouchTest
		#define GEODE_STATICS_activeRangeTouchTest
		GEODE_AS_STATIC_FUNCTION(activeRangeTouchTest) 
	#endif

	#ifndef GEODE_STATICS_activeTouchTest
		#define GEODE_STATICS_activeTouchTest
		GEODE_AS_STATIC_FUNCTION(activeTouchTest) 
	#endif

	#ifndef GEODE_STATICS_getButtonScale
		#define GEODE_STATICS_getButtonScale
		GEODE_AS_STATIC_FUNCTION(getButtonScale) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_highlightButton
		#define GEODE_STATICS_highlightButton
		GEODE_AS_STATIC_FUNCTION(highlightButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadFromConfig
		#define GEODE_STATICS_loadFromConfig
		GEODE_AS_STATIC_FUNCTION(loadFromConfig) 
	#endif

	#ifndef GEODE_STATICS_resetState
		#define GEODE_STATICS_resetState
		GEODE_AS_STATIC_FUNCTION(resetState) 
	#endif

	#ifndef GEODE_STATICS_saveToConfig
		#define GEODE_STATICS_saveToConfig
		GEODE_AS_STATIC_FUNCTION(saveToConfig) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_toggleHighlight
		#define GEODE_STATICS_toggleHighlight
		GEODE_AS_STATIC_FUNCTION(toggleHighlight) 
	#endif

	#ifndef GEODE_STATICS_toggleModeB
		#define GEODE_STATICS_toggleModeB
		GEODE_AS_STATIC_FUNCTION(toggleModeB) 
	#endif

	#ifndef GEODE_STATICS_touchEnded
		#define GEODE_STATICS_touchEnded
		GEODE_AS_STATIC_FUNCTION(touchEnded) 
	#endif

	#ifndef GEODE_STATICS_touchTest
		#define GEODE_STATICS_touchTest
		GEODE_AS_STATIC_FUNCTION(touchTest) 
	#endif

	#ifndef GEODE_STATICS_updateButtonFrames
		#define GEODE_STATICS_updateButtonFrames
		GEODE_AS_STATIC_FUNCTION(updateButtonFrames) 
	#endif

	#ifndef GEODE_STATICS_updateButtonPositions
		#define GEODE_STATICS_updateButtonPositions
		GEODE_AS_STATIC_FUNCTION(updateButtonPositions) 
	#endif

	#ifndef GEODE_STATICS_updateButtonScale
		#define GEODE_STATICS_updateButtonScale
		GEODE_AS_STATIC_FUNCTION(updateButtonScale) 
	#endif

	#ifndef GEODE_STATICS_updateDeadzone
		#define GEODE_STATICS_updateDeadzone
		GEODE_AS_STATIC_FUNCTION(updateDeadzone) 
	#endif

	#ifndef GEODE_STATICS_updateDragRadius
		#define GEODE_STATICS_updateDragRadius
		GEODE_AS_STATIC_FUNCTION(updateDragRadius) 
	#endif

	#ifndef GEODE_STATICS_updateHeight
		#define GEODE_STATICS_updateHeight
		GEODE_AS_STATIC_FUNCTION(updateHeight) 
	#endif

	#ifndef GEODE_STATICS_updateRangePos
		#define GEODE_STATICS_updateRangePos
		GEODE_AS_STATIC_FUNCTION(updateRangePos) 
	#endif

	#ifndef GEODE_STATICS_updateSize
		#define GEODE_STATICS_updateSize
		GEODE_AS_STATIC_FUNCTION(updateSize) 
	#endif

	#ifndef GEODE_STATICS_updateWidth
		#define GEODE_STATICS_updateWidth
		GEODE_AS_STATIC_FUNCTION(updateWidth) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJUINode> : ModifyBase<ModifyDerive<Der, GJUINode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJUINode>>;
		using ModifyBase<ModifyDerive<Der, GJUINode>>::ModifyBase;
		using Base = GJUINode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c0230, Optcall, GJUINode, create, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c04f0, Membercall, GJUINode, resetState, )
		}
	};
}
