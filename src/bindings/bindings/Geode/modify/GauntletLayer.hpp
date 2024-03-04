#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GauntletLayer.hpp>
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

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onLevel
		#define GEODE_STATICS_onLevel
		GEODE_AS_STATIC_FUNCTION(onLevel) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_setupGauntlet
		#define GEODE_STATICS_setupGauntlet
		GEODE_AS_STATIC_FUNCTION(setupGauntlet) 
	#endif

	#ifndef GEODE_STATICS_unlockActiveItem
		#define GEODE_STATICS_unlockActiveItem
		GEODE_AS_STATIC_FUNCTION(unlockActiveItem) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFinished
		#define GEODE_STATICS_loadLevelsFinished
		GEODE_AS_STATIC_FUNCTION(loadLevelsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFailed
		#define GEODE_STATICS_loadLevelsFailed
		GEODE_AS_STATIC_FUNCTION(loadLevelsFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GauntletLayer> : ModifyBase<ModifyDerive<Der, GauntletLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GauntletLayer>>;
		using ModifyBase<ModifyDerive<Der, GauntletLayer>>::ModifyBase;
		using Base = GauntletLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1845f0, Optcall, GauntletLayer, create, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x184970, Membercall, GauntletLayer, init, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1851d0, Membercall, GauntletLayer, setupGauntlet, cocos2d::CCArray*)
		}
	};
}
