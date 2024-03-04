#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJScaleControlDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scaleXChanged
		#define GEODE_STATICS_scaleXChanged
		GEODE_AS_STATIC_FUNCTION(scaleXChanged) 
	#endif

	#ifndef GEODE_STATICS_scaleYChanged
		#define GEODE_STATICS_scaleYChanged
		GEODE_AS_STATIC_FUNCTION(scaleYChanged) 
	#endif

	#ifndef GEODE_STATICS_scaleXYChanged
		#define GEODE_STATICS_scaleXYChanged
		GEODE_AS_STATIC_FUNCTION(scaleXYChanged) 
	#endif

	#ifndef GEODE_STATICS_scaleChangeBegin
		#define GEODE_STATICS_scaleChangeBegin
		GEODE_AS_STATIC_FUNCTION(scaleChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_scaleChangeEnded
		#define GEODE_STATICS_scaleChangeEnded
		GEODE_AS_STATIC_FUNCTION(scaleChangeEnded) 
	#endif

	#ifndef GEODE_STATICS_updateScaleControl
		#define GEODE_STATICS_updateScaleControl
		GEODE_AS_STATIC_FUNCTION(updateScaleControl) 
	#endif

	#ifndef GEODE_STATICS_anchorPointMoved
		#define GEODE_STATICS_anchorPointMoved
		GEODE_AS_STATIC_FUNCTION(anchorPointMoved) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJScaleControlDelegate> : ModifyBase<ModifyDerive<Der, GJScaleControlDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJScaleControlDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJScaleControlDelegate>>::ModifyBase;
		using Base = GJScaleControlDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
