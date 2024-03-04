#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCameraModePopup.hpp>
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

	#ifndef GEODE_STATICS_onEditCameraSettings
		#define GEODE_STATICS_onEditCameraSettings
		GEODE_AS_STATIC_FUNCTION(onEditCameraSettings) 
	#endif

	#ifndef GEODE_STATICS_onUnboundMode
		#define GEODE_STATICS_onUnboundMode
		GEODE_AS_STATIC_FUNCTION(onUnboundMode) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateCameraEasing
		#define GEODE_STATICS_updateCameraEasing
		GEODE_AS_STATIC_FUNCTION(updateCameraEasing) 
	#endif

	#ifndef GEODE_STATICS_updateCameraEasingLabel
		#define GEODE_STATICS_updateCameraEasingLabel
		GEODE_AS_STATIC_FUNCTION(updateCameraEasingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateCameraPadding
		#define GEODE_STATICS_updateCameraPadding
		GEODE_AS_STATIC_FUNCTION(updateCameraPadding) 
	#endif

	#ifndef GEODE_STATICS_updateCameraPaddingLabel
		#define GEODE_STATICS_updateCameraPaddingLabel
		GEODE_AS_STATIC_FUNCTION(updateCameraPaddingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateItemVisibility
		#define GEODE_STATICS_updateItemVisibility
		GEODE_AS_STATIC_FUNCTION(updateItemVisibility) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupCameraModePopup> : ModifyBase<ModifyDerive<Der, SetupCameraModePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCameraModePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCameraModePopup>>::ModifyBase;
		using Base = SetupCameraModePopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
