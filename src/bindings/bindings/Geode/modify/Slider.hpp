#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/Slider.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_disableSlider
		#define GEODE_STATICS_disableSlider
		GEODE_AS_STATIC_FUNCTION(disableSlider) 
	#endif

	#ifndef GEODE_STATICS_disableTouch
		#define GEODE_STATICS_disableTouch
		GEODE_AS_STATIC_FUNCTION(disableTouch) 
	#endif

	#ifndef GEODE_STATICS_enableSlider
		#define GEODE_STATICS_enableSlider
		GEODE_AS_STATIC_FUNCTION(enableSlider) 
	#endif

	#ifndef GEODE_STATICS_getLiveDragging
		#define GEODE_STATICS_getLiveDragging
		GEODE_AS_STATIC_FUNCTION(getLiveDragging) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_hideGroove
		#define GEODE_STATICS_hideGroove
		GEODE_AS_STATIC_FUNCTION(hideGroove) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setBarVisibility
		#define GEODE_STATICS_setBarVisibility
		GEODE_AS_STATIC_FUNCTION(setBarVisibility) 
	#endif

	#ifndef GEODE_STATICS_setLiveDragging
		#define GEODE_STATICS_setLiveDragging
		GEODE_AS_STATIC_FUNCTION(setLiveDragging) 
	#endif

	#ifndef GEODE_STATICS_setMaxOffset
		#define GEODE_STATICS_setMaxOffset
		GEODE_AS_STATIC_FUNCTION(setMaxOffset) 
	#endif

	#ifndef GEODE_STATICS_setRotated
		#define GEODE_STATICS_setRotated
		GEODE_AS_STATIC_FUNCTION(setRotated) 
	#endif

	#ifndef GEODE_STATICS_sliderBegan
		#define GEODE_STATICS_sliderBegan
		GEODE_AS_STATIC_FUNCTION(sliderBegan) 
	#endif

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
	#endif

	#ifndef GEODE_STATICS_updateBar
		#define GEODE_STATICS_updateBar
		GEODE_AS_STATIC_FUNCTION(updateBar) 
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


	template<class Der>
	struct ModifyDerive<Der, Slider> : ModifyBase<ModifyDerive<Der, Slider>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, Slider>>;
		using ModifyBase<ModifyDerive<Der, Slider>>::ModifyBase;
		using Base = Slider;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d130, Optcall, Slider, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d4f0, Membercall, Slider, getValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d1f0, Membercall, Slider, init, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d590, Membercall, Slider, updateBar, )
		}
	};
}
