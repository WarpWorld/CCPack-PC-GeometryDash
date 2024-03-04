#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpritePart.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_frameChanged
		#define GEODE_STATICS_frameChanged
		GEODE_AS_STATIC_FUNCTION(frameChanged) 
	#endif

	#ifndef GEODE_STATICS_getBeingUsed
		#define GEODE_STATICS_getBeingUsed
		GEODE_AS_STATIC_FUNCTION(getBeingUsed) 
	#endif

	#ifndef GEODE_STATICS_hideInactive
		#define GEODE_STATICS_hideInactive
		GEODE_AS_STATIC_FUNCTION(hideInactive) 
	#endif

	#ifndef GEODE_STATICS_markAsNotBeingUsed
		#define GEODE_STATICS_markAsNotBeingUsed
		GEODE_AS_STATIC_FUNCTION(markAsNotBeingUsed) 
	#endif

	#ifndef GEODE_STATICS_resetTextureRect
		#define GEODE_STATICS_resetTextureRect
		GEODE_AS_STATIC_FUNCTION(resetTextureRect) 
	#endif

	#ifndef GEODE_STATICS_setBeingUsed
		#define GEODE_STATICS_setBeingUsed
		GEODE_AS_STATIC_FUNCTION(setBeingUsed) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayFrame
		#define GEODE_STATICS_updateDisplayFrame
		GEODE_AS_STATIC_FUNCTION(updateDisplayFrame) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpritePart> : ModifyBase<ModifyDerive<Der, CCSpritePart>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpritePart>>;
		using ModifyBase<ModifyDerive<Der, CCSpritePart>>::ModifyBase;
		using Base = CCSpritePart;
        using Derived = Der;
		void apply() override {

		}
	};
}
