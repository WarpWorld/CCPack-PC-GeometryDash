#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCPartAnimSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_changeTextureOfID
		#define GEODE_STATICS_changeTextureOfID
		GEODE_AS_STATIC_FUNCTION(changeTextureOfID) 
	#endif

	#ifndef GEODE_STATICS_countParts
		#define GEODE_STATICS_countParts
		GEODE_AS_STATIC_FUNCTION(countParts) 
	#endif

	#ifndef GEODE_STATICS_createWithAnimDesc
		#define GEODE_STATICS_createWithAnimDesc
		GEODE_AS_STATIC_FUNCTION(createWithAnimDesc) 
	#endif

	#ifndef GEODE_STATICS_dirtify
		#define GEODE_STATICS_dirtify
		GEODE_AS_STATIC_FUNCTION(dirtify) 
	#endif

	#ifndef GEODE_STATICS_getSpriteForKey
		#define GEODE_STATICS_getSpriteForKey
		GEODE_AS_STATIC_FUNCTION(getSpriteForKey) 
	#endif

	#ifndef GEODE_STATICS_initWithAnimDesc
		#define GEODE_STATICS_initWithAnimDesc
		GEODE_AS_STATIC_FUNCTION(initWithAnimDesc) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_transformSprite
		#define GEODE_STATICS_transformSprite
		GEODE_AS_STATIC_FUNCTION(transformSprite) 
	#endif

	#ifndef GEODE_STATICS_tweenSpriteTo
		#define GEODE_STATICS_tweenSpriteTo
		GEODE_AS_STATIC_FUNCTION(tweenSpriteTo) 
	#endif

	#ifndef GEODE_STATICS_tweenToFrame
		#define GEODE_STATICS_tweenToFrame
		GEODE_AS_STATIC_FUNCTION(tweenToFrame) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_setDisplayFrame
		#define GEODE_STATICS_setDisplayFrame
		GEODE_AS_STATIC_FUNCTION(setDisplayFrame) 
	#endif

	#ifndef GEODE_STATICS_isFrameDisplayed
		#define GEODE_STATICS_isFrameDisplayed
		GEODE_AS_STATIC_FUNCTION(isFrameDisplayed) 
	#endif

	#ifndef GEODE_STATICS_displayFrame
		#define GEODE_STATICS_displayFrame
		GEODE_AS_STATIC_FUNCTION(displayFrame) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCPartAnimSprite> : ModifyBase<ModifyDerive<Der, CCPartAnimSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCPartAnimSprite>>;
		using ModifyBase<ModifyDerive<Der, CCPartAnimSprite>>::ModifyBase;
		using Base = CCPartAnimSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27270, Membercall, CCPartAnimSprite, setColor, cocos2d::ccColor3B)
		}
	};
}
