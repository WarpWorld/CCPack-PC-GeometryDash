#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelAreaLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addGodRay
		#define GEODE_STATICS_addGodRay
		GEODE_AS_STATIC_FUNCTION(addGodRay) 
	#endif

	#ifndef GEODE_STATICS_addTorch
		#define GEODE_STATICS_addTorch
		GEODE_AS_STATIC_FUNCTION(addTorch) 
	#endif

	#ifndef GEODE_STATICS_fadeInsideTower
		#define GEODE_STATICS_fadeInsideTower
		GEODE_AS_STATIC_FUNCTION(fadeInsideTower) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onClickDoor
		#define GEODE_STATICS_onClickDoor
		GEODE_AS_STATIC_FUNCTION(onClickDoor) 
	#endif

	#ifndef GEODE_STATICS_onEnterTower
		#define GEODE_STATICS_onEnterTower
		GEODE_AS_STATIC_FUNCTION(onEnterTower) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_showDialog
		#define GEODE_STATICS_showDialog
		GEODE_AS_STATIC_FUNCTION(showDialog) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelAreaLayer> : ModifyBase<ModifyDerive<Der, LevelAreaLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelAreaLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelAreaLayer>>::ModifyBase;
		using Base = LevelAreaLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22f560, Optcall, LevelAreaLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x230d50, Membercall, LevelAreaLayer, addGodRay, float, float, float, float, float, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x230800, Membercall, LevelAreaLayer, addTorch, cocos2d::CCNode*, cocos2d::CCPoint, int, float, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2306c0, Membercall, LevelAreaLayer, fadeInsideTower, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231080, Membercall, LevelAreaLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x230580, Membercall, LevelAreaLayer, onClickDoor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x230750, Membercall, LevelAreaLayer, onEnterTower, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x230300, Membercall, LevelAreaLayer, showDialog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22f610, Thiscall, LevelAreaLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2310f0, Thiscall, LevelAreaLayer, keyBackClicked, )
		}
	};
}
