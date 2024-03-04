#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectArtLayer.hpp>
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

	#ifndef GEODE_STATICS_onSelectCustom
		#define GEODE_STATICS_onSelectCustom
		GEODE_AS_STATIC_FUNCTION(onSelectCustom) 
	#endif

	#ifndef GEODE_STATICS_selectArt
		#define GEODE_STATICS_selectArt
		GEODE_AS_STATIC_FUNCTION(selectArt) 
	#endif

	#ifndef GEODE_STATICS_updateSelectedCustom
		#define GEODE_STATICS_updateSelectedCustom
		GEODE_AS_STATIC_FUNCTION(updateSelectedCustom) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectArtLayer> : ModifyBase<ModifyDerive<Der, SelectArtLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectArtLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectArtLayer>>::ModifyBase;
		using Base = SelectArtLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
