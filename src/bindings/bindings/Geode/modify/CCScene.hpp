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

	#ifndef GEODE_STATICS_getHighestChildZ
		#define GEODE_STATICS_getHighestChildZ
		GEODE_AS_STATIC_FUNCTION(getHighestChildZ) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCScene> : ModifyBase<ModifyDerive<Der, cocos2d::CCScene>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCScene>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCScene>>::ModifyBase;
		using Base = cocos2d::CCScene;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCScene::create)), Cdecl, cocos2d::CCScene, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCScene::getHighestChildZ)), Thiscall, cocos2d::CCScene, getHighestChildZ, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCScene::init)), Thiscall, cocos2d::CCScene, init, )
		}
	};
}
