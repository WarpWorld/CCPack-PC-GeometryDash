#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPFollowCommandLayer.hpp>
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

	#ifndef GEODE_STATICS_onUpdateGroupID
		#define GEODE_STATICS_onUpdateGroupID
		GEODE_AS_STATIC_FUNCTION(onUpdateGroupID) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderXModChanged
		#define GEODE_STATICS_sliderXModChanged
		GEODE_AS_STATIC_FUNCTION(sliderXModChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderYModChanged
		#define GEODE_STATICS_sliderYModChanged
		GEODE_AS_STATIC_FUNCTION(sliderYModChanged) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateMaxSpeed
		#define GEODE_STATICS_updateMaxSpeed
		GEODE_AS_STATIC_FUNCTION(updateMaxSpeed) 
	#endif

	#ifndef GEODE_STATICS_updateMaxSpeedLabel
		#define GEODE_STATICS_updateMaxSpeedLabel
		GEODE_AS_STATIC_FUNCTION(updateMaxSpeedLabel) 
	#endif

	#ifndef GEODE_STATICS_updateOffsetLabel
		#define GEODE_STATICS_updateOffsetLabel
		GEODE_AS_STATIC_FUNCTION(updateOffsetLabel) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerOffset
		#define GEODE_STATICS_updatePlayerOffset
		GEODE_AS_STATIC_FUNCTION(updatePlayerOffset) 
	#endif

	#ifndef GEODE_STATICS_updateTargetGroupID
		#define GEODE_STATICS_updateTargetGroupID
		GEODE_AS_STATIC_FUNCTION(updateTargetGroupID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateXMod
		#define GEODE_STATICS_updateXMod
		GEODE_AS_STATIC_FUNCTION(updateXMod) 
	#endif

	#ifndef GEODE_STATICS_updateXModLabel
		#define GEODE_STATICS_updateXModLabel
		GEODE_AS_STATIC_FUNCTION(updateXModLabel) 
	#endif

	#ifndef GEODE_STATICS_updateYMod
		#define GEODE_STATICS_updateYMod
		GEODE_AS_STATIC_FUNCTION(updateYMod) 
	#endif

	#ifndef GEODE_STATICS_updateYModLabel
		#define GEODE_STATICS_updateYModLabel
		GEODE_AS_STATIC_FUNCTION(updateYModLabel) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPFollowCommandLayer> : ModifyBase<ModifyDerive<Der, GJPFollowCommandLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPFollowCommandLayer>>;
		using ModifyBase<ModifyDerive<Der, GJPFollowCommandLayer>>::ModifyBase;
		using Base = GJPFollowCommandLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2010e0, Optcall, GJPFollowCommandLayer, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x201190, Membercall, GJPFollowCommandLayer, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
