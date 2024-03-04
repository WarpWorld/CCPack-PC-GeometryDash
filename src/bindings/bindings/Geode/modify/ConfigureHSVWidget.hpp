#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ConfigureHSVWidget.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createTextInputNode
		#define GEODE_STATICS_createTextInputNode
		GEODE_AS_STATIC_FUNCTION(createTextInputNode) 
	#endif

	#ifndef GEODE_STATICS_getHSV
		#define GEODE_STATICS_getHSV
		GEODE_AS_STATIC_FUNCTION(getHSV) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onResetHSV
		#define GEODE_STATICS_onResetHSV
		GEODE_AS_STATIC_FUNCTION(onResetHSV) 
	#endif

	#ifndef GEODE_STATICS_onToggleSConst
		#define GEODE_STATICS_onToggleSConst
		GEODE_AS_STATIC_FUNCTION(onToggleSConst) 
	#endif

	#ifndef GEODE_STATICS_onToggleVConst
		#define GEODE_STATICS_onToggleVConst
		GEODE_AS_STATIC_FUNCTION(onToggleVConst) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateLabels
		#define GEODE_STATICS_updateLabels
		GEODE_AS_STATIC_FUNCTION(updateLabels) 
	#endif

	#ifndef GEODE_STATICS_updateSliders
		#define GEODE_STATICS_updateSliders
		GEODE_AS_STATIC_FUNCTION(updateSliders) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ConfigureHSVWidget> : ModifyBase<ModifyDerive<Der, ConfigureHSVWidget>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ConfigureHSVWidget>>;
		using ModifyBase<ModifyDerive<Der, ConfigureHSVWidget>>::ModifyBase;
		using Base = ConfigureHSVWidget;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6c320, Membercall, ConfigureHSVWidget, getHSV, GameObject*, cocos2d::CCArray*, int)
		}
	};
}
