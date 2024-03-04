#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJTransformControlDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_transformScaleXChanged
		#define GEODE_STATICS_transformScaleXChanged
		GEODE_AS_STATIC_FUNCTION(transformScaleXChanged) 
	#endif

	#ifndef GEODE_STATICS_transformScaleYChanged
		#define GEODE_STATICS_transformScaleYChanged
		GEODE_AS_STATIC_FUNCTION(transformScaleYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformScaleXYChanged
		#define GEODE_STATICS_transformScaleXYChanged
		GEODE_AS_STATIC_FUNCTION(transformScaleXYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformRotationXChanged
		#define GEODE_STATICS_transformRotationXChanged
		GEODE_AS_STATIC_FUNCTION(transformRotationXChanged) 
	#endif

	#ifndef GEODE_STATICS_transformRotationYChanged
		#define GEODE_STATICS_transformRotationYChanged
		GEODE_AS_STATIC_FUNCTION(transformRotationYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformRotationChanged
		#define GEODE_STATICS_transformRotationChanged
		GEODE_AS_STATIC_FUNCTION(transformRotationChanged) 
	#endif

	#ifndef GEODE_STATICS_transformResetRotation
		#define GEODE_STATICS_transformResetRotation
		GEODE_AS_STATIC_FUNCTION(transformResetRotation) 
	#endif

	#ifndef GEODE_STATICS_transformRestoreRotation
		#define GEODE_STATICS_transformRestoreRotation
		GEODE_AS_STATIC_FUNCTION(transformRestoreRotation) 
	#endif

	#ifndef GEODE_STATICS_transformSkewXChanged
		#define GEODE_STATICS_transformSkewXChanged
		GEODE_AS_STATIC_FUNCTION(transformSkewXChanged) 
	#endif

	#ifndef GEODE_STATICS_transformSkewYChanged
		#define GEODE_STATICS_transformSkewYChanged
		GEODE_AS_STATIC_FUNCTION(transformSkewYChanged) 
	#endif

	#ifndef GEODE_STATICS_transformChangeBegin
		#define GEODE_STATICS_transformChangeBegin
		GEODE_AS_STATIC_FUNCTION(transformChangeBegin) 
	#endif

	#ifndef GEODE_STATICS_transformChangeEnded
		#define GEODE_STATICS_transformChangeEnded
		GEODE_AS_STATIC_FUNCTION(transformChangeEnded) 
	#endif

	#ifndef GEODE_STATICS_updateTransformControl
		#define GEODE_STATICS_updateTransformControl
		GEODE_AS_STATIC_FUNCTION(updateTransformControl) 
	#endif

	#ifndef GEODE_STATICS_anchorPointMoved
		#define GEODE_STATICS_anchorPointMoved
		GEODE_AS_STATIC_FUNCTION(anchorPointMoved) 
	#endif

	#ifndef GEODE_STATICS_getTransformNode
		#define GEODE_STATICS_getTransformNode
		GEODE_AS_STATIC_FUNCTION(getTransformNode) 
	#endif

	#ifndef GEODE_STATICS_getUI
		#define GEODE_STATICS_getUI
		GEODE_AS_STATIC_FUNCTION(getUI) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJTransformControlDelegate> : ModifyBase<ModifyDerive<Der, GJTransformControlDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJTransformControlDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJTransformControlDelegate>>::ModifyBase;
		using Base = GJTransformControlDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
