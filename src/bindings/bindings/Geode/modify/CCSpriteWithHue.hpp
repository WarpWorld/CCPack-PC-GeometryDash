#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpriteWithHue.hpp>
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

	#ifndef GEODE_STATICS_getAlpha
		#define GEODE_STATICS_getAlpha
		GEODE_AS_STATIC_FUNCTION(getAlpha) 
	#endif

	#ifndef GEODE_STATICS_getHue
		#define GEODE_STATICS_getHue
		GEODE_AS_STATIC_FUNCTION(getHue) 
	#endif

	#ifndef GEODE_STATICS_getUniformLocations
		#define GEODE_STATICS_getUniformLocations
		GEODE_AS_STATIC_FUNCTION(getUniformLocations) 
	#endif

	#ifndef GEODE_STATICS_initShader
		#define GEODE_STATICS_initShader
		GEODE_AS_STATIC_FUNCTION(initShader) 
	#endif

	#ifndef GEODE_STATICS_setCustomLuminance
		#define GEODE_STATICS_setCustomLuminance
		GEODE_AS_STATIC_FUNCTION(setCustomLuminance) 
	#endif

	#ifndef GEODE_STATICS_setEvenLuminance
		#define GEODE_STATICS_setEvenLuminance
		GEODE_AS_STATIC_FUNCTION(setEvenLuminance) 
	#endif

	#ifndef GEODE_STATICS_setHue
		#define GEODE_STATICS_setHue
		GEODE_AS_STATIC_FUNCTION(setHue) 
	#endif

	#ifndef GEODE_STATICS_setHueDegrees
		#define GEODE_STATICS_setHueDegrees
		GEODE_AS_STATIC_FUNCTION(setHueDegrees) 
	#endif

	#ifndef GEODE_STATICS_setLuminance
		#define GEODE_STATICS_setLuminance
		GEODE_AS_STATIC_FUNCTION(setLuminance) 
	#endif

	#ifndef GEODE_STATICS_setupDefaultSettings
		#define GEODE_STATICS_setupDefaultSettings
		GEODE_AS_STATIC_FUNCTION(setupDefaultSettings) 
	#endif

	#ifndef GEODE_STATICS_updateColorMatrix
		#define GEODE_STATICS_updateColorMatrix
		GEODE_AS_STATIC_FUNCTION(updateColorMatrix) 
	#endif

	#ifndef GEODE_STATICS_updateHue
		#define GEODE_STATICS_updateHue
		GEODE_AS_STATIC_FUNCTION(updateHue) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrame
		#define GEODE_STATICS_initWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_getShaderName
		#define GEODE_STATICS_getShaderName
		GEODE_AS_STATIC_FUNCTION(getShaderName) 
	#endif

	#ifndef GEODE_STATICS_shaderBody
		#define GEODE_STATICS_shaderBody
		GEODE_AS_STATIC_FUNCTION(shaderBody) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpriteWithHue> : ModifyBase<ModifyDerive<Der, CCSpriteWithHue>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpriteWithHue>>;
		using ModifyBase<ModifyDerive<Der, CCSpriteWithHue>>::ModifyBase;
		using Base = CCSpriteWithHue;
        using Derived = Der;
		void apply() override {

		}
	};
}
