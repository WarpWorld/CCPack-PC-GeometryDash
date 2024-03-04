#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_gameDidSave
		#define GEODE_STATICS_gameDidSave
		GEODE_AS_STATIC_FUNCTION(gameDidSave) 
	#endif

	#ifndef GEODE_STATICS_openURL
		#define GEODE_STATICS_openURL
		GEODE_AS_STATIC_FUNCTION(openURL) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCApplication> : ModifyBase<ModifyDerive<Der, cocos2d::CCApplication>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCApplication>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCApplication>>::ModifyBase;
		using Base = cocos2d::CCApplication;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCApplication::gameDidSave)), Thiscall, cocos2d::CCApplication, gameDidSave, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCApplication::openURL)), Thiscall, cocos2d::CCApplication, openURL, char const*)
		}
	};
}
