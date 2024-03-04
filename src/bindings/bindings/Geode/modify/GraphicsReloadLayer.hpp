#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GraphicsReloadLayer.hpp>
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

	#ifndef GEODE_STATICS_performReload
		#define GEODE_STATICS_performReload
		GEODE_AS_STATIC_FUNCTION(performReload) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GraphicsReloadLayer> : ModifyBase<ModifyDerive<Der, GraphicsReloadLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GraphicsReloadLayer>>;
		using ModifyBase<ModifyDerive<Der, GraphicsReloadLayer>>::ModifyBase;
		using Base = GraphicsReloadLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b8460, Optcall, GraphicsReloadLayer, create, cocos2d::TextureQuality, cocos2d::CCSize, bool, bool)
		}
	};
}
