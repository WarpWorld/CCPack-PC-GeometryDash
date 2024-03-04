#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HSVLiveOverlay.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_closeColorSelect
		#define GEODE_STATICS_closeColorSelect
		GEODE_AS_STATIC_FUNCTION(closeColorSelect) 
	#endif

	#ifndef GEODE_STATICS_createHSVWidget
		#define GEODE_STATICS_createHSVWidget
		GEODE_AS_STATIC_FUNCTION(createHSVWidget) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSelectTab
		#define GEODE_STATICS_onSelectTab
		GEODE_AS_STATIC_FUNCTION(onSelectTab) 
	#endif

	#ifndef GEODE_STATICS_toggleControls
		#define GEODE_STATICS_toggleControls
		GEODE_AS_STATIC_FUNCTION(toggleControls) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_hsvChanged
		#define GEODE_STATICS_hsvChanged
		GEODE_AS_STATIC_FUNCTION(hsvChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, HSVLiveOverlay> : ModifyBase<ModifyDerive<Der, HSVLiveOverlay>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HSVLiveOverlay>>;
		using ModifyBase<ModifyDerive<Der, HSVLiveOverlay>>::ModifyBase;
		using Base = HSVLiveOverlay;
        using Derived = Der;
		void apply() override {

		}
	};
}
