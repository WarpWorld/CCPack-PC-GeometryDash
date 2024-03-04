#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSpawnPopup.hpp>
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

	#ifndef GEODE_STATICS_onAddRemap
		#define GEODE_STATICS_onAddRemap
		GEODE_AS_STATIC_FUNCTION(onAddRemap) 
	#endif

	#ifndef GEODE_STATICS_onDeleteRemap
		#define GEODE_STATICS_onDeleteRemap
		GEODE_AS_STATIC_FUNCTION(onDeleteRemap) 
	#endif

	#ifndef GEODE_STATICS_onSelectRemap
		#define GEODE_STATICS_onSelectRemap
		GEODE_AS_STATIC_FUNCTION(onSelectRemap) 
	#endif

	#ifndef GEODE_STATICS_queueUpdateButtons
		#define GEODE_STATICS_queueUpdateButtons
		GEODE_AS_STATIC_FUNCTION(queueUpdateButtons) 
	#endif

	#ifndef GEODE_STATICS_updateRemapButtons
		#define GEODE_STATICS_updateRemapButtons
		GEODE_AS_STATIC_FUNCTION(updateRemapButtons) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSpawnPopup> : ModifyBase<ModifyDerive<Der, SetupSpawnPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSpawnPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSpawnPopup>>::ModifyBase;
		using Base = SetupSpawnPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e2d0, Optcall, SetupSpawnPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35e380, Membercall, SetupSpawnPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
