#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpriteGrayscale.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrame
		#define GEODE_STATICS_createWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_getShaderName
		#define GEODE_STATICS_getShaderName
		GEODE_AS_STATIC_FUNCTION(getShaderName) 
	#endif

	#ifndef GEODE_STATICS_shaderBody
		#define GEODE_STATICS_shaderBody
		GEODE_AS_STATIC_FUNCTION(shaderBody) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpriteGrayscale> : ModifyBase<ModifyDerive<Der, CCSpriteGrayscale>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpriteGrayscale>>;
		using ModifyBase<ModifyDerive<Der, CCSpriteGrayscale>>::ModifyBase;
		using Base = CCSpriteGrayscale;
        using Derived = Der;
		void apply() override {

		}
	};
}
