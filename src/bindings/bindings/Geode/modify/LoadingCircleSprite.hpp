#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LoadingCircleSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_fadeInCircle
		#define GEODE_STATICS_fadeInCircle
		GEODE_AS_STATIC_FUNCTION(fadeInCircle) 
	#endif

	#ifndef GEODE_STATICS_hideCircle
		#define GEODE_STATICS_hideCircle
		GEODE_AS_STATIC_FUNCTION(hideCircle) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LoadingCircleSprite> : ModifyBase<ModifyDerive<Der, LoadingCircleSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LoadingCircleSprite>>;
		using ModifyBase<ModifyDerive<Der, LoadingCircleSprite>>::ModifyBase;
		using Base = LoadingCircleSprite;
        using Derived = Der;
		void apply() override {

		}
	};
}
