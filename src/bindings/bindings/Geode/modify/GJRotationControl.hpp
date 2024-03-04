#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRotationControl.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_finishTouch
		#define GEODE_STATICS_finishTouch
		GEODE_AS_STATIC_FUNCTION(finishTouch) 
	#endif

	#ifndef GEODE_STATICS_setAngle
		#define GEODE_STATICS_setAngle
		GEODE_AS_STATIC_FUNCTION(setAngle) 
	#endif

	#ifndef GEODE_STATICS_updateSliderPosition
		#define GEODE_STATICS_updateSliderPosition
		GEODE_AS_STATIC_FUNCTION(updateSliderPosition) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
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
	struct ModifyDerive<Der, GJRotationControl> : ModifyBase<ModifyDerive<Der, GJRotationControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRotationControl>>;
		using ModifyBase<ModifyDerive<Der, GJRotationControl>>::ModifyBase;
		using Base = GJRotationControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xddc40, Optcall, GJRotationControl, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xddf70, Membercall, GJRotationControl, finishTouch, )
		}
	};
}
