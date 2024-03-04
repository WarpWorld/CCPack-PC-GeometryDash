#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/VideoOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_onAdvanced
		#define GEODE_STATICS_onAdvanced
		GEODE_AS_STATIC_FUNCTION(onAdvanced) 
	#endif

	#ifndef GEODE_STATICS_onApply
		#define GEODE_STATICS_onApply
		GEODE_AS_STATIC_FUNCTION(onApply) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onFullscreen
		#define GEODE_STATICS_onFullscreen
		GEODE_AS_STATIC_FUNCTION(onFullscreen) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onResolutionNext
		#define GEODE_STATICS_onResolutionNext
		GEODE_AS_STATIC_FUNCTION(onResolutionNext) 
	#endif

	#ifndef GEODE_STATICS_onResolutionPrev
		#define GEODE_STATICS_onResolutionPrev
		GEODE_AS_STATIC_FUNCTION(onResolutionPrev) 
	#endif

	#ifndef GEODE_STATICS_onTextureQualityNext
		#define GEODE_STATICS_onTextureQualityNext
		GEODE_AS_STATIC_FUNCTION(onTextureQualityNext) 
	#endif

	#ifndef GEODE_STATICS_onTextureQualityPrev
		#define GEODE_STATICS_onTextureQualityPrev
		GEODE_AS_STATIC_FUNCTION(onTextureQualityPrev) 
	#endif

	#ifndef GEODE_STATICS_reloadMenu
		#define GEODE_STATICS_reloadMenu
		GEODE_AS_STATIC_FUNCTION(reloadMenu) 
	#endif

	#ifndef GEODE_STATICS_toggleResolution
		#define GEODE_STATICS_toggleResolution
		GEODE_AS_STATIC_FUNCTION(toggleResolution) 
	#endif

	#ifndef GEODE_STATICS_updateResolution
		#define GEODE_STATICS_updateResolution
		GEODE_AS_STATIC_FUNCTION(updateResolution) 
	#endif

	#ifndef GEODE_STATICS_updateTextureQuality
		#define GEODE_STATICS_updateTextureQuality
		GEODE_AS_STATIC_FUNCTION(updateTextureQuality) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, VideoOptionsLayer> : ModifyBase<ModifyDerive<Der, VideoOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, VideoOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, VideoOptionsLayer>>::ModifyBase;
		using Base = VideoOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b3e20, Optcall, VideoOptionsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b50e0, Membercall, VideoOptionsLayer, onApply, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b4ea0, Membercall, VideoOptionsLayer, updateResolution, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b4de0, Membercall, VideoOptionsLayer, updateTextureQuality, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b3ec0, Thiscall, VideoOptionsLayer, init, )
		}
	};
}
