#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

	#ifndef GEODE_STATICS_sphericalRadius
		#define GEODE_STATICS_sphericalRadius
		GEODE_AS_STATIC_FUNCTION(sphericalRadius) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCOrbitCamera> : ModifyBase<ModifyDerive<Der, cocos2d::CCOrbitCamera>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCOrbitCamera>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCOrbitCamera>>::ModifyBase;
		using Base = cocos2d::CCOrbitCamera;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, float, float, float, float>::func(&cocos2d::CCOrbitCamera::create)), Cdecl, cocos2d::CCOrbitCamera, create, float, float, float, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, float, float, float, float>::func(&cocos2d::CCOrbitCamera::initWithDuration)), Thiscall, cocos2d::CCOrbitCamera, initWithDuration, float, float, float, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*, float*>::func(&cocos2d::CCOrbitCamera::sphericalRadius)), Thiscall, cocos2d::CCOrbitCamera, sphericalRadius, float*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCOrbitCamera::copyWithZone)), Thiscall, cocos2d::CCOrbitCamera, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCOrbitCamera::update)), Thiscall, cocos2d::CCOrbitCamera, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCOrbitCamera::startWithTarget)), Thiscall, cocos2d::CCOrbitCamera, startWithTarget, cocos2d::CCNode*)
		}
	};
}
