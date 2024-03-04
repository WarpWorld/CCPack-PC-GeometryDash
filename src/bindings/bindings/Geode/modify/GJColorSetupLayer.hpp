#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJColorSetupLayer.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onColor
		#define GEODE_STATICS_onColor
		GEODE_AS_STATIC_FUNCTION(onColor) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_showPage
		#define GEODE_STATICS_showPage
		GEODE_AS_STATIC_FUNCTION(showPage) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteColor
		#define GEODE_STATICS_updateSpriteColor
		GEODE_AS_STATIC_FUNCTION(updateSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteColors
		#define GEODE_STATICS_updateSpriteColors
		GEODE_AS_STATIC_FUNCTION(updateSpriteColors) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJColorSetupLayer> : ModifyBase<ModifyDerive<Der, GJColorSetupLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJColorSetupLayer>>;
		using ModifyBase<ModifyDerive<Der, GJColorSetupLayer>>::ModifyBase;
		using Base = GJColorSetupLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d5ae0, Optcall, GJColorSetupLayer, create, LevelSettingsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d5b80, Membercall, GJColorSetupLayer, init, LevelSettingsObject*)
		}
	};
}
